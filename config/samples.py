# List of samples used for each campaign, campaign defined in general.py
campaign        = {
  'test'   : ['all'],
}

info = {
  # ------------------------------------ Data ------------------------------------------
  'BTagMu':{
    'type'    : 'Data',
    'group'   : 'DATA',
    'subsample' : {
      '0' : 'BTagMu_Run2016B-23Sep2016-v3_MINIAOD_mcJPcalib_12616_v4',
      '1' : 'BTagMu_Run2016C-23Sep2016-v1_MINIAOD_mcJPcalib_12616_v4',
      '2' : 'BTagMu_Run2016D-23Sep2016-v1_MINIAOD_mcJPcalib_12616_v4',
      '3' : 'BTagMu_Run2016E-23Sep2016-v1_MINIAOD_mcJPcalib_12616_v4',
      '4' : 'BTagMu_Run2016F-23Sep2016-v1_MINIAOD_mcJPcalib_12616_v4',
      '5' : 'BTagMu_Run2016G-23Sep2016-v1_MINIAOD_mcJPcalib_12616_v4_full',
      '6' : 'BTagMu_Run2016H-PromptReco-v2_MINIAOD_mcJPcalib_12616_v4',
      '7' : 'BTagMu_Run2016H-PromptReco-v3_MINIAOD_mcJPcalib_12616_v4',
    },
    # --- btagvalidation_cfg ---
    'btagvalidation_cfg': {}
  },
  # -------------------------------------- MC ------------------------------------------
  'QCD_Pt-120to170_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8':{
    'type'    : 'MC',
    'group'   : 'QCD',
    'subsample' : {
      '0' : 'QCD_Pt_120-170_MuEnriched_mcJPcalib_12616_v4_full',
      '1' : 'QCD_Pt_120-170_MuEnriched_mcJPcalib_12616_backup_v4_full',
    },
    'xs':{
      '0' : 25190.51514,
      '1' : 25190.51514,
    },
    # --- btagvalidation_cfg ---
    'btagvalidation_cfg': {}
  },
  'QCD_Pt-170to300_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8':{
    'type'    : 'MC',
    'group'   : 'QCD',
    'subsample' : {
      '0' : 'QCD_Pt_170-300_MuEnriched_mcJPcalib_12616_v4_full',
      '1' : 'QCD_Pt_170-300_MuEnriched_mcJPcalib_12616_backup_v4',
      '2' : 'QCD_Pt_170-300_MuEnriched_mcJPcalib_12616_ext1_v4',
    },
    'xs':{
      '0' : 8654.49315,
      '1' : 8654.49315,
      '2' : 8654.49315,
    },
    # --- btagvalidation_cfg ---
    'btagvalidation_cfg': {}
  },
  'QCD_Pt-300to470_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8':{
    'type'    : 'MC',   
    'group'   : 'QCD',
    'subsample' : {
      '0' : 'QCD_Pt_300-470_MuEnriched_mcJPcalib_12616_v4_full',
      '1' : 'QCD_Pt_300-470_MuEnriched_mcJPcalib_12616_ext1_v4_full',
      '2' : 'QCD_Pt_300-470_MuEnriched_mcJPcalib_12616_ext2_v4_full',
    },
    'xs':{
      '0' : 797.3526900,
      '1' : 797.3526900,
      '2' : 797.3526900,
    },
    # --- btagvalidation_cfg ---
    'btagvalidation_cfg': {
      #'doJECUncert'             : True,
    }
  },
  'QCD_Pt-470to600_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8':{
    'type'    : 'MC',
    'group'   : 'QCD',
    'subsample' : {
      '0' : 'QCD_Pt_470-600_MuEnriched_mcJPcalib_12616_v4_full',
      '1' : 'QCD_Pt_470-600_MuEnriched_mcJPcalib_12616_ext1_v4_full',
      '2' : 'QCD_Pt_470-600_MuEnriched_mcJPcalib_12616_ext2_v4_full',
    },
    'xs':{
      '0' : 79.02553776,
      '1' : 79.02553776,
      '2' : 79.02553776,
    },
    # --- btagvalidation_cfg ---
    'btagvalidation_cfg': {}
  },
  'QCD_Pt-600to800_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8':{
    'type'    : 'MC',
    'group'   : 'QCD',
    'subsample' : {
      '0' : 'QCD_Pt_600-800_MuEnriched_mcJPcalib_12616_v4_full',
      '1' : 'QCD_Pt_600-800_MuEnriched_mcJPcalib_12616_ext1_v4_full',
      '2' : 'QCD_Pt_600-800_MuEnriched_mcJPcalib_12616_backup_v4_full',
    },
    'xs':{
      '0' : 25.09505908,
      '1' : 25.09505908,
      '2' : 25.09505908,
    },
    # --- btagvalidation_cfg ---
    'btagvalidation_cfg': {}
  },
  'QCD_Pt-800to1000_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8':{
    'type'    : 'MC',
    'group'   : 'QCD',
    'subsample' : {
      '0' : 'QCD_Pt_800-1000_MuEnriched_mcJPcalib_12616_v4_full',
      '1' : 'QCD_Pt_800-1000_MuEnriched_mcJPcalib_12616_ext1_v4_full',
      '2' : 'QCD_Pt_800-1000_MuEnriched_mcJPcalib_12616_ext2_v4_full',
    },
    'xs':{
      '0' : 4.707368272,
      '1' : 4.707368272,
      '2' : 4.707368272,
    },
    # --- btagvalidation_cfg ---
    'btagvalidation_cfg': {}
  },
  'QCD_Pt-1000toInf_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8':{
    'type'    : 'MC',
    'group'   : 'QCD',
    'subsample' : {
      '0' : 'QCD_Pt_1000-Inf_MuEnriched_mcJPcalib_12616_v4_full',
      '1' : 'QCD_Pt_1000-Inf_MuEnriched_mcJPcalib_12616_v4_full_ext1',
    },
    'xs':{
      '0' : 1.621316920,
      '1' : 1.621316920,
    },
    # --- btagvalidation_cfg ---
    'btagvalidation_cfg': {}
  },
}