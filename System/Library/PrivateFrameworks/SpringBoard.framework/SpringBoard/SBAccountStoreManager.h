@class NSObject, ACAccount, ACAccountStore;
@protocol OS_dispatch_queue;

@interface SBAccountStoreManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) ACAccount *primaryAppleAccount;
@property (readonly, nonatomic) ACAccountStore *accountStore;

- (void)_accountStoreDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_updatePrimaryAppleAccount;
- (void)_queue_updatePrimaryAppleAccount;

@end
