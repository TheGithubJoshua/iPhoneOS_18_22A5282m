@class ACAccountStore, ACAccount, NSObject;
@protocol OS_dispatch_queue;

@interface NMSAccountInfo : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    ACAccountStore *_accountStore;
    ACAccount *_activeAccount;
}

@property (class, readonly) NMSAccountInfo *activeStoreAccountInfo;

@property (readonly, nonatomic) ACAccount *activeAccount;

- (id)init;
- (void)_updateActiveAccount;
- (void).cxx_destruct;
- (void)_handleAccountStoreDidChangeNotification:(id)a0;
- (void)dealloc;
- (void)preloadActiveAccount;

@end
