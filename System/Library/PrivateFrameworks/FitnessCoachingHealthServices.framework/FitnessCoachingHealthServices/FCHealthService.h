@class HDProfile, FCMoveModeCoordinator, FCGoalProgressCoordinator, NSObject, FCTypicalDayProvider, FCCXPCActivityScheduler, NSString, FCGoalProgressDebouncer, FCGoalCompletionStore, FCCDateProvider, FCGoalCompletionCoordinator, FCGoalCompletionActivitySummaryObserver, FCGoalProgressStore, FCAppInstallationObserver;
@protocol OS_dispatch_queue;

@interface FCHealthService : NSObject <FCGoalCompletionCoordinatorDelegate, FCMoveModeCoordinatorDelegate, FCGoalProgressCoordinatorDelegate, HDHealthDaemonReadyObserver> {
    FCAppInstallationObserver *_appInstallationObserver;
    FCCDateProvider *_dateProvider;
    FCGoalCompletionActivitySummaryObserver *_goalCompletionActivitySummaryObserver;
    FCGoalCompletionCoordinator *_goalCompletionCoordinator;
    FCGoalCompletionStore *_goalCompletionStore;
    FCGoalProgressCoordinator *_goalProgressCoordinator;
    FCGoalProgressDebouncer *_goalProgressDebouncer;
    FCCXPCActivityScheduler *_goalProgressScheduler;
    FCGoalProgressStore *_goalProgressStore;
    FCMoveModeCoordinator *_moveModeCoordinator;
    HDProfile *_profile;
    int _sampleNotificationToken;
    BOOL _serviceEnabled;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    int _standalonePhoneNotificationToken;
    FCTypicalDayProvider *_typicalDayProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)daemonReady:(id)a0;
- (void)coordinator:(id)a0 eventFiredWithContent:(id)a1;
- (void)coordinator:(id)a0 postGoalCompletionNotification:(id)a1;
- (void)_onqueue_updateService;
- (void)_postSampleNotification;
- (void).cxx_destruct;
- (void)_onqueue_registerForStandalonePhoneModeChange;
- (void)coordinator:(id)a0 postMoveModeNotification:(id)a1;
- (void)_onqueue_registerForAppInstallationChange;
- (void)registerGoalProgressConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)_appInstallationChanged:(id)a0;

@end
