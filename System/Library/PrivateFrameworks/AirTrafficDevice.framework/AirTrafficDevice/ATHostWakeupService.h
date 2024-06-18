@class NSString;

@interface ATHostWakeupService : NSObject <ICEnvironmentMonitorObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)stop;
- (void)start;
- (void)sendWakeupToHostWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)environmentMonitorDidChangePower:(id)a0;
- (void)getWakeableHostsWithCompletion:(id /* block */)a0;
- (void)sendWakeupToAllHostsWithCompletion:(id /* block */)a0;
- (void)_wakeupHost:(id)a0;

@end
