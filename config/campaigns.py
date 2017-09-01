info = {
  
  'A': {
    # Dictionary of all samples with their list of subsamples. They are defined in samples.py
    'samples' :{
      'BTagMu': ['0','1','2','3','4','5']
    },
    # Name of the root final with final histograms
    'final_output'        : 'A_Final_DoubleMuonTaggedFatJets_MuonEnrichedJets_dataWithMCJP_histograms_btagval.root',
    # Dictionary of all variables that need to be changed for each campaign
    'btagvalidation_cfg'  : {}
  },

  'B': {
    # Dictionary of all samples with their list of subsamples. They are defined in samples.py
    'samples':{
      'BTagMu': ['0']
    },
    # Name of the root final with final histograms
    'final_output'        : 'B_Final_DoubleMuonTaggedFatJets_MuonEnrichedJets_dataWithMCJP_histograms_btagval.root',
    # Dictionary of all variables that need to be changed for each campaign
    'btagvalidation_cfg'  : {}
  }

}