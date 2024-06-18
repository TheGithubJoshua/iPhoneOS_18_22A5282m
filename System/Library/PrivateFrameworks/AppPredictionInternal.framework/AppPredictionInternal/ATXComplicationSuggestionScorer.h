@class ATXComplicationAppBundleIdsScorer, ATXComplicationSuggestionHeuristics;

@interface ATXComplicationSuggestionScorer : NSObject {
    ATXComplicationAppBundleIdsScorer *_bundleIdsScorer;
    ATXComplicationSuggestionHeuristics *_heuristics;
}

- (id)init;
- (id)_scoredComplicationsForInlineSetGivenDescriptors:(id)a0;
- (id)inputDescriptionForSignal:(id)a0 complicationDescriptors:(id)a1;
- (id)complicationDescriptorsForInlineSetGivenComplicationDescriptors:(id)a0;
- (id)complicationDescriptorsForModularSetGivenComplicationDescriptors:(id)a0;
- (id)modelDescription;
- (BOOL)_isNewlyInstalledWidget:(id)a0 additionalData:(id)a1;
- (void).cxx_destruct;
- (id)_appBundleIdsForComplicationDescriptors:(id)a0;
- (id)_scoredComplicationsForModularSetGivenDescriptors:(id)a0 appBundleIdScores:(id)a1 heuristicScores:(id)a2;
- (id)scoredComplicationDescriptorsForInlineSetGivenComplicationDescriptors:(id)a0;
- (BOOL)_modularSetIsSuggestibleGivenAppScoreDictionary:(id)a0;
- (id)scoredComplicationDescriptorsForModularSetGivenComplicationDescriptors:(id)a0 checkEligibility:(BOOL)a1;
- (id)_decaySubsequentScoresFromSameBundleId:(id)a0 decayFactor:(double)a1;

@end
