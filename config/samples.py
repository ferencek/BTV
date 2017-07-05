# List of samples used for each campaign, campaign defined in general.py
campaign        = {
  'test'      : ['all'],
  'test_fpj'  : ['all'],
  '350'       : ['all'],
  '250'       : ['all'],
  'inclusive' : ['all'] #['JetHT'] #
}

info = {  
  # ------------------------------------ Data ------------------------------------------
  'JetHT':{
    'type'    : 'Data',
    'group'   : 'DATA',
    'subsample' : {
      '0' : 'JetHT_Run2016B-23Sep2016-v3_MINIAOD_mcJPcalib_12616',
      '1' : 'JetHT_Run2016C-23Sep2016-v1_MINIAOD_mcJPcalib_12616',
      '2' : 'JetHT_Run2016D-23Sep2016-v1_MINIAOD_mcJPcalib_12616',
      '3' : 'JetHT_Run2016E-23Sep2016-v1_MINIAOD_mcJPcalib_12616',
      '4' : 'JetHT_Run2016F-23Sep2016-v1_MINIAOD_mcJPcalib_12616',
      '5' : 'JetHT_Run2016G-23Sep2016-v1_MINIAOD_mcJPcalib_12616',
      '6' : 'JetHT_Run2016H-PromptReco-v2_MINIAOD_mcJPcalib_12616',
      '7' : 'JetHT_Run2016H-PromptReco-v3_MINIAOD_mcJPcalib_12616',
    },
    # --- btagvalidation_cfg ---
    'btagvalidation_cfg': {}
  },

  # -------------------------------------- MC ------------------------------------------
  'QCD_Pt_170to300_TuneCUETP8M1_13TeV_pythia8':{
    'type'    : 'MC',
    'group'   : 'QCD',
    'subsample' : {
      '0' : 'QCD_Pt_170-300_Inclusive_mcJPcalib_12616',
    },
    'xs':{
      '0' : 1.172e+05, #cmsRun ana.py inputFiles="/store/mc/RunIISummer16MiniAODv2/QCD_Pt_170to300_TuneCUETP8M1_13TeV_pythia8/MINIAODSIM/PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6_ext1-v1/50000/02D7719D-01B5-E611-A239-A0000420FE80.root" maxEvents=-1
    },
    # --- btagvalidation_cfg ---
    'btagvalidation_cfg': {}
  },

  'QCD_Pt_300to470_TuneCUETP8M1_13TeV_pythia8':{
    'type'    : 'MC',
    'group'   : 'QCD',
    'subsample' : {
      '0' : 'QCD_Pt_300-470_Inclusive_mcJPcalib_12616',
    },
    'xs':{
      '0' : 7.760e+03, # cmsRun ana.py inputFiles="/store/mc/RunIISummer16MiniAODv2/QCD_Pt_300to470_TuneCUETP8M1_13TeV_pythia8/MINIAODSIM/PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1/80000/008761B6-F5B4-E611-AC01-0CC47A706D26.root" maxEvents=-1
    },
    # --- btagvalidation_cfg ---
    'btagvalidation_cfg': {}
  },

  'QCD_Pt_470to600_TuneCUETP8M1_13TeV_pythia8':{
    'type'    : 'MC',
    'group'   : 'QCD',
    'subsample' : {
      '0' : 'QCD_Pt_470-600_Inclusive_mcJPcalib_12616',
      '1' : 'QCD_Pt_470-600_Inclusive_mcJPcalib_12616_backup'
    },
    'xs':{
      '0' : 6.417e+02*0.5, # cmsRun ana.py inputFiles="/store/mc/RunIISummer16MiniAODv2/QCD_Pt_470to600_TuneCUETP8M1_13TeV_pythia8/MINIAODSIM/PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1/60000/022C3683-D4AB-E611-AC4D-3417EBE70078.root" maxEvents=-1
      '1' : 6.407e+02*0.5  # cmsRun ana.py inputFiles="/store/mc/RunIISummer16MiniAODv2/QCD_Pt_470to600_TuneCUETP8M1_13TeV_pythia8/MINIAODSIM/PUMoriond17_backup_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1/110000/0217976D-B8B4-E611-8345-001E67E0061C.root" maxEvents=-1
    },
    # --- btagvalidation_cfg ---
    'btagvalidation_cfg': {}
  },

  'QCD_Pt_600to800_TuneCUETP8M1_13TeV_pythia8':{
    'type'    : 'MC',
    'group'   : 'QCD',
    'subsample' : {
      '0' : 'QCD_Pt_600-800_Inclusive_mcJPcalib_12616', 
      '1' : 'QCD_Pt_600-800_Inclusive_mcJPcalib_12616_backup'
    },
    'xs':{
      '0' : 1.852e+02*0.5, # cmsRun ana.py inputFiles="/store/mc/RunIISummer16MiniAODv2/QCD_Pt_600to800_TuneCUETP8M1_13TeV_pythia8/MINIAODSIM/PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1/70000/0048131D-3CB3-E611-813A-001E67DFFB31.root" maxEvents=-1
      '1' : 1.857e+02*0.5  # cmsRun ana.py inputFiles="/store/mc/RunIISummer16MiniAODv2/QCD_Pt_600to800_TuneCUETP8M1_13TeV_pythia8/MINIAODSIM/PUMoriond17_backup_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1/110000/0085453C-7DB6-E611-B5D4-002590D0AFCA.root" maxEvents=-1
    },
    # --- btagvalidation_cfg ---
    'btagvalidation_cfg': {}
  },

  'QCD_Pt_800to1000_TuneCUETP8M1_13TeV_pythia8':{
    'type'    : 'MC',
    'group'   : 'QCD',
    'subsample' : {
      '0' : 'QCD_Pt_800-1000_Inclusive_mcJPcalib_12616',
      '1' : 'QCD_Pt_800-1000_Inclusive_mcJPcalib_12616_ext1'
    },
    'xs':{
      '0' : 3.208e+01*0.5, # cmsRun ana.py inputFiles="/store/mc/RunIISummer16MiniAODv2/QCD_Pt_800to1000_TuneCUETP8M1_13TeV_pythia8/MINIAODSIM/PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1/120000/14E8104C-9AB0-E611-86C7-001E673CFC91.root" maxEvents=-1
      '1' : 3.204e+01*0.5  # cmsRun ana.py inputFiles="/store/mc/RunIISummer16MiniAODv2/QCD_Pt_800to1000_TuneCUETP8M1_13TeV_pythia8/MINIAODSIM/PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6_ext1-v1/110000/000D6738-6EB1-E611-8451-0CC47A4D76B8.root" maxEvents=-1
    },
    # --- btagvalidation_cfg ---
    'btagvalidation_cfg': {}
  },

  'QCD_Pt_1000to1400_TuneCUETP8M1_13TeV_pythia8':{
    'type'    : 'MC',
    'group'   : 'QCD',
    'subsample' : {
      '0' : 'QCD_Pt_1000-1400_Inclusive_mcJPcalib_12616',
      '1' : 'QCD_Pt_1000-1400_Inclusive_mcJPcalib_12616_ext1'
    },
    'xs':{
      '0' : 9.354*0.5, # cmsRun ana.py inputFiles="/store/mc/RunIISummer16MiniAODv2/QCD_Pt_1000to1400_TuneCUETP8M1_13TeV_pythia8/MINIAODSIM/PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1/80000/002BD1CD-24B5-E611-A29C-0025907254C8.root" maxEvents=-1
      '1' : 9.390*0.5  # cmsRun ana.py inputFiles="/store/mc/RunIISummer16MiniAODv2/QCD_Pt_1000to1400_TuneCUETP8M1_13TeV_pythia8/MINIAODSIM/PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6_ext1-v1/60000/000B9FF0-11B6-E611-9083-008CFA0A5844.root" maxEvents=-1
    },
    # --- btagvalidation_cfg ---
    'btagvalidation_cfg': {}
  },

  'QCD_Pt_1400to1800_TuneCUETP8M1_13TeV_pythia8':{
    'type'    : 'MC',
    'group'   : 'QCD',
    'subsample' : {
      '0' : 'QCD_Pt_1400-1800_Inclusive_mcJPcalib_12616',
      '1' : 'QCD_Pt_1400-1800_Inclusive_mcJPcalib_12616_ext1'
    },
    'xs':{
      '0' : 8.406e-01*0.5, # cmsRun ana.py inputFiles="/store/mc/RunIISummer16MiniAODv2/QCD_Pt_1400to1800_TuneCUETP8M1_13TeV_pythia8/MINIAODSIM/PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1/110000/021F2782-BEB1-E611-8581-0025905A48E4.root" maxEvents=-1
      '1' : 8.360e-01*0.5  # cmsRun ana.py inputFiles="/store/mc/RunIISummer16MiniAODv2/QCD_Pt_1400to1800_TuneCUETP8M1_13TeV_pythia8/MINIAODSIM/PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6_ext1-v1/110000/A2C23801-9DAE-E611-8369-008CFA0A58B0.root" maxEvents=-1
    },
    # --- btagvalidation_cfg ---
    'btagvalidation_cfg': {}
  },

  'QCD_Pt_1800to2400_TuneCUETP8M1_13TeV_pythia8':{
    'type'    : 'MC',
    'group'   : 'QCD',
    'subsample' : {
      '0' : 'QCD_Pt_1800-2400_Inclusive_mcJPcalib_12616',
    },
    'xs':{
      '0' : 1.124e-01, # cmsRun ana.py inputFiles="/store/mc/RunIISummer16MiniAODv2/QCD_Pt_1800to2400_TuneCUETP8M1_13TeV_pythia8/MINIAODSIM/PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1/70000/544D528B-03B3-E611-B70A-B083FED4263D.root" maxEvents=-1
    },
    # --- btagvalidation_cfg ---
    'btagvalidation_cfg': {}
  },

  'QCD_Pt_2400to3200_TuneCUETP8M1_13TeV_pythia8':{
    'type'    : 'MC',
    'group'   : 'QCD',
    'subsample' : {
      '0' : 'QCD_Pt_2400-3200_Inclusive_mcJPcalib_12616',
    },
    'xs':{
      '0' : 6.762e-03, # cmsRun ana.py inputFiles="/store/mc/RunIISummer16MiniAODv2/QCD_Pt_2400to3200_TuneCUETP8M1_13TeV_pythia8/MINIAODSIM/PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1/110000/060A4CEC-A4B1-E611-921A-0CC47A7C3434.root" maxEvents=-1
    },
    # --- btagvalidation_cfg ---
    'btagvalidation_cfg': {}
  },

}

# info = {  
#   # ------------------------------------ Data ------------------------------------------
#   'BTagMu':{
#     'type'    : 'Data',
#     'group'   : 'DATA',
#     'subsample' : {
#       '0' : 'BTagMu_Run2016B-23Sep2016-v3_MINIAOD_mcJPcalib_12616_v4',
#       '1' : 'BTagMu_Run2016C-23Sep2016-v1_MINIAOD_mcJPcalib_12616_v4',
#       '2' : 'BTagMu_Run2016D-23Sep2016-v1_MINIAOD_mcJPcalib_12616_v4',
#       '3' : 'BTagMu_Run2016E-23Sep2016-v1_MINIAOD_mcJPcalib_12616_v4',
#       '4' : 'BTagMu_Run2016F-23Sep2016-v1_MINIAOD_mcJPcalib_12616_v4',
#       '5' : 'BTagMu_Run2016G-23Sep2016-v1_MINIAOD_mcJPcalib_12616_v4_full',
#       '6' : 'BTagMu_Run2016H-PromptReco-v2_MINIAOD_mcJPcalib_12616_v4',
#       '7' : 'BTagMu_Run2016H-PromptReco-v3_MINIAOD_mcJPcalib_12616_v4',
#     },
#     # --- btagvalidation_cfg ---
#     'btagvalidation_cfg': {}
#   },
#   # -------------------------------------- MC ------------------------------------------
#   'QCD_Pt-120to170_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8':{
#     'type'    : 'MC',
#     'group'   : 'QCD',
#     'subsample' : {
#       '0' : 'QCD_Pt_120-170_MuEnriched_mcJPcalib_12616_v4_full',
#       '1' : 'QCD_Pt_120-170_MuEnriched_mcJPcalib_12616_backup_v4_full',
#     },
#     'xs':{
#       '0' : 25190.51514,
#       '1' : 25190.51514,
#     },
#     # --- btagvalidation_cfg ---
#     'btagvalidation_cfg': {}
#   },
#   'QCD_Pt-170to300_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8':{
#     'type'    : 'MC',
#     'group'   : 'QCD',
#     'subsample' : {
#       '0' : 'QCD_Pt_170-300_MuEnriched_mcJPcalib_12616_v4_full',
#       '1' : 'QCD_Pt_170-300_MuEnriched_mcJPcalib_12616_backup_v4',
#       '2' : 'QCD_Pt_170-300_MuEnriched_mcJPcalib_12616_ext1_v4',
#     },
#     'xs':{
#       '0' : 8654.49315,
#       '1' : 8654.49315,
#       '2' : 8654.49315,
#     },
#     # --- btagvalidation_cfg ---
#     'btagvalidation_cfg': {}
#   },
#   'QCD_Pt-300to470_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8':{
#     'type'    : 'MC',   
#     'group'   : 'QCD',
#     'subsample' : {
#       '0' : 'QCD_Pt_300-470_MuEnriched_mcJPcalib_12616_v4_full',
#       '1' : 'QCD_Pt_300-470_MuEnriched_mcJPcalib_12616_ext1_v4_full',
#       '2' : 'QCD_Pt_300-470_MuEnriched_mcJPcalib_12616_ext2_v4_full',
#     },
#     'xs':{
#       '0' : 797.3526900,
#       '1' : 797.3526900,
#       '2' : 797.3526900,
#     },
#     # --- btagvalidation_cfg ---
#     'btagvalidation_cfg': {
#       #'doJECUncert'             : True,
#     }
#   },
#   'QCD_Pt-470to600_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8':{
#     'type'    : 'MC',
#     'group'   : 'QCD',
#     'subsample' : {
#       '0' : 'QCD_Pt_470-600_MuEnriched_mcJPcalib_12616_v4_full',
#       '1' : 'QCD_Pt_470-600_MuEnriched_mcJPcalib_12616_ext1_v4_full',
#       '2' : 'QCD_Pt_470-600_MuEnriched_mcJPcalib_12616_ext2_v4_full',
#     },
#     'xs':{
#       '0' : 79.02553776,
#       '1' : 79.02553776,
#       '2' : 79.02553776,
#     },
#     # --- btagvalidation_cfg ---
#     'btagvalidation_cfg': {}
#   },
#   'QCD_Pt-600to800_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8':{
#     'type'    : 'MC',
#     'group'   : 'QCD',
#     'subsample' : {
#       '0' : 'QCD_Pt_600-800_MuEnriched_mcJPcalib_12616_v4_full',
#       '1' : 'QCD_Pt_600-800_MuEnriched_mcJPcalib_12616_ext1_v4_full',
#       '2' : 'QCD_Pt_600-800_MuEnriched_mcJPcalib_12616_backup_v4_full',
#     },
#     'xs':{
#       '0' : 25.09505908,
#       '1' : 25.09505908,
#       '2' : 25.09505908,
#     },
#     # --- btagvalidation_cfg ---
#     'btagvalidation_cfg': {}
#   },
#   'QCD_Pt-800to1000_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8':{
#     'type'    : 'MC',
#     'group'   : 'QCD',
#     'subsample' : {
#       '0' : 'QCD_Pt_800-1000_MuEnriched_mcJPcalib_12616_v4_full',
#       '1' : 'QCD_Pt_800-1000_MuEnriched_mcJPcalib_12616_ext1_v4_full',
#       '2' : 'QCD_Pt_800-1000_MuEnriched_mcJPcalib_12616_ext2_v4_full',
#     },
#     'xs':{
#       '0' : 4.707368272,
#       '1' : 4.707368272,
#       '2' : 4.707368272,
#     },
#     # --- btagvalidation_cfg ---
#     'btagvalidation_cfg': {}
#   },
#   'QCD_Pt-1000toInf_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8':{
#     'type'    : 'MC',
#     'group'   : 'QCD',
#     'subsample' : {
#       '0' : 'QCD_Pt_1000-Inf_MuEnriched_mcJPcalib_12616_v4_full',
#       '1' : 'QCD_Pt_1000-Inf_MuEnriched_mcJPcalib_12616_v4_full_ext1',
#     },
#     'xs':{
#       '0' : 1.621316920,
#       '1' : 1.621316920,
#     },
#     # --- btagvalidation_cfg ---
#     'btagvalidation_cfg': {}
#   },
# }