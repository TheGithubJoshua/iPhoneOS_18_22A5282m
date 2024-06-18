@class NSUserDefaults;

@interface HVUserDefaults : NSObject {
    NSUserDefaults *_defaults;
}

+ (id)defaults;
+ (id)sharedInstance;
+ (long long)harvestBudgetNumberOfOperations;
+ (void)setHarvestBudgetRefillDisabled:(BOOL)a0;
+ (void)resetHarvestBudgetDisabled;
+ (void)resetHarvestBudgetCPUTimeSeconds;
+ (BOOL)harvestBudgetThrottleBudgetDisabled;
+ (void)resetHarvestBudgetRefillDisabled;
+ (BOOL)harvestBudgetRefillDisabled;
+ (BOOL)harvestBudgetDisabled;
+ (void)setHarvestBudgetThrottleBudgetDisabled:(BOOL)a0;
+ (void)resetHarvestBudgetNumberOfOperations;
+ (double)harvestBudgetCPUTimeSeconds;
+ (void)setHarvestBudgetDisabled:(BOOL)a0;
+ (void)setHarvestBudgetNumberOfOperations:(long long)a0;
+ (void)setHarvestBudgetCPUTimeSeconds:(double)a0;
+ (void)resetHarvestBudgetThrottleBudgetDisabled;

- (id)defaults;
- (id)init;
- (void).cxx_destruct;

@end
