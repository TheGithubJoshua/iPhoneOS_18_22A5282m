@class DAAccount, DATrustHandler;

@interface DAAgent : NSObject

@property (retain, nonatomic) DAAccount *account;
@property (nonatomic) double lastRetryTimeout;
@property (nonatomic) BOOL syncWhenReachable;
@property (copy, nonatomic) id /* block */ networkReachableBlock;
@property (nonatomic) BOOL isWaitingForPassword;
@property (nonatomic) BOOL isMonitoring;
@property (readonly, nonatomic) DATrustHandler *trustHandler;

+ (id)launchingAgentWithAccount:(id)a0;

- (void)_reachabilityChanged:(id)a0;
- (id)stateString;
- (id)initWithAccount:(id)a0;
- (void)shutdown;
- (void)startMonitoring;
- (void).cxx_destruct;
- (id)description;
- (void)stopObservingReachability;
- (void)saveXpcActivity:(id)a0;
- (id)getDAAccount;
- (void)observeReachabilityWithBlock:(id /* block */)a0;
- (void)processMeetingRequestDatas:(id)a0 deliveryIdsToClear:(id)a1 deliveryIdsToSoftClear:(id)a2 inFolderWithId:(id)a3 callback:(id /* block */)a4;
- (void)refreshFolderListRequireChangedFolders:(BOOL)a0 isUserRequested:(BOOL)a1;
- (void)requestAgentStopMonitoringWithCompletionBlock:(id /* block */)a0;
- (void)syncFolderIDs:(id)a0 forDataclasses:(long long)a1 isUserRequested:(BOOL)a2;
- (BOOL)monitorFoldersWithSyncKeyMap:(id)a0;
- (void)resumeMonitoringFoldersWithSyncKeyMap:(id)a0;

@end
