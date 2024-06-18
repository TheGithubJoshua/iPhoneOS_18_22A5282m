@class ASDJobManagerOptions, NSString, NSXPCConnection, NSArray, NSHashTable, NSObject, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ASDJobManager : ASDBaseClient <ASDJobManagerClient, LSApplicationWorkspaceObserverProtocol, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_connection;
    NSArray *_jobs;
    int _launchNotificationToken;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
    ASDJobManagerOptions *_options;
    NSMutableSet *_removedJobs;
    BOOL _useLaunchServicesProgress;
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)applicationInstallsDidChange:(id)a0;
- (void)didCompleteJobs:(id)a0 finalPhases:(id)a1;
- (void)removeJobObserver:(id)a0;
- (void)getJobsUsingBlock:(id /* block */)a0;
- (void)pauseJobsWithIDs:(id)a0 completionBlock:(id /* block */)a1;
- (void)didChangeJobs:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)finishJobs:(id)a0;
- (void)resumeJobsWithIDs:(id)a0 completionBlock:(id /* block */)a1;
- (void)getJobsWithIDs:(id)a0 usingBlock:(id /* block */)a1;
- (void)addJobObserver:(id)a0;
- (void)didUpdateProgress:(id)a0;
- (void)dealloc;
- (id)initWithOptions:(id)a0;
- (void)cancelJobsWithIDs:(id)a0 completionBlock:(id /* block */)a1;
- (void)didUpdateStates:(id)a0;

@end
