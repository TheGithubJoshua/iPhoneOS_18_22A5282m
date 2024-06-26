@class NSMutableDictionary, NSHashTable;

@interface SAFenceManager : NSObject <SAFenceManagerServiceProtocol, SAFenceManagerRequestProtocol>

@property (retain, nonatomic) NSHashTable *clients;
@property (retain, nonatomic) NSMutableDictionary *deviceUUIDsByUnsafeRegionIdentifier;
@property (retain) NSMutableDictionary *deviceUUIDsBySafeLocation;
@property (retain, nonatomic) NSMutableDictionary *safeLocationsByRegionIdentifier;
@property (retain, nonatomic) NSMutableDictionary *statesByRegionIdentifier;
@property (retain, nonatomic) NSMutableDictionary *regionsByRegionIdentifier;

- (BOOL)stopMonitorSafeLocation:(id)a0 forDevice:(id)a1;
- (id)init;
- (void)ingestTAEvent:(id)a0;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)notifyState:(unsigned long long)a0 forUnsafeLocationRegion:(id)a1;
- (void)handleFenceEvent:(unsigned long long)a0 forRegion:(id)a1;
- (id)getRegionForSafeLocation:(id)a0;
- (BOOL)stopMonitorUnsafeLocationExit:(id)a0 forDevice:(id)a1;
- (BOOL)startMonitorUnsafeLocationExit:(id)a0 forDevice:(id)a1;
- (void).cxx_destruct;
- (void)notifyState:(unsigned long long)a0 forSafeLocationRegion:(id)a1;
- (BOOL)startMonitorSafeLocation:(id)a0 forDevice:(id)a1;
- (unsigned long long)getSafeLocationCount;
- (void)removeLocationsForDeviceUuid:(id)a0;
- (BOOL)isSafeLocation:(id)a0;
- (unsigned long long)getUnsafeLocationCount;

@end
