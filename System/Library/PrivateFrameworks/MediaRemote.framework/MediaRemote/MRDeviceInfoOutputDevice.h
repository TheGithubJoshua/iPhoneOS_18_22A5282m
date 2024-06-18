@class MRDeviceInfo;

@interface MRDeviceInfoOutputDevice : MRAVOutputDevice

@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;

- (BOOL)canAccessiCloudMusicLibrary;
- (id)groupID;
- (BOOL)isGroupable;
- (BOOL)isLocalDevice;
- (unsigned int)deviceType;
- (unsigned int)deviceSubtype;
- (id)avOutputDevice;
- (BOOL)isRemoteControllable;
- (BOOL)canAccessRemoteAssets;
- (id)logicalDeviceID;
- (BOOL)canAccessAppleMusic;
- (long long)hostDeviceClass;
- (BOOL)supportsMultiplayer;
- (id)name;
- (id)uid;
- (id)modelID;
- (void).cxx_destruct;
- (id)initWithDeviceInfo:(id)a0;
- (BOOL)shouldBeLocallyHosted;

@end
