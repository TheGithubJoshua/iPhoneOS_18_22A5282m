@class NSError, PRUpdatingService, NSString, PRSPosterPathsAssertion, CLInUseAssertion, NSObject, PRSPosterPath, NSMutableArray, PRSPosterUpdateSessionInfo, RBSAssertion;
@protocol PBFBehaviorAssertionProviding, OS_dispatch_group, PBFRuntimeAssertionProviding, BSInvalidatable;

@interface PBFPosterExtensionReloadConfigurationOperation : NSBlockOperation <PRUpdatingServiceObserver, PBFBehaviorAssertionObserver> {
    NSMutableArray *_lock_completionObservers;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    PRSPosterUpdateSessionInfo *_sessionInfo;
    NSObject<OS_dispatch_group> *_lock_group;
    BOOL _lock_isFinished;
    PRSPosterPathsAssertion *_lock_postRefreshPosterPathsAssertion;
    RBSAssertion *_lock_extensionPosterUpdateRuntimeAssertion;
    RBSAssertion *_lock_extensionPosterUpdateEntitledMemoryAssertion;
    CLInUseAssertion *_lock_locationInUseAssertion;
    id<BSInvalidatable> _lock_snapshotterDisabledAssertion;
    RBSAssertion *_lock_posterBoardPosterUpdateRuntimeAssertion;
    long long _reason;
    BOOL _locationInUse;
}

@property (retain) PRSPosterPath *preRefreshPosterConfiguration;
@property (retain) NSError *error;
@property BOOL didTimeout;
@property (readonly, nonatomic) double timeoutInterval;
@property (readonly, nonatomic) PRSPosterPath *existingConfigurationPath;
@property (readonly, nonatomic) PRUpdatingService *updatingService;
@property (readonly, nonatomic) id<PBFRuntimeAssertionProviding> runtimeAssertionProvider;
@property (readonly, nonatomic) id<PBFBehaviorAssertionProviding> behaviorAssertionProvider;
@property (readonly, nonatomic) double executionStartDate;
@property (readonly, nonatomic) double executionFinishDate;
@property (readonly, nonatomic) double executionTime;
@property (readonly, nonatomic, getter=hasUniqueSessionInfo) BOOL uniqueSessionInfo;
@property (readonly) PRSPosterPath *postRefreshPosterConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setup;
- (void)cancel;
- (id)_userInfoForErrors;
- (void)cancelWithError:(id)a0;
- (void)addCompletionObserver:(id /* block */)a0;
- (double)executionTime;
- (void).cxx_destruct;
- (void)_finishWithError:(id)a0 postRefreshPosterPathsAssertion:(id)a1;
- (void)_fireCompletionObservers:(id)a0 instance:(id)a1 error:(id)a2;
- (void)dealloc;
- (void)updatingService:(id)a0 didInvalidateWithError:(id)a1;
- (void)invalidateAssertionsWithCompletion:(id /* block */)a0;
- (void)assertionProviderDidAcquireEditingSessionAssertion:(id)a0 forExtensionIdentifier:(id)a1;
- (void)assertionProviderDidAcquireSnapshotterDisabledAssertion:(id)a0 forExtensionIdentifier:(id)a1;
- (id)initWithUpdatingService:(id)a0 sessionInfo:(id)a1 existingConfigurationPath:(id)a2 locationInUse:(BOOL)a3 runtimeAssertionProvider:(id)a4 behaviorAssertionProvider:(id)a5 timeout:(double)a6 powerLogReason:(long long)a7;

@end
