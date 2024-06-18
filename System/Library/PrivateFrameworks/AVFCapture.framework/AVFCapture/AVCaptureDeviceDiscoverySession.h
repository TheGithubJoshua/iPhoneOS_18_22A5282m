@class NSArray, NSString;

@interface AVCaptureDeviceDiscoverySession : NSObject {
    NSArray *_deviceTypes;
    long long _position;
    NSString *_mediaType;
    NSArray *_supportedMultiCamDeviceSets;
}

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *supportedMultiCamDeviceSets;

+ (id)allAudioDevices;
+ (id)allDeviceTypes;
+ (id)allDevices;
+ (id)allVideoDevices;
+ (void)initialize;
+ (id)allVirtualDeviceTypes;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2;
+ (id)allSupportedMultiCamDeviceSets;
+ (id)allPointCloudDevices;
+ (id)allVideoDeviceTypes;
+ (id)allPointCloudDeviceTypes;
+ (id)allVirtualDevices;
+ (id)allAudioDeviceTypes;

- (id)init;
- (void)_handleDeviceConnectedDisconnectedNotification:(id)a0;
- (id)description;
- (id)_initWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)a4;
- (void)dealloc;

@end
