@interface FMDaemon : NSObject

- (void)startup;
- (id)verifyLaunchEventsConfiguration:(id)a0 withExclusions:(id)a1;
- (id)xpcDarwinEventHandlers;
- (void)initialize;
- (id)xpcDistributedEventHandlers;
- (void)registerXPCEventHandlers;
- (void)startupWithCompletion:(id /* block */)a0;
- (void)run;

@end
