@class NSArray, NSMutableDictionary, NSString, NSObject;
@protocol OS_os_log, ANRapportConnectionProvider, OS_dispatch_queue, ANAnnounceReachabilityManagerDelegate;

@interface ANAnnounceReachabilityManager : NSObject <ANHomeManagerDelegate, ANRapportConnectionDeviceDelegate>

@property (readonly, nonatomic) id<ANRapportConnectionProvider> rapportConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSMutableDictionary *homeReachability;
@property (nonatomic) BOOL started;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) NSArray *monitoredHomes;
@property (weak, nonatomic) id<ANAnnounceReachabilityManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)stop;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)accessoryDidUpdateControllable:(id)a0;
- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)homeDidUpdateAccessControlForCurrentUser:(id)a0;
- (void)didRemoveHome:(id)a0;
- (unsigned long long)_filteredReachabilityLevelFromReachabilityLevel:(unsigned long long)a0 forHome:(id)a1;
- (void)_initializeReachabilityStatus;
- (void)_notifyClientsReachabilityChangeForHome:(id)a0 toLevel:(unsigned long long)a1;
- (void)_notifyClientsReachabilityChangeForRoom:(id)a0 inHome:(id)a1 toLevel:(unsigned long long)a2;
- (void)_rapportActivationHandler:(id)a0;
- (unsigned long long)_reachabilityForHome:(id)a0;
- (unsigned long long)_reachabilityForRoom:(id)a0 inHome:(id)a1;
- (void)_reevaluateHomeKitReachabilityForHome:(id)a0;
- (void)_updateReachabilityLevelWithReachabilityLevel:(unsigned long long)a0 forAccessory:(id)a1 operation:(unsigned long long)a2;
- (void)connection:(id)a0 didFindDevice:(id)a1;
- (void)connection:(id)a0 didLoseDevice:(id)a1;
- (void)didAddHome:(id)a0;
- (id)monitoredRoomsForHome:(id)a0;
- (unsigned long long)reachabilityForHome:(id)a0;
- (unsigned long long)reachabilityForRoom:(id)a0 inHome:(id)a1;

@end