@class PLBackgroundJobCriteria, PLBackgroundJobLibraryCoordinator, NSString, PFCoalescer, NSDictionary, PFCameraViewfinderSessionWatcher, NSMutableSet, NSObject, NSPointerArray, PLBackgroundJobStatusCenter, NSNumber;
@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;

@interface PLBackgroundJobService : NSObject <PFCameraViewfinderSessionWatcherDelegate, PLBackgroundJobLibraryCoordinatorDelegate> {
    NSMutableSet *_registeredXPCActivities;
    NSObject<OS_xpc_object> *_runningXPCActivity;
    unsigned long long _state;
    PLBackgroundJobStatusCenter *_statusCenter;
    PLBackgroundJobLibraryCoordinator *_libraryCoordinator;
    PLBackgroundJobCriteria *_runningCriteria;
    PLBackgroundJobCriteria *_pausedCriteria;
    PFCoalescer *_registrationCoalescer;
    PFCameraViewfinderSessionWatcher *_cameraWatcher;
    double _registrationCoalescerPushBackTimeInterval;
    NSDictionary *_libraryInvalidationCompletionHandlerByLibraryURL;
    NSDictionary *_bundlesToProcessByCriteriaShortCode;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bundlesToProcessByCriteriaShortCodeLock;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_source> *_runningXPCActivityDeferTimer;
    BOOL _deferringService;
    NSNumber *_simulateXpcActivityDeferring;
    BOOL _cameraForeground;
    BOOL _needsActivityUnregistrationOnFirstLaunch;
}

@property (retain, nonatomic) NSPointerArray *observers;
@property (readonly) NSDictionary *statusCenterDump;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_verifyActivityHandlerInvokedWithCorrectIdentifier:(id)a0 forCriteria:(id)a1;
+ (void)_removeAllBundlesFromUserDefaultsWithoutLocking;
+ (BOOL)verifyStateTransitionFromState:(unsigned long long)a0 toState:(unsigned long long)a1;
+ (BOOL)_stateIsReadyForRegistration:(unsigned long long)a0;
+ (BOOL)_stateIsReadyToRun:(unsigned long long)a0;

- (void)_updateCameraForegroundState:(BOOL)a0;
- (id)_bundlesToProcessByCriteriaShortCodesAsPathStrings;
- (void)signalBackgroundProcessingNeededOnBundle:(id)a0;
- (id)init;
- (id)initWithLibraryCoordinator:(id)a0 statusCenter:(id)a1;
- (void)_setServiceStateOnQueue:(unsigned long long)a0;
- (void)_shutdown;
- (BOOL)_activityIsRegisteredForCriteria:(id)a0;
- (void)_setRunningCriteria:(id)a0;
- (void)cameraWatcherDidChangeState:(id)a0;
- (void)_loadBundleRecordsDictionaryFromUserDefaults;
- (void)_removeRegisteredActivityForCriteria:(id)a0;
- (void)signalBackgroundProcessingNeededOnLibrary:(id)a0;
- (void)_simulateXPCShouldDefer:(BOOL)a0;
- (void)_startRunningBackgroundJobsWithCriteria:(id)a0;
- (void)_removeBundleRecordFromProcessingSet:(id)a0 criteriaShortCode:(id)a1;
- (id)_getBundleRecordsFromProcessingSetForAllCriterias;
- (void)_setServiceState:(unsigned long long)a0;
- (void)_registerActivityWithCriteria:(id)a0;
- (void)_unregisterActivityIfNeededShouldConsiderDeferring_enqueue:(BOOL)a0;
- (void)_setRegisteredActivityForCriteria:(id)a0;
- (void).cxx_destruct;
- (id)initWithLibraryCoordinator:(id)a0;
- (void)_registerActivityWithoutCoalescingIfNecessaryOnBundle:(id)a0;
- (void)_startPollingForActivityStatusOnQueue;
- (void)_removeAllBundlesFromProcessingSetForCriteriaShortCode:(id)a0;
- (void)_removeAllBundlesFromProcessingSet;
- (unsigned long long)_getServiceStateOnQueue;
- (void)_appendBundleRecordsToProcessingSet:(id)a0 criteriaShortCode:(id)a1;
- (id)_bundlesToProcessByCriteriaShortCodesAsPathStringsAlreadyLocked;
- (void)_persistBundleRecordsDictionaryToUserDefaults;
- (void)_registerActivityIfNecessaryOnBundles:(id)a0;
- (void)libraryCoordinatorFinishedJobsOnAllSubmittedBundles;
- (void)_startRunningBackgroundJobsWithCriteriaOnQueue:(id)a0;
- (void)_startPollingForActivityStatus;
- (unsigned long long)getServiceState;
- (void)_unregisterActivityIfNeededShouldConsiderDeferring:(BOOL)a0;
- (void)_stopPollingForActivityStatus;
- (id)_getBundleRecordsFromProcessingSetForCriteriaShortCode:(id)a0;
- (void)libraryCoordinatorFinishedJobsOnSubmittedBundle:(id)a0 withCriteria:(id)a1;
- (void)_stopRunningBackgroundJobs;
- (void)invalidateLibraryBundle:(id)a0 completion:(id /* block */)a1;

@end
