@class NSString, ASDServiceBroker;

@interface ASDCrossfireStore : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;

- (id)init;
- (void)flushMetricsWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)reportAppEvent:(id)a0 completionBlock:(id /* block */)a1;
- (void)recordLaunchesWithCompletionBlock:(id /* block */)a0;
- (void)recordMetricsWithCompletionBlock:(id /* block */)a0;
- (void)sendMetricsWithCompletionBlock:(id /* block */)a0;
- (void)getAppEventsWithCompletionBlock:(id /* block */)a0;
- (void)resetMetricsWithCompletionBlock:(id /* block */)a0;

@end
