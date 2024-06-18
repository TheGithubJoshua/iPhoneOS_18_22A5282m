@class NSMutableDictionary, NSSet, NSMutableSet, NSMapTable, NSString;
@protocol _DASActivityBackgroundTasksScheduler;

@interface BGTaskScheduler : NSObject <_DASActivityBackgroundTasksSchedulerDelegate>

@property (class, readonly) BGTaskScheduler *sharedScheduler;

@property (retain, nonatomic, setter=_setScheduler:) id<_DASActivityBackgroundTasksScheduler> _scheduler;
@property (retain, nonatomic, setter=_setQueuedLaunchActivities:) NSMutableSet *_queuedLaunchActivities;
@property (retain, nonatomic, setter=_setQueuedExpiredLaunchActivities:) NSMutableSet *_queuedExpiredLaunchActivities;
@property (nonatomic, setter=_setLock:) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
@property (retain, nonatomic, setter=_setRegistrations:) NSMutableDictionary *_registrations;
@property (retain, nonatomic, setter=_setPermittedIdentifiers:) NSSet *_permittedIdentifiers;
@property (retain, nonatomic, setter=_setRunningTasksMap:) NSMapTable *_runningTasksMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;
+ (void)_applicationDidFinishLaunching:(id)a0;
+ (id)_sharedSchedulerIfExists;
+ (BOOL)_isRunningInExtension;
+ (id)_log;

- (id)init;
- (BOOL)registerForTaskWithIdentifier:(id)a0 usingQueue:(id)a1 launchHandler:(id /* block */)a2;
- (BOOL)_unsafe_registerForTaskWithIdentifier:(id)a0 usingQueue:(id)a1 launchHandler:(id /* block */)a2;
- (void)_simulateExpirationForTaskWithIdentifier:(id)a0;
- (BOOL)_isRunningTaskOfClass:(Class)a0;
- (void)_runTask:(id)a0 registration:(id)a1;
- (void)_callExpirationHandlersForActivities:(id)a0 shouldQueue:(BOOL)a1;
- (void)_callRegisteredHandlersForActivities:(id)a0;
- (id)_init;
- (void)getPendingTaskRequestsWithCompletionHandler:(id /* block */)a0;
- (BOOL)submitTaskRequest:(id)a0 error:(id *)a1;
- (id)_runningTasks;
- (void)_simulateLaunchForTaskWithIdentifier:(id)a0;
- (void)cancelAllTaskRequests;
- (void).cxx_destruct;
- (id)_unsafe_registrationForIdentifier:(id)a0;
- (id)_queueForRegistration:(id)a0;
- (BOOL)_unsafe_submitTaskRequest:(id)a0 error:(id *)a1;
- (void)scheduler:(id)a0 handleLaunchForActivities:(id)a1;
- (void)_handleAppLaunch;
- (void)scheduler:(id)a0 willExpireActivities:(id)a1;
- (void)cancelTaskRequestWithIdentifier:(id)a0;

@end
