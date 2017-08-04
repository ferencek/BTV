import utility

if __name__ == '__main__':

  # List of all the campaings you want to create, their location is config/<campaign_name>
  # NOTE: once created, change each campaign config manually since they are copied from 
  # templates in utility/templates/config
  campaigns       = ['test']

  # Part which setups campaigns
  utility.setup_campaigns( campaigns, __file__)

  # Choose which job you want to execute
  job = int(utility.setup_job())

  # Loop over campaigns
  for _n, _c in enumerate(campaigns):

    utility.Print('status', '\nWorking on campaign {0}'.format(_c))

    config = getattr(__import__('config', fromlist=[_c]), _c)

    # Initalize handlers for each step
    file_tool       = utility.FileTool(config)
    histogram_tool  = utility.HistogramTool(config)
    merge_tool      = utility.MergeTool(config)
  
    if job == 1:
      file_tool.save_logical_file_names_all_samples_remotely()

    elif job == 2:
      file_tool.check_missing_files_all_samples_remotely()

    elif job == 3:
      file_tool.save_logical_file_names_all_samples_locally()

    elif job == 4: 
      file_tool.copy_files_all_samples_locally()

    elif job == 5:
      file_tool.check_missing_files_all_samples_locally()

    elif job == 6:
      histogram_tool.make_and_send_jobs()

    elif job == 7:
      merge_tool.merge_histograms()

    elif job == 8:
      merge_tool.merge_datasets()
    
    else:
      pass
