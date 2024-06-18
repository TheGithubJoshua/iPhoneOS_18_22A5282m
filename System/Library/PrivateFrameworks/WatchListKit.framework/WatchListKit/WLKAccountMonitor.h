@class NSString, ACMonitoredAccountStore, ACAccount;

@interface WLKAccountMonitor : NSObject <ACMonitoredAccountStoreDelegateProtocol>

@property (retain, nonatomic) ACMonitoredAccountStore *monitoredAccountStore;
@property (readonly, nonatomic) ACAccount *activeAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_accountStoreDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_shouldNotifyStoreFrontChange:(id)a0 newAccount:(id)a1;
- (BOOL)_shouldNotifyAccountChange:(id)a0 newAccount:(id)a1;
- (void)dealloc;

@end
