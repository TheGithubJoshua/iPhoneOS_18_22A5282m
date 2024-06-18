@protocol CNRegulatoryLogger, CNDataMapper, CNContactsLogger;

@interface CNDataMapperContactStore : CNContactStore

@property (readonly, nonatomic) id<CNContactsLogger> logger;
@property (readonly, nonatomic) id<CNRegulatoryLogger> regulatoryLogger;
@property (readonly, nonatomic) BOOL shouldLogPrivacyAccountingAccessEvents;
@property (readonly, retain, nonatomic) id<CNDataMapper> mapper;

+ (Class)dataMapperClassForConfiguration:(id)a0;
+ (BOOL)enableContactsOutOfProcess;

- (BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)subgroupsOfGroupWithIdentifier:(id)a0 error:(id *)a1;
- (id)meContactIdentifiers:(id *)a0;
- (id)sectionListOffsetsForSortOrder:(long long)a0 error:(id *)a1;
- (id)unifiedContactsMatchingPredicate:(id)a0 keysToFetch:(id)a1 error:(id *)a2;
- (id)requestAccessForEntityType:(long long)a0;
- (id)changeHistoryWithFetchRequest:(id)a0 error:(id *)a1;
- (BOOL)executeSaveRequest:(id)a0 error:(id *)a1;
- (BOOL)requestContactsReadAccessWithError:(id *)a0;
- (BOOL)hasGroups;
- (id)legacyTetheredSyncComputerAnchor;
- (id)init;
- (id)policyWithDescription:(id)a0 error:(id *)a1;
- (BOOL)setMeContact:(id)a0 error:(id *)a1;
- (id)initWithEnvironment:(id)a0;
- (BOOL)executeSaveRequest:(id)a0 response:(id *)a1 authorizationContext:(id)a2 error:(id *)a3;
- (void)_logContactsAccessWasDeniedForAccessType:(unsigned long long)a0 error:(id)a1;
- (BOOL)hasMultipleGroupsOrAccounts;
- (int)saveSequenceCount;
- (BOOL)_requestDataMapperAccessType:(unsigned long long)a0 error:(id *)a1;
- (id)unifiedContactCountWithError:(id *)a0;
- (id)executeFetchRequest:(id)a0 progressiveResults:(id /* block */)a1 completion:(id /* block */)a2;
- (id)currentHistoryToken;
- (id)initWithConfiguration:(id)a0;
- (id)containersMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)setMeContact:(id)a0 forContainer:(id)a1 error:(id *)a2;
- (BOOL)resetSortDataIfNeededWithError:(id *)a0;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (id)identifierWithError:(id *)a0;
- (id)currentHistoryAnchor;
- (BOOL)setBestMeIfNeededForGivenName:(id)a0 familyName:(id)a1 email:(id)a2 error:(id *)a3;
- (BOOL)executeChangeHistoryClearRequest:(id)a0 error:(id *)a1;
- (BOOL)requestMetadataAccessWithError:(id *)a0;
- (void)_logContactsAccessWasGrantedForAccessType:(unsigned long long)a0;
- (id)contactIdentifierWithMatchingDictionary:(id)a0;
- (id)serverSearchContainersMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)unregisterChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (id)userActivityUserInfoForContact:(id)a0;
- (id)legacyTetheredSyncDeviceAnchor;
- (id)usedLabelsForPropertyWithKey:(id)a0 error:(id *)a1;
- (id)contactCountForFetchRequest:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDataMapper:(id)a0 dataMapperConfiguration:(id)a1;
- (BOOL)isValidSaveRequest:(id)a0 authorizationContext:(id)a1 error:(id *)a2;
- (id)defaultContainerIdentifier;
- (id)accountsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)contactsForFetchRequest:(id)a0 matchInfos:(id *)a1 error:(id *)a2;
- (id)groupsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)contactWithUserActivityUserInfo:(id)a0 keysToFetch:(id)a1;
- (void)_logPrivacyAccountingForAccessType:(unsigned long long)a0;
- (BOOL)moveContacts:(id)a0 fromContainer:(id)a1 toContainer:(id)a2 error:(id *)a3;
- (void)_logGreenTeaForAccessType:(unsigned long long)a0;
- (void)requestReadAccessForEntityType:(long long)a0 completionHandler:(id /* block */)a1;
- (id)contactsInContainerWithIdentifier:(id)a0 keysToFetch:(id)a1 error:(id *)a2;
- (id)matchingDictionaryForContact:(id)a0;
- (BOOL)requestContactsWriteAccessWithError:(id *)a0;
- (void)setLegacyTetheredSyncComputerAnchor:(id)a0;
- (id)membersOfGroupWithIdentifier:(id)a0 keysToFetch:(id)a1 error:(id *)a2;
- (id)initWithEnvironment:(id)a0 managedConfiguration:(id)a1;
- (BOOL)setDefaultAccountIdentifier:(id)a0 error:(id *)a1;
- (void)setLegacyTetheredSyncDeviceAnchor:(id)a0;
- (id)iOSMapper;
- (BOOL)registerChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (id)groupWithIdentifier:(id)a0 error:(id *)a1;

@end
