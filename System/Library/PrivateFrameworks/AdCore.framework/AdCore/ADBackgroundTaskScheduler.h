@interface ADBackgroundTaskScheduler : ADSingleton

+ (void)unregisterTaskDelegate:(id)a0;
+ (id)sharedInstance;
+ (void)registerTaskDelegate:(id)a0 forRequestID:(id)a1;

- (id)init;
- (void)cancelBackgroundTask:(id)a0;
- (void)handleXPCActivity:(id)a0 withID:(id)a1;
- (void)checkOnTask:(id)a0;
- (void)addBackgroundTask:(id)a0;

@end
