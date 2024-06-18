@interface _DKNavigationMonitor : _DKMonitor

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL navigating;
@property (nonatomic) int startedToken;
@property (nonatomic) int stoppedToken;

+ (id)eventStream;
+ (id)entitlements;
+ (void)setIsNavigating:(BOOL)a0;

- (void)setNavigationStatus:(BOOL)a0;
- (id)loadState;
- (void)stop;
- (void)start;
- (void)saveState;
- (void)deactivate;
- (void)dealloc;
- (void)synchronouslyReflectCurrentValue;

@end
