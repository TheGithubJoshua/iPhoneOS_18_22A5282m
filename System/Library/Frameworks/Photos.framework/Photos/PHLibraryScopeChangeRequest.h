@class PHShareRelationshipChangeRequestHelper, NSString, NSArray, PHObjectPlaceholder, NSDate, NSManagedObjectID, PHLibraryScope;

@interface PHLibraryScopeChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (readonly, nonatomic) PHShareRelationshipChangeRequestHelper *participantsHelper;
@property (weak, nonatomic) PHLibraryScope *originalLibraryScope;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) short participantCloudUpdateState;
@property (nonatomic) BOOL runningAsUnitTest;
@property (retain, nonatomic) NSArray *assetUUIDsManuallyAddedToLibraryScope;
@property (retain, nonatomic) NSArray *assetUUIDsManuallyRemovedFromLibraryScope;
@property (retain, nonatomic) NSArray *assetUUIDsPhotosSuggestedAddedToLibraryScope;
@property (retain, nonatomic) NSArray *assetUUIDsPhotosSuggestedRemovedFromLibraryScope;
@property (retain, nonatomic) NSArray *assetUUIDsPhotosSuggestedRejectedFromLibraryScope;
@property (retain, nonatomic) NSArray *assetUUIDsPhotosSuggestedUnRejectedFromLibraryScope;
@property (retain, nonatomic) NSArray *assetUUIDsAssetsMarkedRejectedByPhotosSuggesterFromLibraryScope;
@property (retain, nonatomic) NSArray *participantsAddedToLibraryScope;
@property (retain, nonatomic) NSArray *participantsRemovedFromLibraryScope;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedLibraryScope;
@property (nonatomic) short autoSharePolicy;
@property (readonly) BOOL isNewRequest;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) long long accessScopeOptionsRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_expungeLibraryScopes:(id)a0 ignorePhotosctlExpungeOverride:(BOOL)a1;
+ (id)changeRequestForLibraryScope:(id)a0;
+ (id)creationRequestForOwnedLibraryScopeInPreviewStateWithTitle:(id)a0;
+ (void)expungeLibraryScopes:(id)a0;
+ (void)trashLibraryScopes:(id)a0;
+ (void)untrashLibraryScopes:(id)a0;

- (long long)scopeType;
- (id)trashedDate;
- (void)addParticipants:(id)a0;
- (id)scopeIdentifier;
- (void)setStatus:(short)a0;
- (short)previewState;
- (void)setTrashedDate:(id)a0;
- (void).cxx_destruct;
- (short)status;
- (short)exitState;
- (void)setScopeIdentifier:(id)a0;
- (void)setScopeType:(long long)a0;
- (void)removeParticipants:(id)a0;
- (void)_updateParticipantCloudUpdateStateIfNecessary;
- (void)addPreviewAssetsSuggestedByPhotos:(id)a0;
- (BOOL)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (id)lastParticipantAssetTrashNotificationDate;
- (short)localPublishState;
- (void)markAssetsAsRejectedByPhotosSuggester:(id)a0;
- (void)moveToPersonalLibrary:(id)a0;
- (void)moveToSharedLibrary:(id)a0;
- (void)rejectPreviewAssetsSuggestedByPhotos:(id)a0;
- (void)removePreviewAssetsSuggestedByPhotos:(id)a0;
- (id)rulesData;
- (short)scopeSyncingState;
- (void)setExitState:(short)a0;
- (void)setLastParticipantAssetTrashNotificationDate:(id)a0;
- (void)setLocalPublishState:(short)a0;
- (void)setPendingLibraryScopeInvitationToPreviewState;
- (void)setPreviewState:(short)a0;
- (void)setRulesData:(id)a0;
- (void)setScopeSyncingState:(short)a0;
- (void)unRejectPreviewAssetsSuggestedByPhotos:(id)a0;
- (void)updateWithCustomRules:(id)a0;
- (BOOL)validateInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;

@end