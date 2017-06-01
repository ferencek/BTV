import config
import utility

if __name__ == '__main__':

  # # ------------------------ Step 1 - Locate all the samples and their files -----------------------
  # file_tool = utility.FileTool(config)
 
  # # Part with remote files
  # file_tool.save_logical_file_names_all_samples_remotely()
  # file_tool.check_missing_files_all_samples_remotely()

  # Part with local files
  # file_tool.save_logical_file_names_all_samples_locally()
  # file_tool.copy_files_all_samples_locally()
  # file_tool.check_missing_files_all_samples_locally()

  # # ------------ Step 2 - Create histograms by making jobs and sending them to batch ------------
  # histogram_tool = utility.HistogramTool(config)
  # histogram_tool.make_and_send_jobs()

  # # ------------------------ Step 3 - Merge histograms -----------------------------------------
  # merge_tool = utility.MergeTool(config)
  # merge_tool.merge_histograms()
  # merge_tool.merge_datasets()
