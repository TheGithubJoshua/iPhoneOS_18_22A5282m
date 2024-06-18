@class NSNumber, HDProfile, HDDatabaseValueCache;

@interface HDDeviceManager : NSObject {
    HDProfile *_profile;
    HDDatabaseValueCache *_devicesByPersistentID;
    HDDatabaseValueCache *_deviceEntitiesByDevice;
    NSNumber *_noneDeviceID;
}

- (id)initWithProfile:(id)a0;
- (id)init;
- (id)deviceEntityForDevice:(id)a0 error:(id *)a1;
- (id)deviceForPersistentID:(id)a0 error:(id *)a1;
- (id)deviceEntitiesWithProperty:(id)a0 matchingValues:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)allDevicesWithError:(id *)a0;
- (id)deviceEntityForNoDeviceWithError:(id *)a0;
- (id)currentDeviceEntityWithError:(id *)a0;
- (id)deviceEntitiesForDevice:(id)a0 error:(id *)a1;
- (id)devicesWithProperty:(id)a0 matchingValues:(id)a1 error:(id *)a2;

@end
