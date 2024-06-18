@interface CallDBManagerServer : CallDBManager

+ (id)getObjectIdsForDuplicateRecordsWithUniqueIds:(id)a0 andHavingObjectIds:(id)a1;
+ (id)downgradeDatabaseAtLocation:(id)a0 toVersion:(long long)a1;
+ (id)getDestinationModelForVersion:(long long)a0;
+ (long long)getNextVersionToDowngradeTo:(long long)a0;
+ (long long)getNextVersionToDowngradeTo:(long long)a0 withSourceVersion:(long long)a1;
+ (id)getObjectIdsForAllRecords:(id)a0;
+ (id)getDestinationModel:(long long)a0;
+ (id)getUniqueIdsForAllRecords:(id)a0;
+ (long long)getNextVersionToMigrateToCurrentVersion:(long long)a0;

- (BOOL)handleDatabaseMigration:(id)a0 isEncrypted:(BOOL)a1 isRetry:(BOOL)a2;
- (void)prepareForMigrationDBAtURL:(id)a0 withModelAtURL:(id)a1 andIsEncrypted:(BOOL)a2;
- (void)createTemporary;
- (BOOL)handleBootUpFailure:(id)a0;
- (void)modifyCallRecordForDBAtLocation:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2 modifyCallRecord:(id /* block */)a3;
- (void)prepareDatabaseForNextStepInMigration:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (void)createPermanent;
- (id)getUUIDsOfNMostRecentRecords:(unsigned long long)a0 fromManagedObjectContext:(id)a1;
- (void)moveCallsFromTempDatabase;
- (id)permDBLocation:(unsigned char *)a0;
- (id)tempDBLocation:(unsigned char *)a0;
- (BOOL)removeDuplicatesFromDBAtLocation:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (void)populateHandleType:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (BOOL)bootUpDBAtLocationWithRecovery:(id)a0 isEncrypted:(BOOL)a1;
- (void)populateRecentCallRemoteParticipantHandles:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (BOOL)bootUpDBAtLocation:(id)a0 isEncrypted:(BOOL)a1;
- (void)populateServiceProviderAndCallCategory:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (id)createMOCForDBAtLocation:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (BOOL)createCallDBProperties;

@end
