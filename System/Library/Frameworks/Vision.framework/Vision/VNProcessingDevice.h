@interface VNProcessingDevice : NSObject <NSCopying>

+ (id)defaultCPUDevice;
+ (void)forcedCleanup;
+ (id)defaultMetalDevice;
+ (id)defaultANEDevice;
+ (id)allDevices;
+ (id)directANEDevice;
+ (void)_unlockStaticObjectsAccessLock;
+ (id)defaultDevice;
+ (void)_lockStaticObjectsAccessLock;
+ (id)deviceForMetalDevice:(id)a0;

- (int)espressoDeviceID;
- (id)metalDevice;
- (unsigned long long)hash;
- (int)espressoEngine;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (int)espressoStorageType;
- (BOOL)targetsGPU;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)targetsCPU;
- (BOOL)targetsANE;

@end
