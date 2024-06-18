@class NSDictionary, BRCItemID, BRCDocumentItem, BRCAppLibrary, BRCLocalStatInfo, BRCAccountSession, NSString, BRCFinderBookmarkItem, NSMutableSet, BRCClientZone, NSError, BRFieldCKInfo, BRCPQLConnection, BRCZoneRowID, BRCAliasItem, BRCServerZone, BRCItemGlobalID, BRCUserRowID, BRCSymlinkItem, BRFileObjectID, BRCDirectoryItem, NSNumber;
@protocol BRCShareAcceptationFault, BRCTopLevelShareable, BRCFSRooted, BRCSharedToMeTopLevel;

@interface BRCLocalItem : NSObject <BRCJobsMatching, BRCSyncThrottleItemProtocol, BRCItem> {
    BRCZoneRowID *_parentZoneRowID;
    NSNumber *_minimumSupportedOSRowID;
    NSNumber *_knownByServer;
    NSNumber *_parentFileID;
    BRFieldCKInfo *_sideCarCKInfo;
    NSNumber *_isInDocumentScope;
    id _serverPathMatchID;
    BOOL _resolvedPath;
    BOOL _forceDelete;
    BOOL _forceDeletedAlready;
    BOOL _forceNotif;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bookmarkData;
@property (readonly, nonatomic) BOOL isReserved;
@property (readonly, nonatomic) BOOL isFault;
@property (readonly, nonatomic) BOOL physicalNameNeedsRename;
@property (readonly, nonatomic) NSMutableSet *setOfAppLibraryIDsWithReverseAliases;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) BRCAppLibrary *appLibrary;
@property (readonly, nonatomic) BOOL isDirectoryWithPackageName;
@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) BRCDirectoryItem<BRCFSRooted> *asFSRoot;
@property (readonly, nonatomic) BRCSymlinkItem *asSymlink;
@property (readonly, nonatomic) BRCFinderBookmarkItem *asFinderBookmark;
@property (readonly, nonatomic) BRCLocalItem<BRCShareAcceptationFault> *asShareAcceptationFault;
@property (readonly, nonatomic) BOOL isShareableItem;
@property (readonly, nonatomic) BRCLocalItem<BRCTopLevelShareable> *asShareableItem;
@property (readonly, nonatomic) BRCLocalItem<BRCSharedToMeTopLevel> *asSharedToMeTopLevelItem;
@property (readonly, nonatomic) BRCPQLConnection *db;
@property (readonly, nonatomic) BOOL isShareAcceptationFault;
@property (readonly, nonatomic) NSString *digestDescription;
@property (readonly, nonatomic) BRCItemID *itemID;
@property (readonly, nonatomic) BRCLocalItem *orig;
@property (readonly, nonatomic) unsigned long long dbRowID;
@property (readonly, nonatomic) NSNumber *parentFileID;
@property (readonly, nonatomic) NSNumber *fileID;
@property (readonly, nonatomic) BRFileObjectID *fileObjectID;
@property (readonly, nonatomic) BRFileObjectID *parentFileObjectID;
@property (readonly, nonatomic) BOOL needsInsert;
@property (readonly, nonatomic) BOOL isLost;
@property (readonly, nonatomic) BOOL isOnDisk;
@property (readonly, nonatomic) BOOL isAlmostDead;
@property (readonly, nonatomic) BOOL isFromInitialScan;
@property (readonly, nonatomic) BOOL isInDocumentScope;
@property (readonly, nonatomic) BOOL isInDocumentOrTrashScope;
@property (readonly, nonatomic) BOOL isInDataScope;
@property (readonly, nonatomic) BOOL isInTrashScope;
@property (readonly, nonatomic) BOOL isUserVisible;
@property (readonly, nonatomic) unsigned char itemScope;
@property (readonly, nonatomic) NSDictionary *extendedAttributes;
@property (readonly, nonatomic) BRCClientZone *parentClientZone;
@property (readonly, nonatomic) BOOL isKnownByServer;
@property (readonly, nonatomic) BOOL isKnownByServerOrInFlight;
@property (readonly, nonatomic) BOOL isDeadOrMissingInServerTruth;
@property (readonly, nonatomic) BOOL isReadAndUploaded;
@property (readonly, nonatomic) BOOL isIdleOrRejected;
@property (readonly, nonatomic) BOOL isRejected;
@property (readonly, nonatomic) BOOL needsReading;
@property (readonly, nonatomic) BOOL needsUpload;
@property (readonly, nonatomic) BOOL needsSyncUp;
@property (readonly, nonatomic) BOOL forceNeedsSyncUpWithoutDiffs;
@property (readonly, nonatomic) BOOL isOwnedByMe;
@property (readonly, nonatomic) BOOL isSharedByMe;
@property (readonly, nonatomic) BOOL hasShareIDAndIsOwnedByMe;
@property (readonly, nonatomic) NSString *collaborationIdentifierIfComputable;
@property (readonly, nonatomic) BOOL isDocumentBeingCopiedToNewZone;
@property (readonly, nonatomic) BOOL isCrossZoneMoveTombstone;
@property (readonly, nonatomic) BRCItemID *serverPathMatchItemID;
@property (readonly, nonatomic) BRCLocalStatInfo *st;
@property (readonly, nonatomic) unsigned int syncUpState;
@property (readonly, nonatomic) unsigned short uploadStatus;
@property (readonly, nonatomic) unsigned long long localDiffs;
@property (readonly, nonatomic) unsigned long long notifsRank;
@property (readonly, nonatomic) BOOL needsOSUpgradeToSyncUp;
@property (readonly, nonatomic) NSError *syncUpError;
@property (readonly, nonatomic) BOOL fromReadOnlyDB;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *logicalName;
@property (readonly, nonatomic) NSString *extension;
@property (readonly, nonatomic) NSString *appLibraryID;
@property (readonly, nonatomic) BOOL isDead;
@property (readonly, nonatomic) BOOL isLive;
@property (readonly, nonatomic) BOOL isBRAlias;
@property (readonly, nonatomic) BOOL isPackage;
@property (readonly, nonatomic) BOOL isDocument;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly, nonatomic) BOOL isDirectoryFault;
@property (readonly, nonatomic) BOOL isFSRoot;
@property (readonly, nonatomic) BOOL isZoneRoot;
@property (readonly, nonatomic) BOOL isSymLink;
@property (readonly, nonatomic) BOOL isFinderBookmark;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) BOOL isSharedToMe;
@property (readonly, nonatomic) BOOL isSharedToMeTopLevelItem;
@property (readonly, nonatomic) BOOL isSharedToMeChildItem;
@property (readonly, nonatomic) BOOL isTopLevelSharedItem;
@property (readonly, nonatomic) BOOL isChildSharedItem;
@property (readonly, nonatomic) BRCItemGlobalID *itemGlobalID;
@property (readonly, nonatomic) BRCUserRowID *ownerKey;
@property (readonly, nonatomic) BRCAccountSession *session;
@property (readonly, nonatomic) BRCServerZone *serverZone;
@property (readonly, nonatomic) BRCClientZone *clientZone;
@property (nonatomic) unsigned long long sharingOptions;

+ (id)newItemWithPath:(id)a0 parentGlobalID:(id)a1;
+ (BOOL)computeUserVisibleStatusOfLiveItemWithParentVisible:(BOOL)a0 parentIsNonDesktopRoot:(BOOL)a1 parentScope:(unsigned char)a2 itemFilename:(id)a3 parentFilename:(id)a4 appLibrary:(id)a5;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)markDead;
- (id)initFromPQLResultSet:(id)a0 error:(id *)a1;
- (id)_syncZoneRowIDs;
- (void)createSyncUpJob;
- (void)inheritOSUpgradeNeededFromItem:(id)a0;
- (void)markRejectedItemRemotelyRevived;
- (id)sideCarRecordID;
- (id)jobsDescription;
- (void)markForceNotify;
- (void)serializeStructuralPluginHints:(id)a0;
- (void)_ascendItemHierarchyWithBlock:(id /* block */)a0;
- (void)_cheapCheckSavingItem;
- (BOOL)_checkForSharedToMeItemInTrashWithPath:(id)a0;
- (BOOL)_checkZoneUpdateFromFSAtPath:(id)a0 parentGlobalID:(id)a1;
- (BOOL)_computedUserVisibleStatusAtPath:(id)a0;
- (BOOL)_contentXattrsHaveChangedAtRelativeAPath:(id)a0;
- (BOOL)_deleteFromDB:(id)a0 keepAliases:(BOOL)a1 offline:(BOOL)a2;
- (void)_fixSpotlightAttributeIfNecessaryAtPath:(id)a0;
- (BOOL)_hasFieldChangesNotDiffed;
- (id)_initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (id)_initWithLocalItem:(id)a0;
- (id)_initWithRelativePath:(id)a0 parentGlobalID:(id)a1;
- (id)_initWithServerItem:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)_isIndexable;
- (BOOL)_isInterestingUpdateForNotifs;
- (BOOL)_isInterestingUpdateForNotifsWithDiffs:(unsigned long long)a0;
- (BOOL)_isReadonlyShareChild;
- (void)_learnItemID:(id)a0 serverItem:(id)a1;
- (void)_markAsDeadTombstoneWithPreviousGlobalID:(id)a0;
- (void)_markLostWhenReplacedByItem:(id)a0 backoffMode:(unsigned char)a1;
- (void)_markNeedsSyncingUp;
- (void)_refreshAppLibraryFromParent;
- (void)_removeSharedSpotlightAttributesIfNecessary;
- (void)_restorePreviousGlobalID:(id)a0;
- (void)_sendNotificationIfNeededWithDiffs:(unsigned long long)a0 regather:(BOOL)a1;
- (void)_setOrRemoveSmartFolderSpotlightAttributeAt:(id)a0;
- (void)_updateAppLibraryPristineStatesAfterCreationOrUpdate;
- (void)_updateAppLibraryPristineStatesAfterMarkingDead;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (void)_updatePropagatedInfoFromFSAtPath:(id)a0;
- (void)_updateSharedZoneBoostingWithDiffs:(unsigned long long)a0;
- (void)_updateSyncUpSchedulerWithDiffs:(unsigned long long)a0;
- (void)applyMetadataOnFileID:(unsigned long long)a0 liveFD:(unsigned long long)a1 sharingOptions:(unsigned long long)a2;
- (id)baseSideCarRecord;
- (id)baseStructureRecord;
- (void)beginBounceAndSaveToDBWithBounceNumber:(unsigned long long)a0;
- (void)bouncePhysicalNameToRepresentableName;
- (void)bounceReservedItemWithBounceNumber:(unsigned long long)a0;
- (void)bounceSourceItemWithServerLogicalName:(id)a0 bounceNumber:(unsigned long long)a1;
- (BOOL)changedAtRelativePath:(id)a0 scanPackage:(BOOL)a1;
- (BOOL)checkIsInDocumentsScopeWithParent:(id)a0;
- (void)clearFromStage;
- (id)computedDestinationFilenameFromServerItem:(id)a0;
- (id)descriptionWithContext:(id)a0;
- (unsigned long long)diffAgainstLocalItem:(id)a0;
- (unsigned long long)diffAgainstOriginalItem;
- (unsigned long long)diffAgainstServerAliasItem:(id)a0;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (BOOL)evictInTask:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)fetchParentFileIDs;
- (void)fixupStagedItemAtStartup;
- (void)handleUnknownItemError;
- (id)initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (void)insertTombstoneAliasRecordInZone:(id)a0;
- (id)itemParentGlobalID;
- (void)learnItemID:(id)a0 serverItem:(id)a1 path:(id)a2 markLost:(BOOL)a3;
- (BOOL)learnStagedInfoFromDownloadStageID:(id)a0 error:(id *)a1;
- (void)markBounceFailed;
- (void)markBounceFinished;
- (void)markForceNeedsSyncUp;
- (void)markForceRejected;
- (void)markFound;
- (void)markItemForgottenByServer;
- (BOOL)markLatestSyncRequestAcknowledgedInZone:(id)a0;
- (void)markLatestSyncRequestFailedInZone:(id)a0;
- (void)markLatestSyncRequestRejectedInZone:(id)a0;
- (void)markLiveFromStageWithPath:(id)a0;
- (void)markLostClearGenerationID:(BOOL)a0 backoffMode:(unsigned char)a1;
- (void)markLostWhenReplacedByItem:(id)a0;
- (void)markLostWithoutBackoff;
- (void)markMetadataLive;
- (void)markNeedsDeleteForItemIDTransfer;
- (void)markNeedsDeleteForRescheduleOfItem:(id)a0;
- (void)markNeedsDeleteWhenAlreadyDeadInServerTruth;
- (void)markNeedsOSUpgradeToSyncUpWithName:(id)a0;
- (void)markNeedsUploadOrSyncingUp;
- (void)markRemovedFromFilesystemForServerEdit:(BOOL)a0;
- (void)markRenamedUsingServerItem:(id)a0 toRelpath:(id)a1 logicalName:(id)a2 filename:(id)a3 origLogicalNameBeforeBounce:(id)a4 forContentApplyOnly:(BOOL)a5;
- (void)markReserved;
- (void)markStagedWithFileID:(unsigned long long)a0 generationID:(unsigned int)a1;
- (void)markStagedWithFileID:(unsigned long long)a0 generationID:(unsigned int)a1 documentID:(unsigned int)a2;
- (unsigned long long)maskForDiffsToSyncUpForZone:(id)a0 sideCarZone:(BOOL)a1 whenClearing:(BOOL)a2;
- (id)matchingJobsWhereSQLClause;
- (unsigned long long)metadataSyncUpMask:(BOOL)a0;
- (void)moveAsideLocally;
- (id)osNameNeededToSyncUp;
- (id)parentItemIDInZone;
- (id)parentItemOnFS;
- (void)prepareForSyncUpInZone:(id)a0;
- (void)prepareForSyncUpSideCarZone;
- (void)resetWhileKeepingClientItemsAndWantsUnlink:(BOOL)a0;
- (BOOL)saveToDB;
- (BOOL)saveToDBForServerEdit:(BOOL)a0 keepAliases:(BOOL)a1;
- (void)scanParentDirectory;
- (void)scheduleSyncDownForOOBModifyRecordsAck;
- (id)setOfParentIDs;
- (void)setOrRemoveSpotlightAttributeAt:(id)a0;
- (id)sharedAliasItemID;
- (id)sideCarInfo;
- (BOOL)startDownloadInTask:(id)a0 options:(unsigned long long)a1 etagIfLoser:(id)a2 stageFileName:(id)a3 error:(id *)a4;
- (id)structureRecordBeingDeadInServerTruth:(BOOL)a0 shouldPCSChainStatus:(unsigned char)a1 inZone:(id)a2;
- (id)structureRecordBeingDeadInServerTruth:(BOOL)a0 stageID:(id)a1 shouldPCSChainStatus:(unsigned char)a2;
- (id)structureRecordID;
- (id)structureRecordIDInZone:(id)a0;
- (void)triggerNotificationIfNeeded;
- (id)unsaltedBookmarkData;
- (void)updateFromFSAtPath:(id)a0;
- (BOOL)updateFromFSAtPath:(id)a0 parentGlobalID:(id)a1;
- (void)updateItemMetadataFromServerItem:(id)a0 appliedSharingPermission:(BOOL)a1;
- (BOOL)updateLocationAndMetaFromFSAtPath:(id)a0 parentGlobalID:(id)a1;
- (void)updateParentZoneRowID:(id)a0;
- (void)updateStatMetadataFromServerItem:(id)a0;
- (void)updateStructuralCKInfoFromServerItem:(id)a0;
- (BOOL)updateXattrInfoFromPath:(id)a0 error:(id *)a1;
- (BOOL)validateLoggingToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (void)wasMarkedDead;

@end