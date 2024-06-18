@class NSString, XBApplicationSnapshotManifestImpl;
@protocol XBApplicationSnapshotManifestDelegate;

@interface XBApplicationSnapshotManifest : NSObject <XBApplicationSnapshotManifestDelegate, BSDescriptionProviding>

@property (readonly, weak, nonatomic) XBApplicationSnapshotManifestImpl *manifestImpl;
@property (weak, nonatomic) id<XBApplicationSnapshotManifestDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *containerPath;
@property (readonly, copy, nonatomic) NSString *defaultGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_manifestsByIdentity;
+ (void)initialize;
+ (void)handleTrackingStateChange;
+ (id)debugDescription;
+ (void)deleteAllSystemSnapshots;

- (id)initWithApplicationInfo:(id)a0;
- (void)beginSnapshotAccessTransaction:(id /* block */)a0 completion:(id /* block */)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)deleteSnapshotsForGroupID:(id)a0 matchingPredicate:(id)a1;
- (id)snapshotsForGroupIDs:(id)a0;
- (void)beginTrackingImageDeletions;
- (void)archive;
- (void)manifest:(id)a0 didPurgeProtectedContentSnapshotsWithGroupIdentifiers:(id)a1;
- (BOOL)snapshotsConsideredUnpurgableByAPFS;
- (id)createVariantForSnapshot:(id)a0 withIdentifier:(id)a1;
- (id)snapshotsForGroupID:(id)a0 matchingPredicate:(id)a1;
- (void)updateSnapshotsAPFSPurgability:(BOOL)a0;
- (void)generateImageForSnapshot:(id)a0 dataProvider:(id)a1 options:(unsigned long long)a2 imageGeneratedHandler:(id /* block */)a3 imageDataSavedHandler:(id /* block */)a4;
- (id)snapshotsForGroupID:(id)a0 fetchRequest:(id)a1;
- (void)deleteAllSnapshots;
- (id)succinctDescription;
- (void)deleteSnapshotsForGroupID:(id)a0;
- (void)deleteSnapshotsMatchingPredicate:(id)a0;
- (void)saveSnapshot:(id)a0 atPath:(id)a1 withContext:(id)a2;
- (void)deleteSnapshotsForGroupID:(id)a0 predicateBuilder:(id /* block */)a1;
- (id)snapshotsForGroupIDs:(id)a0 fetchRequest:(id)a1;
- (id)_allSnapshotGroups;
- (void)purgeSnapshotsWithProtectedContent;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)snapshotsForGroupID:(id)a0;
- (void)deleteSnapshots:(id)a0;
- (id)createSnapshotWithGroupID:(id)a0;
- (void)deleteSnapshot:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)snapshotsForGroupIDs:(id)a0 matchingPredicate:(id)a1;
- (void)endTrackingImageDeletions;
- (void)deleteSnapshotsUsingPredicateBuilder:(id /* block */)a0;
- (BOOL)_invalidate;
- (void)generateImageForSnapshot:(id)a0 dataProvider:(id)a1 writeToFile:(BOOL)a2 imageGeneratedHandler:(id /* block */)a3 imageDataSavedHandler:(id /* block */)a4;
- (void)generateImageForSnapshot:(id)a0 dataProvider:(id)a1 writeToFile:(BOOL)a2 completion:(id /* block */)a3;
- (void)generateImageForSnapshot:(id)a0 dataProvider:(id)a1 writeToFile:(BOOL)a2 didGenerateImage:(id /* block */)a3 didSaveImage:(id /* block */)a4;
- (id)initWithContainerIdentity:(id)a0 store:(id)a1;

@end
