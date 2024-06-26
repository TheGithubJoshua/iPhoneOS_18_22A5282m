@class NSString;

@interface PLBackgroundJobCriteria : NSObject <NSCopying> {
    unsigned long long _xpcActivityPriority;
    BOOL _allowBattery;
    long long _gracePeriod;
    BOOL _requireScreenSleep;
    BOOL _cpuIntensive;
    BOOL _requireInexpensiveNetworkConnectivity;
    BOOL _requireConcurrencyLimit;
    BOOL _overrideRateLimiting;
}

@property (readonly, copy) NSString *shortCode;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *activityIdentifier;

+ (id)criteriaForDiscretionaryResourceWorker;
+ (id)criteriaForUrgentResourceWorker;
+ (id)allKnownShortCodes;
+ (id)allKnownCriterias;
+ (id)criteriaForHubbleWorker;
+ (id)criteriaForRebuildSearchWorker;
+ (id)criteriaForIncrementalSearchWorker;
+ (id)criteriaWithKnownShortCode:(id)a0;
+ (id)criteriaForDuplicateDetectorWorker;
+ (id)criteriaForHubbleNetworkDownloadWorker;

- (id)initWithName:(id)a0 shortCode:(id)a1 xpcActivityPriority:(unsigned long long)a2 allowBattery:(BOOL)a3 gracePeriod:(long long)a4 requireScreenSleep:(BOOL)a5 cpuIntensive:(BOOL)a6 requireInexpensiveNetworkConnectivity:(BOOL)a7 requireConcurrencyLimit:(BOOL)a8 overrideRateLimiting:(BOOL)a9;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)xpcCriteria;

@end
