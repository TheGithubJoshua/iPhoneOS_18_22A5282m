@class REMSaveRequest, REMCRMergeableOrderedSet, REMResolutionTokenMap, REMChangedKeysObserver, REMAccountGroupContextChangeItem, NSString, NSSet, REMAccountPinnedListsContextChangeItem, REMManualOrdering, NSData, REMObjectID, REMAccountCapabilities, REMAccountStorage;

@interface REMAccountChangeItem : NSObject <REMConflictResolving, REMPersonIDProviding, REMSaveRequestTrackedValue, REMExternalSyncMetadataWritableProviding, REMSupportedVersionProviding, REMSupportedVersionUpdating>

@property (retain, nonatomic) REMChangedKeysObserver *changedKeysObserver;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (retain, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMAccountCapabilities *capabilities;
@property (readonly, nonatomic) REMCRMergeableOrderedSet *listIDsMergeableOrdering;
@property (readonly, nonatomic) NSData *listIDsMergeableOrderingData;
@property (retain, nonatomic) REMManualOrdering *pinnedListsManualOrdering;
@property (retain, nonatomic) REMManualOrdering *templatesManualOrdering;
@property (nonatomic) BOOL markedForRemoval;
@property (retain, nonatomic) NSSet *listIDsToUndelete;
@property (retain, nonatomic) NSSet *smartListIDsToUndelete;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL debugSyncDisabled;
@property (nonatomic) BOOL listsDADisplayOrderChanged;
@property (nonatomic) long long type;
@property (readonly, copy, nonatomic) REMAccountStorage *storage;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) REMAccountPinnedListsContextChangeItem *pinnedListsContext;
@property (nonatomic) BOOL inactive;
@property (nonatomic) BOOL didChooseToMigrate;
@property (nonatomic) BOOL didChooseToMigrateLocally;
@property (nonatomic) BOOL didFinishMigration;
@property (nonatomic) long long persistenceCloudSchemaVersion;
@property (retain, nonatomic) NSString *daConstraintsDescriptionPath;
@property (nonatomic) BOOL daAllowsCalendarAddDeleteModify;
@property (nonatomic) BOOL daSupportsSharedCalendars;
@property (nonatomic) BOOL daWasMigrated;
@property (readonly, nonatomic) REMSaveRequest *saveRequest;
@property (readonly, nonatomic) REMAccountGroupContextChangeItem *groupContext;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (copy, nonatomic) NSString *personID;
@property (copy, nonatomic) NSData *personIDSalt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

+ (void)initialize;
+ (id)_emptyListIDsOrderingWithAccountID:(id)a0;

- (id)accountTypeHost;
- (BOOL)isUnsupported;
- (id)capabilities;
- (id)changedKeys;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)addListChangeItem:(id)a0;
- (void)insertSmartListChangeItem:(id)a0 afterSmartListChangeItem:(id)a1;
- (id)templatesContextChangeItem;
- (void)addSmartListChangeItem:(id)a0;
- (BOOL)canCopyReminderLosslesslyToAccountChangeItem:(id)a0;
- (void)insertListChangeItem:(id)a0 afterListChangeItem:(id)a1;
- (void)insertMergeableOrderingNode:(id)a0 afterMergeableOrderingNode:(id)a1;
- (void)insertMergeableOrderingNode:(id)a0 beforeMergeableOrderingNode:(id)a1;
- (void)undeleteListWithID:(id)a0 usingUndo:(id)a1;
- (void)undeleteSmartListWithID:(id)a0 usingUndo:(id)a1;
- (void)_editListIDsOrderingUsingBlock:(id /* block */)a0;
- (void)removeFromStore;
- (void)_lowLevelAddMergeableOrderingNodeToOrdering:(id)a0 atIndexOfSibling:(id)a1 isAfter:(BOOL)a2 withParentMergeableOrderingNode:(id)a3;
- (void)_lowLevelApplyUndoToOrdering:(id)a0;
- (void)_reassignMergeableOrderingNode:(id)a0 withParentListChangeItem:(id)a1;
- (void)addMergeableOrderingNode:(id)a0;
- (id)initWithObjectID:(id)a0 type:(long long)a1 name:(id)a2 insertIntoSaveRequest:(id)a3;
- (id)initWithSaveRequest:(id)a0 storage:(id)a1 capabilities:(id)a2 changedKeysObserver:(id)a3;
- (id)initWithSaveRequest:(id)a0 storage:(id)a1 capabilities:(id)a2 observeInitialValues:(BOOL)a3;
- (void)insertListChangeItem:(id)a0 beforeListChangeItem:(id)a1;
- (void)insertMergeableOrderingNode:(id)a0 adjacentToMergeableOrderingNode:(id)a1 isAfter:(BOOL)a2 withParentMergeableOrderingNode:(id)a3;
- (void)insertSmartListChangeItem:(id)a0 beforeSmartListChangeItem:(id)a1;
- (void)lowLevelAddMergeableOrderingNodeIDToOrdering:(id)a0 withParentMergeableOrderingNode:(id)a1;
- (id)lowLevelRemoveMergeableOrderingNodeIDFromOrdering:(id)a0;
- (id)mergeableOrderingNodesByOrderingMergeableOrderingNodes:(id)a0;
- (id)resolutionTokenKeyForChangedKey:(id)a0;
- (id)shallowCopyWithSaveRequest:(id)a0;
- (void)test_lowLevelEditOrderingByMovingListObjectID:(id)a0 toTarget:(unsigned long long)a1;

@end
