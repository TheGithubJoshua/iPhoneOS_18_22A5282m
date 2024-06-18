@class NSString, SGNoCloudNSUbiquitousKeyValueStore, NSUbiquitousKeyValueStore, _PASLock;

@interface SGSuggestHistory : NSObject {
    _PASLock *_lock;
    NSUbiquitousKeyValueStore *_backingKVStore;
    SGNoCloudNSUbiquitousKeyValueStore *_noCloudFakeBackingKVStore;
    NSString *_kvStoreIdentifier;
}

@property (readonly, nonatomic) NSUbiquitousKeyValueStore *kvs;

+ (id)newTestingInstanceWithSharedKVS:(id)a0;
+ (id)sharedSuggestHistory;
+ (void)reset;
+ (void)resetNoFlush;

- (id)salt;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)needsMigration;
- (void)migrateIfNeeded;
- (void)reset;
- (void)resetNoFlush;
- (id)setForKey:(id)a0;
- (id)mutableSetForKey:(id)a0;
- (void)confirmEventFromExternalDevice:(id)a0;
- (id)hashesForOpaqueKey:(id)a0 forMatching:(BOOL)a1;
- (id)keysForContact:(id)a0;
- (void)pushDontUpdate:(id)a0;
- (BOOL)_anyHash:(id)a0 inSet:(id)a1;
- (id)keysForContactDetail:(id)a0 ofContact:(id)a1;
- (void)rejectReminder:(id)a0;
- (id)_canaryHash;
- (id)_hashesForConfirmedField:(id)a0 value:(id)a1 storageEvent:(id)a2 forMatching:(BOOL)a3;
- (void)_setHashes:(id)a0 forKey:(id)a1;
- (void)_setInternalStateAccordingToKVS:(id)a0;
- (void)_tellObserversHashesDidChange;
- (void)addSuggestHistoryObserver:(id)a0;
- (void)confirmEvent:(id)a0;
- (void)confirmFieldValues:(id)a0 forStorageEvent:(id)a1;
- (id)confirmHashesForOpaqueKey:(id)a0 withCreationTime:(struct SGUnixTimestamp_ { double x0; })a1 forMatching:(BOOL)a2;
- (id)confirmHashesForOpaqueKeyWithoutTimestamp:(id)a0 forMatching:(BOOL)a1;
- (id)confirmHashesForRemindersOpaqueKey:(id)a0 withCreationTime:(struct SGUnixTimestamp_ { double x0; })a1 forMatching:(BOOL)a2;
- (void)confirmOrRejectDetail:(id)a0 forContact:(id)a1;
- (void)confirmOrRejectDetailHashes:(id)a0;
- (void)confirmOrRejectRecordForContact:(id)a0;
- (void)confirmReminder:(id)a0;
- (void)confirmReminderFromExternalDevice:(id)a0;
- (void)confirmStorageEvent:(id)a0;
- (void)handleSyncedDataChanged:(id)a0;
- (BOOL)hasConfirmedField:(id)a0 value:(id)a1 forStorageEvent:(id)a2;
- (BOOL)hasContact:(id)a0;
- (BOOL)hasContactDetail:(id)a0 forContact:(id)a1;
- (BOOL)hasContactDetailKey:(id)a0;
- (BOOL)hasStorageContact:(id)a0;
- (id)hashesByAddingCompatibilityHashesToHashes:(id)a0 forMatching:(BOOL)a1;
- (id)hashesForContact:(id)a0 forMatching:(BOOL)a1;
- (id)hashesForContactDetail:(id)a0 fromContact:(id)a1 forMatching:(BOOL)a2;
- (id)hashesForCuratedContactDetail:(id)a0 fromContact:(id)a1 forMatching:(BOOL)a2;
- (id)hashesForPseudoEventByKey:(id)a0 forMatching:(BOOL)a1;
- (id)hashesForStorageContact:(id)a0 forMatching:(BOOL)a1;
- (id)hashesForStrings:(id)a0 forMatching:(BOOL)a1;
- (id)identityBasedHashesForPseudoEvent:(id)a0 withCreationTime:(struct SGUnixTimestamp_ { double x0; })a1;
- (id)identityBasedHashesForPseudoReminder:(id)a0 withCreationTime:(struct SGUnixTimestamp_ { double x0; })a1;
- (id)initWithKVS:(id)a0 kvStoreIdentifier:(id)a1;
- (BOOL)isConfirmedEvent:(id)a0;
- (BOOL)isConfirmedEventWithoutTimeStamp:(id)a0;
- (BOOL)isConfirmedReminder:(id)a0;
- (BOOL)isRejectedEvent:(id)a0;
- (BOOL)isRejectedReminder:(id)a0;
- (BOOL)isUpdatableContact:(id)a0;
- (BOOL)isValidCancelledEvent:(id)a0;
- (BOOL)isValidNewEvent:(id)a0;
- (BOOL)isValidNewReminder:(id)a0;
- (BOOL)isValidSuggestion:(id)a0;
- (id)keysForCuratedContactDetail:(id)a0 ofContact:(id)a1;
- (id)keysForStorageContact:(id)a0;
- (id)kvsIfSyncSupported;
- (id)legacyIOS13HashesForClassicHashes:(id)a0;
- (id)legacyManateeSecret;
- (id)loadResetInfo;
- (void)migrateFromKVS:(id)a0 withCompletion:(id /* block */)a1;
- (void)pushAll:(id)a0;
- (void)pushConfirmedEventFields:(id)a0;
- (void)pushConfirmedEventWithoutTimestampFields:(id)a0;
- (void)pushConfirmedEvents:(id)a0;
- (void)pushConfirmedEventsWithoutTimestamp:(id)a0;
- (void)pushConfirmedReminders:(id)a0;
- (void)pushContacts:(id)a0;
- (void)pushEmptyHashesForTestingKey:(id)a0;
- (void)pushRejectedEvents:(id)a0;
- (void)pushRejectedReminders:(id)a0;
- (void)pushResetInfo:(id)a0;
- (void)pushStorageDetails:(id)a0;
- (void)recordSuccessfulMigration;
- (void)rejectContact:(id)a0;
- (void)rejectContactDetailKey:(id)a0;
- (void)rejectEvent:(id)a0;
- (void)rejectEventFromExternalDevice:(id)a0;
- (id)rejectHashesForOpaqueKey:(id)a0 forMatching:(BOOL)a1;
- (void)rejectRealtimeContact:(id)a0;
- (void)rejectReminderFromExternalDevice:(id)a0;
- (void)rejectStorageEvent:(id)a0;
- (void)removeConfirmationHistoryForEntityWithOpaqueKey:(id)a0 creationTimestamp:(struct SGUnixTimestamp_ { double x0; })a1;
- (void)removeConfirmationHistoryForEvent:(id)a0;
- (void)setInternalStateAccordingToKVS;
- (void)setMigrateFromStore:(id)a0;
- (void)writeAndPushConfirmedEventHashes:(id)a0;
- (void)writeAndPushConfirmedEventWithoutTimestampHashes:(id)a0;
- (void)writeAndPushConfirmedReminderHashes:(id)a0;
- (void)writeAndPushRejectedEventHashes:(id)a0;
- (void)writeAndPushRejectedReminderHashes:(id)a0;

@end