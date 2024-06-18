@interface CKDVolumeManager : NSObject

+ (void)initialize;
+ (void)_rebuildVolumes;
+ (id)volumeUUIDForDeviceID:(id)a0;
+ (id)volumeForDeviceID:(id)a0;
+ (id)volumeForVolumeUUID:(id)a0;
+ (id)deviceIDForVolumeUUID:(id)a0;

@end
