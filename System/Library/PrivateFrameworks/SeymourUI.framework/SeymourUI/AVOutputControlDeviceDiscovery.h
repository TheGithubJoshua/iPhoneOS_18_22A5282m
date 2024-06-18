@class AVOutputDeviceDiscoverySession;

@interface AVOutputControlDeviceDiscovery : NSObject

@property (readonly, nonatomic) AVOutputDeviceDiscoverySession *session;

- (id)init;
- (void)activate;
- (void)deactivate;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)supportsFitnessDataDestinationForDeviceIdentifier:(id)a0;

@end
