@class NSDictionary, ATXModeEntityTrialClientWrapper;

@interface ATXContactModeEntityDenyListModelWeights : NSObject {
    NSDictionary *_contactModeEntityDenyListModelWeights;
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
}

- (double)bias;
- (id)init;
- (void).cxx_destruct;
- (id)abGroup;
- (double)isFavorite;
- (double)isVIP;
- (double)classConditionalProbability;
- (double)entityOccurredGloballyOverLastNDays;
- (double)globalPopularity;
- (double)modePopularity;
- (int)numOfDays;
- (double)posteriorProbability;
- (double)ratioModeAndGlobalPopularity;

@end
