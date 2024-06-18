@protocol MTLDevice;

@interface VNMetalProcessingDevice : VNProcessingDevice {
    id<MTLDevice> _metalDevice;
}

+ (id)allDevices;

- (int)espressoDeviceID;
- (id)metalDevice;
- (unsigned long long)hash;
- (int)espressoEngine;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (int)espressoStorageType;
- (BOOL)targetsGPU;
- (id)initWithMetalDevice:(id)a0;

@end
