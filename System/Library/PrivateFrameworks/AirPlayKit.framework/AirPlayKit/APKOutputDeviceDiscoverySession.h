@class NSArray, AVOutputDeviceDiscoverySession;

@interface APKOutputDeviceDiscoverySession : NSObject

@property (readonly, nonatomic) AVOutputDeviceDiscoverySession *session;
@property (readonly, nonatomic) NSArray *availableOutputDevices;

- (id)init;
- (void)activate;
- (void)deactivate;
- (void).cxx_destruct;
- (void)dealloc;

@end
