import os
import ROOT
import utility

def Print(print_type, text):

  try:
    if print_type == 'python_info': # Bright Yellow
      print '\033[1;33;40m' + ''.join(text) + '\033[0m'

    elif print_type == 'analysis_info': # Bright Cyan
      print '\033[1;36;40m' + ''.join(text) + '\033[0m'

    elif print_type == 'error':  # Bright Red
      print '\033[1;31;40m' + ''.join(text) + '\033[0m'

    elif print_type == 'status': # Bright Green
      print '\033[1;32;40m' + ''.join(text) + '\033[0m'

  except Exception, e:
    print(text)

def make_directory(*directory):

  directory = os.path.join(*directory)

  if not os.path.exists(directory):
    try:
      os.makedirs(directory)
    except OSError:
      if not os.path.isdir(directory):
        raise

  return directory

def filter_keywords(file_name, filter_keywords_all, filter_keywords_any, filter_keywords_none):
  '''  Filter files which have the keywords '''

  if not all(_k in file_name for _k in filter_keywords_all):
    return False
  elif not any(_k in file_name for _k in filter_keywords_any):
    return False
  elif any(_k in file_name for _k in filter_keywords_none):
    return False
  else:
    return True

def check_root_file(file_name):
    ''' 
    Check if file exists and if it's ok. If yes return True, else False
    '''

    _status = ''

    if os.path.isfile(file_name):

      try:

        f = ROOT.TFile.Open(file_name,'read')

        if (not f) or f.GetNkeys() == 0 or f.TestBit(ROOT.TFile.kRecovered) or f.IsZombie():
            
          _status = False

        else:
          _status = True

        f.Close()

      except Exception, e:
        _status = False

      if _status == False:
        utility.Print('error','ROOT file {0} is not ok.'.format(file_name))

    else:
      _status = False


    return _status
