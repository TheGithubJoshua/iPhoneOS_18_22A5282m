@interface _DKInCarMonitor : _DKMonitor

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL connected;
@property (nonatomic) int connectedToken;
@property (nonatomic) int disconnectedToken;

+ (id)eventStream;
+ (void)setIsConnected:(BOOL)a0;
+ (id)entitlements;

- (id)loadState;
- (void)stop;
- (void)start;
- (void)saveState;
- (void)deactivate;
- (void)setConnectedStatus:(BOOL)a0;
- (void)dealloc;
- (void)synchronouslyReflectCurrentValue;

@end
