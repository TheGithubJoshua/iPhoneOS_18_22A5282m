@interface _DKAssertionsPreventingRestartMonitor : _DKMonitor

@property (nonatomic) int userspaceAssertionsToken;
@property (nonatomic) int preventIdleSleepAssertionsToken;
@property (nonatomic) int systemAssertionsToken;
@property (nonatomic) int restartPreventerAssertionsToken;
@property (nonatomic) BOOL lastPreventingRestartAssertionsStatus;

+ (id)eventStream;
+ (id)entitlements;

- (id)loadState;
- (void)stop;
- (void)start;
- (void)saveState;
- (void)deactivate;
- (void)dealloc;
- (void)synchronouslyReflectCurrentValue;
- (BOOL)areAssertionsPreventingRestart;

@end
