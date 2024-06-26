@class NSString, NSDictionary, NSPersistentStore, NSPersistentHistoryToken;

@interface NSCloudKitMirroringDelegatePreJazzkonMetadata : NSObject {
    NSPersistentStore *_store;
    BOOL _loaded;
    BOOL _hasChanges;
    BOOL _hasInitializedZone;
    BOOL _hasInitializedZoneSubscription;
    BOOL _hasInitializedDatabaseSubscription;
    NSString *_ckIdentityRecordName;
    BOOL _hasCheckedCKIdentity;
    NSDictionary *_keyToPreviousServerChangeToken;
    NSPersistentHistoryToken *_lastHistoryToken;
}

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;

@end
