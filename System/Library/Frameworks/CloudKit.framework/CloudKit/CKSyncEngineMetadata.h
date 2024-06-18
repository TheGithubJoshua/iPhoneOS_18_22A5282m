@class NSDate, NSArray, CKRecordID, NSOrderedSet, NSMutableDictionary, NSDictionary, CKServerChangeToken, NSObject, NSMutableSet, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface CKSyncEngineMetadata : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_zoneIDsNeedingToFetchChangesSet;
    NSMutableOrderedSet *_zoneIDsToSaveSet;
    NSMutableOrderedSet *_zoneIDsToDeleteSet;
    NSMutableOrderedSet *_pendingModificationsSet;
    NSMutableOrderedSet *_inFlightModificationsSet;
    unsigned long long _internalChangeCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *mServerChangeTokensByZoneID;
@property (copy) NSOrderedSet *fakeRecordIDsToSaveForSerializationTests;
@property (copy) NSOrderedSet *fakeRecordIDsToDeleteForSerializationTests;
@property (copy) NSDictionary *fakeZonesToSaveForSerializationTests;
@property (copy) CKRecordID *mockNextKnownUserRecordID;
@property BOOL useMockNextKnownUserRecordID;
@property (copy) NSDate *lastFetchDatabaseChangesDate;
@property (readonly, nonatomic) unsigned long long changeCount;
@property BOOL needsToFetchDatabaseChanges;
@property (retain) CKServerChangeToken *serverChangeTokenForDatabase;
@property BOOL needsToSaveDatabaseSubscription;
@property (readonly, nonatomic) NSArray *zoneIDsNeedingToFetchChanges;
@property (readonly, nonatomic) NSArray *zoneIDsToSave;
@property (readonly, nonatomic) NSArray *zoneIDsToDelete;
@property (readonly, nonatomic) NSArray *pendingRecordModifications;
@property (readonly, nonatomic) NSArray *inFlightRecordModifications;
@property (copy) CKRecordID *lastKnownUserRecordID;
@property BOOL didPerformInitialUserRecordIDFetch;
@property BOOL hasPendingAdopterTrackedModifications;
@property BOOL hasInFlightAdopterTrackedModifications;

- (id)initWithCoder:(id)a0;
- (id)recordIDsToDelete;
- (void)addPendingRecordModifications:(id)a0;
- (void)removeInFlightRecordModifications:(id)a0;
- (id)init;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)recordIDsToSave;
- (void)setNeedsToDelete:(BOOL)a0 zoneIDs:(id)a1;
- (void)getDataRepresentation:(id /* block */)a0;
- (void)setServerChangeToken:(id)a0 forRecordZoneID:(id)a1;
- (id)serverChangeTokensByZoneID;
- (BOOL)needsToFetchChangesForZoneID:(id)a0;
- (void)setNeedsToFetchChanges:(BOOL)a0 forRecordZoneID:(id)a1;
- (void)removePendingRecordModifications:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)serverChangeTokenForRecordZoneID:(id)a0;
- (id)description;
- (void)setNeedsToSave:(BOOL)a0 zoneIDs:(id)a1;
- (BOOL)needsToSaveZoneID:(id)a0;
- (BOOL)needsToDeleteZoneID:(id)a0;
- (id)pendingRecordIDsWithModificationType:(long long)a0;
- (void)markRecordModifications:(id)a0 inFlight:(BOOL)a1;

@end
