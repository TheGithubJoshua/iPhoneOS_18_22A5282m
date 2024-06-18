@interface CMDeviceOrientationManager : NSObject {
    id _internal;
}

@property (class, readonly, nonatomic, getter=isAlwaysOn) BOOL alwaysOn;

+ (BOOL)isAvailable;
+ (void)initialize;
+ (void)dummySelector:(id)a0;

- (id)initPrivate;
- (id)init;
- (BOOL)orientationNotificationsDisabled;
- (void)stop;
- (BOOL)isDeviceOrientationAvailable;
- (id)deviceOrientationBlocking;
- (void)onMotionPreferencesUpdated;
- (void)deallocPrivate;
- (void)startDeviceOrientationUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)start;
- (void)onDeviceOrientation:(const struct Sample { double x0; int x1; } *)a0;
- (void)updateAggregateDictionaryPrivate;
- (id)stringForOrientation:(int)a0;
- (void)signalAndReleaseSemaphoreIfNecessaryPrivate;
- (void)startDeviceOrientationUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopDeviceOrientationUpdatesPrivate;
- (void)dealloc;
- (void)onNotification:(id)a0;
- (void)setDeviceOrientationCallbackModePrivate:(int)a0;
- (BOOL)isDeviceOrientationActive;
- (void)stopDeviceOrientationUpdates;

@end
