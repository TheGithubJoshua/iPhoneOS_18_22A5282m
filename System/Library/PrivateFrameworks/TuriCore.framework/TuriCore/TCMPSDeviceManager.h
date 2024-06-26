@protocol MTLDevice, NSObject;

@interface TCMPSDeviceManager : NSObject {
    id<NSObject> _deviceObserver;
}

@property (retain) id<MTLDevice> preferredDevice;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setPreferredDeviceFromDevices:(id)a0;
- (BOOL)shouldPreferDevice:(id)a0 overDevice:(id)a1;

@end
