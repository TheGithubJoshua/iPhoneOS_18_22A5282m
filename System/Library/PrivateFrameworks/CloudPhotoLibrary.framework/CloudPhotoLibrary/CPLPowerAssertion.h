@interface CPLPowerAssertion : NSObject

@property (class, nonatomic) BOOL hasEnoughPower;

+ (void)disableSleep;
+ (void)_retainAssertion;
+ (void)_releaseAssertion;
+ (void)_doProtected:(id /* block */)a0;
+ (void)enableSleep;
+ (id)powerAssertionStatus;

@end
