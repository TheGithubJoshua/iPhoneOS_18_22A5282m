@class NSDictionary, ATXModeEntityTrialClientWrapper;

@interface ATXAppModeEntityModelWeights : NSObject {
    NSDictionary *_appModeEntityModelWeights;
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
}

- (double)bias;
- (id)init;
- (void).cxx_destruct;
- (int)scalingFactor;
- (id)abGroup;
- (double)appCategoryScore;
- (double)appCategoryScore_v2;
- (double)classConditionalProbability;
- (double)entityOccurredGloballyOverLastNDays;
- (double)globalOccurrences;
- (double)globalPopularity;
- (double)modePopularity;
- (int)numOfDays;
- (double)posteriorProbability;
- (double)ratioModeAndGlobalPopularity;

@end
