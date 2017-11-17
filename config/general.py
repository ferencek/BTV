# ------- General options ----------
# campaign name, needed for list of samples definition, etc...

# campaigns       = ['caseA', 'caseB','caseC','caseD']
# campaigns       = [	
# 					'AK8Jet300andAK4DiJet70_caseD',
# 					'AK4Jet300andAK4DiJet70_caseD',
# 					'AK4DiJet170andAK4DiJet70_caseD',
# 					'AK8DiJet170andAK4DiJet70_caseD',
# 					'AK4DiJet70_caseD',
# 					'AK8Jet300andAK4DiJet110_caseD',
# 					'AK4Jet300andAK4DiJet110_caseD',
# 					'AK4DiJet170andAK4DiJet110_caseD',
# 					'AK8DiJet170andAK4DiJet110_caseD',
# 					'AK4DiJet110_caseD',
# 					]
# campaigns       = [	
# 					'AK8Jet300andAK4DiJet110_Run2017CD',
# 					'AK4Jet300andAK4DiJet110_Run2017CD',
# 					'AK4DiJet170andAK4DiJet110_Run2017CD',
# 					'AK8DiJet170andAK4DiJet110_Run2017CD',
# 					'AK4DiJet110_Run2017CD',
# 					]
# campaigns       = [	
# 					'AK8Jet300orAK4Jet300_andAK4DiJet110_Run2017CD',
# 					]
# campaigns       = [	
# 					'Run2017CD_QCDMuEnriched_Pt350',
# 					'Run2017Case4_QCDMuEnriched_Pt350',
# 					'Run2017CD_QCDMuEnriched_Pt250',
# 					'Run2017Case4_QCDMuEnriched_Pt250',
# 					]
campaigns       = [	
# 					'AK8Jet300orAK4Jet300_Run2017CD',
# 					'AK4DiJet110_Run2017CD',
					'AK4DiJet170_Run2017CD',
					]
# campaigns       = [	
# 					'Run2017CD_QCDMuEnriched_Pt350_singleMuTag',
# 					]


# Choose True if you want to overwrite already existing files/results
force_all       = True
# If True all files are copied locally and used, else use files from original location
work_locally    = False

# -------- Merge options -----------
# Luminosity (this number doesn't mean anything since data/MC is "manually" scaled)
luminosity      = 1
# Name of the analyzer
analyzer_module = 'btagval'
# Groups for histogram merging
# groups          = ['DATA', 'QCD']
groups          = ['DATA']

# -------- Batch options -----------
# Choose if you want to use batch: False, condor, lxbatch
batch_type      = 'lxbatch' # 'condor' #  
# Number of jobs per sample: -1 = all, x = some arbitrary number
number_of_jobs  = -1
# Number of files per job
number_of_files = 10
# Send jobs switch
send_jobs       = True
# lxbatch options
queue_lxbatch   = 'cmscaf1nh' # LXBatch queue (choose among cmst3 8nm 1nh 8nh 1nd 1nw)
# batch templates
batch_templates = {
  'copy'      : ['copy.txt','copy.py', 'copy.sh'],
  'histogram' : ['histogram.txt','btagvalidation_cfg.py', 'histogram.sh'],
  'check'     : ['check.txt','check.py', 'check.sh'],
}

# -------- Browse/copy options -----------
remote_locations = {
  'storage_element' : {
    'eos' : '/eoscms.cern.ch/', # Used for gfal
    # 'eos' : '/srm-eoscms.cern.ch:8443/srm/v2/server?SFN=', # Used for lcg
  },
  'path'   : {
    'eos' : 'store/group/phys_btag/BoostedBTag/BTagNTuples/2017/9_2_X',   # Used for gfal
    # 'eos' : 'eos/cms/store/group/phys_btag/BoostedBTag/BTagNTuples/2017/9_2_X', # Used for lcg
  },
  'path_ex': {
    'eos' : '/eos/cms/store/group/phys_btag/BoostedBTag/BTagNTuples/2017/9_2_X',   
  },
  'protocol': {
    'eos'  : 'root:/', # Used for gfal
    # 'eos'  : 'srm:/', # Used for lcg
  },
}
# Keywords which are going to be searched (or not) for.
search_keywords = {
  'all' : ['.root'],
  'any' : [],
  'none': ['failed', 'log']
}