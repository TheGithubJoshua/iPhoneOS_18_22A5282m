@class NSUUID, NSString;

@interface HDNanoPairingEntity : HDHealthEntity {
    NSUUID *_nanoRegistryUUID;
    long long _syncProvenance;
    HDNanoPairingEntity *_entity;
}

@property (readonly, copy, nonatomic) NSUUID *nanoRegistryUUID;
@property (copy, nonatomic) NSUUID *persistentUUID;
@property (copy, nonatomic) NSUUID *healthDatabaseUUID;
@property (copy, nonatomic) NSString *defaultSourceBundleIdentifier;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) long long syncProvenance;
@property (nonatomic, getter=isRestoreComplete) BOOL restoreComplete;

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (id)nanoPairingEntityWithRegistryUUID:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)nanoPairingEntityWithRegistryUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (long long)protectionClass;
+ (id)sourceEntityForRegistryUUID:(id)a0 profile:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)description;
- (id)resetProvenanceForProfile:(id)a0 error:(id *)a1;
- (BOOL)saveWithHealthDatabase:(id)a0 error:(id *)a1;

@end
