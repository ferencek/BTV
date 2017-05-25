# ------- General options ----------
# campaign name, needed for list of samples definition, etc...
campaign        = 'test' # 'remote' #
# Choose True if you want to overwrite already existing files/results
force_all       = False
# If True all files are copied locally and used, else use files from original location
work_locally    = False
# -------- Merge options -----------
# Luminosity
luminosity      = 16578
analyzer_module = 'btagval'
# Groups for histogram merging
groups          = ['DATA', 'QCD']

# -------- Batch options -----------
# Choose if you want to use batch: False, condor, lxbatch
batch_type      = 'condor'
# Number of jobs per sample: -1 = all, x = some arbitrary number
number_of_jobs  = -1
# Number of files per job
number_of_files = 1
# Send jobs switch
send_jobs       = True
# lxbatch options
queue_lxbatch   = '8nh' # LXBatch queue (choose among cmst3 8nm 1nh 8nh 1nd 1nw)
# batch templates
batch_templates = {
  'copy'      : ['copy.txt','copy.py', 'copy.sh'],
  'histogram' : ['histogram.txt','btagvalidation_cfg.py', 'histogram.sh']
}

# -------- Browse/copy options -----------
remote_locations = {
  'storage_element' : {
    'eos' : '/eoscms.cern.ch/',
  },
  'path'   : {
    'eos' : 'store/group/phys_btag/BoostedBTag/BTagNTuples/8_0_X_v2.03',   
  },
  'path_ex': {
    'eos' : '/eos/cms/store/group/phys_btag/BoostedBTag/BTagNTuples/8_0_X_v2.03',   
  },
  'protocol': {
    'eos'  : 'root:/',
  },
}
# Keywords which are going to be searched (or not) for.
search_keywords = {
  'all' : ['.root'],
  'any' : [],
  'none': ['failed', '161222_224802', '161222_224636']
}