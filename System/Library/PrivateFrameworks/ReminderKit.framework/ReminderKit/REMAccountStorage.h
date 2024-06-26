@class NSData, NSString, REMObjectID, REMCRMergeableOrderedSet, NSSet, REMResolutionTokenMap, REMAccountTypeHost, REMManualOrdering;

@interface REMAccountStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding, REMObjectStorageSupportedVersionProviding> {
    REMAccountTypeHost *_accountTypeHost;
    unsigned long long _storeGeneration;
    unsigned long long _copyGeneration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    REMCRMergeableOrderedSet *_listIDsMergeableOrdering;
    BOOL _isAddingExtraPrimaryCKAccountForTesting;
    long long minimumSupportedVersion;
    long long effectiveMinimumSupportedVersion;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (retain, nonatomic) REMObjectID *objectID;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *displayName;
@property (retain, nonatomic) REMCRMergeableOrderedSet *listIDsMergeableOrdering;
@property (retain, nonatomic) NSData *listIDsMergeableOrderingData;
@property (retain, nonatomic) REMManualOrdering *pinnedListsManualOrdering;
@property (retain, nonatomic) REMManualOrdering *templatesManualOrdering;
@property (nonatomic) BOOL markedForRemoval;
@property (retain, nonatomic) NSSet *listIDsToUndelete;
@property (retain, nonatomic) NSSet *smartListIDsToUndelete;
@property (nonatomic) BOOL listsDADisplayOrderChanged;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (copy, nonatomic) NSString *personID;
@property (copy, nonatomic) NSData *personIDSalt;
@property (nonatomic) BOOL inactive;
@property (nonatomic) BOOL didChooseToMigrate;
@property (nonatomic) BOOL didChooseToMigrateLocally;
@property (nonatomic) BOOL didFinishMigration;
@property (nonatomic) long long persistenceCloudSchemaVersion;
@property (nonatomic) BOOL debugSyncDisabled;
@property (copy, nonatomic) NSString *daConstraintsDescriptionPath;
@property (nonatomic) BOOL daAllowsCalendarAddDeleteModify;
@property (nonatomic) BOOL daSupportsSharedCalendars;
@property (nonatomic) BOOL daWasMigrated;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

+ (id)listIDsMergeableOrderingReplicaIDSourceWithAccountID:(id)a0;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;

- (id)optionalObjectID;
- (void)setMinimumSupportedVersion:(long long)a0;
- (id)accountTypeHost;
- (void)setStoreGenerationIfNeeded:(unsigned long long)a0;
- (unsigned long long)storeGeneration;
- (BOOL)isUnsupported;
- (id)initWithCoder:(id)a0;
- (id)cdKeyToStorageKeyMap;
- (BOOL)_isAddingExtraPrimaryCKAccountForTesting;
- (BOOL)hasDeserializedListIDsMergeableOrdering;
- (id)initWithObjectID:(id)a0 type:(long long)a1 name:(id)a2 listIDsMergeableOrdering:(id)a3;
- (unsigned long long)hash;
- (id)serializedListIDsMergeableOrdering;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)listIDsMergeableOrderingReplicaIDSource;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setIsAddingExtraPrimaryCKAccountForTesting:(BOOL)a0;
- (void)setEffectiveMinimumSupportedVersion:(long long)a0;
- (id)initWithObjectID:(id)a0 type:(long long)a1 name:(id)a2 nullableListIDsMergeableOrdering:(id)a3;
- (id)initWithObjectID:(id)a0 type:(long long)a1 name:(id)a2;

@end
