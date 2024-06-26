@class NSString, NSObject;
@protocol OS_dispatch_queue, FCBackgroundTaskable;

@interface FCKeyValueStoreSavePolicyAppBackground : FCKeyValueStoreSavePolicy <FCAppActivityObserving> {
    id<FCBackgroundTaskable> _backgroundTaskable;
    BOOL _inBackground;
    NSObject<OS_dispatch_queue> *_pendingQueue;
    id /* block */ _pendingHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_saveIfNeeded;
- (void)activityObservingApplicationWillTerminate;
- (id)initWithActivityMonitor:(id)a0 backgroundTaskable:(id)a1;
- (void)activityObservingApplicationWillEnterForeground;
- (void)activityObservingApplicationDidEnterBackground;
- (void).cxx_destruct;
- (void)scheduleSaveOnQueue:(id)a0 handler:(id /* block */)a1;

@end
