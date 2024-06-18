@class NSString, NSArray, SBAppSwitcherSettings, NSMutableDictionary, SBApplicationController, SBIconController, NSObject, SBOrientationLockManager;
@protocol OS_dispatch_queue, SBAppSwitcherSnapshotImageCacheDelegate, BSInvalidatable;

@interface SBAppSwitcherSnapshotImageCache : NSObject <SBUIActiveOrientationObserver> {
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    NSObject<OS_dispatch_queue> *_controlQueue;
    NSMutableDictionary *_cachedSnapshots;
    NSMutableDictionary *_cacheEntryUpdateObservers;
    NSMutableDictionary *_snapshotRequestsCurrentlyBeingLoaded;
    unsigned long long _snapshotRequestSequenceID;
    long long _lastKnownInterfaceOrientation;
    long long _lastKnownUserInterfaceStyle;
    SBAppSwitcherSettings *_settings;
    id<BSInvalidatable> _stateCaptureInvalidatable;
    BOOL _shouldPurgeNilEntries;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBOrientationLockManager *_orientationLockManager;
}

@property (weak, nonatomic) id<SBAppSwitcherSnapshotImageCacheDelegate> delegate;
@property (copy, nonatomic) NSArray *cachableAppLayouts;
@property (copy, nonatomic) NSArray *fullSizeCachableAppLayouts;
@property (nonatomic) BOOL reloadsSnapshotsForActiveInterfaceOrientationChange;
@property (copy, nonatomic) NSString *debugName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (id)init;
- (void)_purgeLowPriorityFullSizeSnapshots;
- (void)_setSnapshotNeedsUpdateForDisplayItem:(id)a0;
- (long long)_orientationForAppLayout:(id)a0;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (id)_representedApplicationSceneEntityForDisplayItem:(id)a0;
- (void)_purgeLowPrioritySnapshots;
- (id)initWithDelegate:(id)a0;
- (void)_cacheSnapshotForRequest:(id)a0 withDisplayItem:(id)a1 inAppLayout:(id)a2;
- (BOOL)_isValidAppLayout:(id)a0 withSnapshot:(id)a1 givenCachableAppLayouts:(id)a2;
- (void)_purgeAllSnapshotRequests;
- (void)addSnapshotUpdateObserver:(id)a0 forDisplayItem:(id)a1 inAppLayout:(id)a2;
- (void)_purgeLowPrioritySnapshotRequests;
- (id)_cachableAppLayoutsForTesting;
- (void)_purgeLowPriorityFullSizeSnapshotRequests;
- (void)_updateObserversForDisplayItem:(id)a0 inAppLayout:(id)a1 withCacheEntry:(id)a2;
- (void)_updateCache;
- (void)_updateActiveOrientationObservingIfNeeded;
- (void)_purgeSnapshotRequest:(id)a0 withReason:(id)a1;
- (void)_createDownscaledVariantForRequest:(id)a0 snapshot:(id)a1 displayItem:(id)a2 sceneHandle:(id)a3 application:(id)a4;
- (id)_appLayoutsInPriorityOrder;
- (void)_addCacheEntryForImage:(id)a0 fromRequest:(id)a1;
- (double)_scaleForDownscaledSnapshotsForAppLayout:(id)a0;
- (id)_initWithDelegate:(id)a0 iconController:(id)a1 applicationController:(id)a2 orientationLockManager:(id)a3 settings:(id)a4;
- (void)_loadSnapshotForRequest:(id)a0 withDisplayItem:(id)a1 inAppLayout:(id)a2;
- (void).cxx_destruct;
- (id)_createSnapshotRequestWithDisplayItem:(id)a0 inAppLayout:(id)a1 forFullSizeSnapshot:(BOOL)a2;
- (void)reloadSnapshotForDisplayItem:(id)a0;
- (void)_enqueueNextSnapshotRequestIfNecessary;
- (void)_purgeSnapshotsForKey:(id)a0;
- (BOOL)_isValidSnapshotRequest:(id)a0;
- (void)_snapshotImage:(id)a0 finishedLoadingForRequest:(id)a1;
- (void)_enqueueSnapshotRequestsForCachableAppLayouts:(id)a0 forFullSizeSnapshots:(BOOL)a1;
- (void)_purgeAllSnapshots;
- (void)_purgeSnapshotRequestsForDisplayItem:(id)a0 withReason:(id)a1;
- (void)_setShouldPurgeNilEntry:(BOOL)a0;
- (id)_cachableAppLayoutsRequiringFullSizeSnapshots;
- (void)removeSnapshotObserver:(id)a0;
- (void)_snapshotChanged:(id)a0;
- (BOOL)_keepGoingForRequest:(id)a0;
- (void)dealloc;
- (void)_updateCacheForDisplayItem:(id)a0;
- (void)reloadSnapshotsForInterfaceStyleChange:(long long)a0;
- (void)_asynchronouslyLoadSnapshotFromRequest:(id)a0;
- (void)_addObserver:(id)a0 forDisplayItem:(id)a1 inAppLayout:(id)a2;

@end
