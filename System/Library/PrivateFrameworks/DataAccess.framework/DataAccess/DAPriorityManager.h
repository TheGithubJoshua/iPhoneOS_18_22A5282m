@class NSMutableDictionary, NSMapTable, RBSProcessMonitor;

@interface DAPriorityManager : NSObject

@property (retain, nonatomic) NSMapTable *clientsToPriorityRequests;
@property (retain, nonatomic) RBSProcessMonitor *processMonitor;
@property (retain, nonatomic) NSMutableDictionary *cachedAppState;
@property (nonatomic) long long foregroundDataclasses;
@property (readonly, nonatomic) int currentPriority;

+ (void)vendPriorityManagers;
+ (id)sharedManager;

- (id)stateString;
- (id)init;
- (void)_setForegroundDataclasses:(long long)a0;
- (id)appIDsToDataclasses;
- (void)appWithBundleID:(id)a0 isNowRunningAndVisible:(BOOL)a1;
- (int)_recalculatePriority;
- (void)requestPriority:(int)a0 forClient:(id)a1 dataclasses:(long long)a2;
- (void)bumpDataclassesToUIPriority:(long long)a0;
- (void)_setNewPriority;
- (void).cxx_destruct;
- (void)setupProcessStateMonitor;
- (void)_updateForegroundDataclasses;
- (void)dealloc;

@end
