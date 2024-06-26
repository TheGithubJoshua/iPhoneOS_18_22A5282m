@class ACAccount, ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface ASKStorefrontChangeProvider : NSObject

@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) ACAccount *localAccount;
@property (retain, nonatomic) ACAccount *activeAccount;

- (void)accountStoreDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasStorefrontChangedFromAccount:(id)a0 toAccount:(id)a1;
- (BOOL)hasManagedStateChangedFromAccount:(id)a0 toAccount:(id)a1;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0;

@end
