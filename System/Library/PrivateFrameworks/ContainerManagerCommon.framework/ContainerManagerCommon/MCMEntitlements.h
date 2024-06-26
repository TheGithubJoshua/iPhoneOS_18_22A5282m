@class NSDictionary, NSString, NSSet;

@interface MCMEntitlements : NSObject <MCMEntitlements> {
    NSDictionary *_sanitizedLookup;
    NSSet *_sanitizedWipe;
    BOOL _isSimulatorTestClient;
}

@property (retain, nonatomic) NSDictionary *rawEntitlements;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *lookup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL privileged;
@property (readonly, nonatomic) BOOL proxyAllowed;
@property (readonly, nonatomic) BOOL testabilityAllowed;
@property (readonly, nonatomic) BOOL hasSystemContainer;
@property (readonly, nonatomic) BOOL allowed;
@property (readonly, nonatomic) BOOL otherIDLookup;
@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL canManageUserManagedAssets;
@property (readonly, nonatomic) BOOL canControlCaches;
@property (readonly, nonatomic) BOOL canRepair;
@property (readonly, nonatomic) BOOL canStageSharedContent;
@property (readonly, nonatomic) BOOL canPerformDataMigration;
@property (readonly, nonatomic) BOOL canDeleteContainerContent;
@property (readonly, nonatomic) BOOL requestsNoContainer;
@property (readonly, nonatomic) BOOL canReadReferences;
@property (readonly, nonatomic) BOOL canReadWriteReferences;

+ (id)copyGroupEntitlementForIdentifier:(id)a0 entitlements:(id)a1 groupKey:(id)a2;
+ (id)entitlementForGroupContainerClass:(unsigned long long)a0;
+ (id)appGroupIdentifiersForIdentifier:(id)a0 entitlements:(id)a1;
+ (id)systemGroupIdentifiersForIdentifier:(id)a0 entitlements:(id)a1;

- (void)prune;
- (BOOL)isAllowedToAccessInfoMetadata;
- (BOOL)isAllowedToLookupContainerIdentity:(id)a0;
- (BOOL)isAllowedToStartUserDataMigration;
- (BOOL)isAllowedToRecreateContainerStructure;
- (BOOL)isAllowedToStageSharedContent;
- (BOOL)isAllowedToTest;
- (id)initWithEntitlements:(id)a0 clientIdentifier:(id)a1;
- (BOOL)isAllowedToReadReferences;
- (id)appGroupIdentifiers;
- (BOOL)isAllowedToReplaceContainers;
- (id)copyEntitlementsDictionaryByAddingGroupContainerOfClass:(unsigned long long)a0 groupIdentifier:(id)a1;
- (BOOL)isAllowedToWipeAnyDataContainer;
- (id)_setOfStringsFromArray:(id)a0;
- (BOOL)isAllowedToLookupAllContainersOfClass:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)systemGroupIdentifiers;
- (BOOL)isAllowedToChangeReferences;
- (BOOL)isAllowedToLookupGroupContainersOfClass:(unsigned long long)a0 ownedByIdentifier:(id)a1;
- (BOOL)isEntitledForLookupWithClass:(unsigned long long)a0 identifier:(id)a1;
- (BOOL)isOwnerOfContainerWithClass:(unsigned long long)a0 identifier:(id)a1;
- (BOOL)isAllowedToWipePlugInDataContainerWithIdentifier:(id)a0;
- (BOOL)isAllowedToDelete;
- (id)lookupForContainerClass:(unsigned long long)a0;
- (BOOL)isAllowedToRegenerateDirectoryUUIDs;
- (BOOL)isAllowedToAccessUserAssets;
- (BOOL)isAllowedToAccessCodesignMapping;
- (int)intendedDataProtectionClass;
- (BOOL)isAllowedToSetDataProtection;
- (id)containerRequiredIdentifier;
- (id)copyEntitlementsDictionaryByRemovingGroupContainerOfClass:(unsigned long long)a0 groupIdentifier:(id)a1;
- (BOOL)isAllowedToControlCaches;
- (BOOL)isAllowedToStartDataMigration;
- (id)initForPrivilegedAnonymous;
- (BOOL)isAllowedToRestoreContainer;

@end
