@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _DPSubmissionRateLimiter : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *limiterQueue;
@property (retain, nonatomic) NSMutableDictionary *limitDictionary;

+ (id)sharedInstance;
+ (id)rateLimitsFromBudgetProperties;
+ (id)budgetNameForKey:(id)a0;

- (id)init;
- (id)initWithLimits:(id)a0;
- (void)credit:(id)a0 amount:(unsigned long long)a1;
- (void).cxx_destruct;
- (unsigned long long)debit:(unsigned long long)a0 forKey:(id)a1;

@end
