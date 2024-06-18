@class NSString, TRIClient, NSDictionary;

@interface SSTrialManager : NSObject {
    TRIClient *_trialClient;
    NSString *_namespaceName;
    NSDictionary *_cachedValuesForFactor;
    BOOL _hasActiveExperiment;
    BOOL _hasDefaultValues;
    BOOL _hasRollout;
    BOOL _client_exclusive;
    BOOL _in_allocation;
}

@property (readonly, nonatomic) NSString *spotlightNamespace;
@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) NSString *rolloutId;

+ (id)currentTrialManager;
+ (id)sharedUITrialManager;
+ (void)loadFactorsForAllSharedTrialManagers;
+ (id)sharedTrialClient;
+ (id)sharedPolicyTrialManager;
+ (id)sharedRankingTrialManager;
+ (id)sharedModelTrialManager;
+ (id)getTTRLogs;

- (id)getStringValueForFactor:(id)a0;
- (void)reloadAllFactors;
- (void)refreshTrackingId;
- (id)initWithNameSpace:(unsigned int)a0 loadDefaultValues:(BOOL)a1;
- (void).cxx_destruct;
- (id)description;
- (id)getLevelForFactor:(id)a0;
- (BOOL)hasActiveExperiment;
- (BOOL)getClientOnlyExperiment;
- (BOOL)getInReservedAllocationForExperiment;
- (id)getFactorDictionary;
- (id)getTreatmentId;
- (long long)getLongValueForFactor:(id)a0;
- (id)getFilePathForFactor:(id)a0;
- (BOOL)hasActiveRollout;
- (BOOL)getBooleanValueForFactor:(id)a0;
- (double)getDoubleValueForFactor:(id)a0;

@end
