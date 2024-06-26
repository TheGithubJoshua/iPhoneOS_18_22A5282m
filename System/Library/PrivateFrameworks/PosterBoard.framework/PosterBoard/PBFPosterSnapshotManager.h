@class NSHashTable, NSString, NSMutableDictionary, NSOperationQueue, NSMutableSet, NSMutableArray, NSObject, RBSAssertion, NSMapTable;
@protocol PBFRuntimeAssertionProviding, OS_dispatch_source, PBFExtensionProviding;

@interface PBFPosterSnapshotManager : NSObject <PBFBehaviorAssertionProviding, PBFPosterSnapshotIngesting, PBFPosterSnapshotProviding, BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _assertionLock;
    NSMapTable *_lock_requestToCompletion;
    NSMapTable *_lock_identityToSnapshotCoordinator;
    NSMapTable *_lock_extensionToOperationPriorityQueue;
    NSMapTable *_lock_extensionToActiveOperation;
    NSHashTable *_lock_observers;
    NSMutableArray *_lock_fulfilledSnapshotBlocks;
    NSMutableSet *_assertionLock_inUseAssertions;
    NSMutableDictionary *_assertionLock_extensionSnapshotterDisabledAssertions;
    NSMutableDictionary *_assertionLock_extensionEditingInProgressAssertions;
    BOOL _assertionLock_isOperationQueueSuspended;
    NSHashTable *_assertionLock_assertionObservers;
    RBSAssertion *_posterBoardPrewarmAssertion;
    id<PBFRuntimeAssertionProviding> _runtimeAssertionProvider;
    id<PBFExtensionProviding> _extensionProvider;
    NSOperationQueue *_operationQueue;
    BOOL _lock_invalidated;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_lock_snapshottersForExtensionBundleIdentifier:(id)a0;
- (void)_operationDidComplete:(id)a0 snapshotter:(id)a1;
- (id)initWithRuntimeAssertionProvider:(id)a0 extensionProvider:(id)a1;
- (void)cancelAllRequests;
- (void)removeObserver:(id)a0;
- (void)_lock_kickoffNextOperation;
- (void)_memoryWarningWasReceived;
- (BOOL)cancelRequestedSnapshotsForRequests:(id)a0 reason:(id)a1;
- (BOOL)_isOperationQueueSuspended;
- (id)_createSnapshotForDefinition:(id)a0 withSurface:(id)a1 snapshotScale:(double)a2 configuredProperties:(id)a3 path:(id)a4 error:(out id *)a5;
- (void)fetchPosterSnapshotForRequest:(id)a0 definition:(id)a1 completion:(id /* block */)a2;
- (void)_lock_addCompletion:(id /* block */)a0 forRequest:(id)a1;
- (void)_ingestResultsFromSnapshotter:(id)a0;
- (id)acquireSnapshotterInUseAssertionWithReason:(id)a0;
- (void)_invalidateExtensionSnapshotterDisabledAssertion:(id)a0 extensionIdentifier:(id)a1;
- (id)activeEditingSessionAssertionExtensionIdentifiers;
- (void)_lock_cleanupAfterOperation:(id)a0;
- (void)_kickoffNextOperation;
- (void)removeBehaviorAssertionObserver:(id)a0;
- (void)_lock_logOperationQueueStatus;
- (id)_lock_snapshotterForRequest:(id)a0 requestContainingRequest:(out id *)a1;
- (void)_posterBoardPrewarmAssertionWasInvalidated;
- (id)_snapshotCoordinatorForPath:(id)a0;
- (BOOL)cancelRequestedSnapshotsForPath:(id)a0;
- (void)removeSnapshotsAtURLs:(id)a0;
- (void)_acquirePrewarmAssertionIfNeeded:(BOOL)a0;
- (void)_teardownPrewarmAssertionIfAppropriate:(id)a0;
- (id)_lock_buildSnapshotterForRequest:(id)a0 attemptNumber:(unsigned long long)a1;
- (void)_setupMemoryPressureTracking;
- (BOOL)_assertionLock_updateOperationQueueSuspended:(BOOL)a0;
- (void)_lock_cleanupAfterRequest:(id)a0;
- (id)acquireSnapshotterDisabledAssertionForProvider:(id)a0 withReason:(id)a1;
- (unsigned long long)_lock_numberOfRemainingOperations;
- (void)_failRequest:(id)a0 withError:(id)a1 shouldReEnqueue:(BOOL)a2 attempt:(unsigned long long)a3;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_invalidateEditingSessionAssertion:(id)a0 extensionIdentifier:(id)a1;
- (void)prewarmSnapshotsForRequests:(id)a0 completion:(id /* block */)a1;
- (void)_assertionLock_evaluateInUseAssertions;
- (void)_lock_teardownPrewarmAssertionIfAppropriate:(id)a0;
- (void)_lock_cancelAllRequests;
- (void)fetchPosterSnapshotsForRequest:(id)a0 completion:(id /* block */)a1;
- (id)acquireEditingSessionAssertionForProvider:(id)a0 withReason:(id)a1;
- (void)_enqueueSnapshotForRequestIfNeeded:(id)a0 relativePriority:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)posterSnapshotForRequest:(id)a0 definition:(id)a1 error:(out id *)a2;
- (BOOL)_isExtensionProhibitedFromSnapshotting:(id)a0;
- (BOOL)_assertionLock_isExtensionProhibitedFromSnapshotting:(id)a0;
- (void)_lock_enqueueSnapshotter:(id)a0 forRequest:(id)a1 attempt:(long long)a2 relativePriority:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)_lock_fireCompletionsForRequest:(id)a0 snapshotImagesByReservation:(id)a1 error:(id)a2;
- (id)_loadReservationsForDefinitionForRequest:(id)a0;
- (BOOL)isSnapshotRequestFulfilled:(id)a0;
- (id)_lock_snapshotCoordinatorForPath:(id)a0;
- (BOOL)ingestSnapshotCollection:(id)a0 forConfiguration:(id)a1 error:(out id *)a2;
- (void)_lock_prioritizeOperation:(id)a0;
- (void)dealloc;
- (void)_invalidateInUseAssertion:(id)a0;
- (BOOL)_lock_cancelSnapshotter:(id)a0 reason:(id)a1;
- (void)addBehaviorAssertionObserver:(id)a0;
- (BOOL)cancelRequestedSnapshotsForExtensionBundleIdentifier:(id)a0;
- (void)_enumerateAssertionObservers:(id /* block */)a0 respondingToSelector:(SEL)a1;
- (void)addObserver:(id)a0;
- (id)_snapshotSuspendedExtensionBundleIdentifiers;
- (BOOL)areSnapshotsFullyPrepared:(id)a0;
- (void)_lock_acquirePrewarmAssertionIfNeeded:(BOOL)a0;
- (void)_lock_enumerateObservers:(id /* block */)a0;

@end
