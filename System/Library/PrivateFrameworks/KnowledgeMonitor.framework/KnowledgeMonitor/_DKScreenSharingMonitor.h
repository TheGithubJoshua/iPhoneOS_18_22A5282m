@class AVOutputContext, BMScreenSharingStream;

@interface _DKScreenSharingMonitor : _DKMonitor

@property (retain, nonatomic) AVOutputContext *outputContext;
@property (retain, nonatomic) BMScreenSharingStream *screenSharingStream;
@property (nonatomic) long long currentMirroringDeviceCount;

+ (id)eventStream;
+ (id)entitlements;

- (id)init;
- (void)mirroringDidChange:(id)a0;
- (void)stop;
- (void)start;
- (void)deactivate;
- (void)registerForScreenMirroringNotifications;
- (void).cxx_destruct;

@end
