@class SBFAnalyticsClient;

@interface SBLockStateAggregator : NSObject {
    unsigned long long _lockState;
}

@property (weak, nonatomic) SBFAnalyticsClient *analyticsClient;

+ (id)sharedInstance;

- (unsigned long long)lockState;
- (id)init;
- (id)_descriptionForLockState:(unsigned long long)a0;
- (void)_updateLockState;
- (void).cxx_destruct;
- (id)description;
- (id)_initWithAnalyticsClient:(id)a0;
- (void)dealloc;
- (BOOL)hasAnyLockState;

@end
