@class NSArray, AVOutputDevice;
@protocol AVOutputDeviceGroupImpl;

@interface AVOutputDeviceGroup : NSObject {
    id<AVOutputDeviceGroupImpl> _impl;
}

@property (readonly) BOOL receivesLongFormAudioFromLocalDevice;
@property (readonly) NSArray *outputDevices;
@property (readonly) AVOutputDevice *groupLeader;
@property (readonly) float volume;
@property (readonly) long long volumeControlType;

+ (void)initialize;
+ (id)outputDeviceGroupWithRemoteGroupID:(struct __CFString { } *)a0 syncController:(struct OpaqueAPSyncController { } *)a1;
+ (id)sharedAudioPresentationOutputGroup;

- (id)impl;
- (void)setVolume:(float)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (void)addOutputDevice:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithOutputDeviceGroupImpl:(id)a0;
- (void)outputDeviceGroupImpl:(id)a0 didChangeOutputDevicesWithInitiator:(id)a1;
- (void)outputDeviceGroupImplDidChangeVolume:(id)a0;
- (void)outputDeviceGroupImplDidChangeVolumeControlType:(id)a0;
- (void)removeOutputDevice:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;

@end
