@class NSString, NSMutableArray;

@interface MRExternalOutputContextDataSource : MROutputContextDataSource <NSSecureCoding> {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned int)volumeControlCapabilities;
- (float)volume;
- (id)initWithUniqueIdentifier:(id)a0;
- (id)outputDevices;
- (void)removeAllOutputDevices;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)removeOutputDevices:(id)a0;
- (void)updateOutputDevices:(id)a0;
- (id)uniqueIdentifier;
- (void)updateVolume:(float)a0 outputDeviceUID:(id)a1;
- (void)updateVolumeControlCapabilities:(unsigned int)a0 outputDeviceUID:(id)a1;

@end
