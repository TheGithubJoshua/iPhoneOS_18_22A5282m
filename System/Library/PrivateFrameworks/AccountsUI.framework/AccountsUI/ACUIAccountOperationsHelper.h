@class ACAccountStore, NSObject;
@protocol OS_dispatch_queue, ACUIAccountOperationsDelegate;

@interface ACUIAccountOperationsHelper : NSObject {
    ACAccountStore *_accountStore;
    NSObject<OS_dispatch_queue> *_accountOperationsQueue;
}

@property BOOL isSavingAccount;
@property BOOL isRemovingAccount;
@property (weak, nonatomic) id<ACUIAccountOperationsDelegate> delegate;

- (id)initWithAccountStore:(id)a0;
- (id)_desiredDataclassActionsFromPossibleActions:(id)a0 forAccount:(id)a1 withError:(id *)a2;
- (void)saveAccount:(id)a0 withDataclassActions:(id)a1 requireVerification:(BOOL)a2;
- (void)saveAccount:(id)a0;
- (void)saveAccount:(id)a0 withDataclassActions:(id)a1 requireVerification:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)dataclassActionsForAccountSave:(id)a0 forDataclass:(id)a1 error:(id *)a2;
- (void)saveAccount:(id)a0 requireVerification:(BOOL)a1 completion:(id /* block */)a2;
- (void)saveAccount:(id)a0 withDataclassActions:(id)a1;
- (void)saveAccount:(id)a0 requireVerification:(BOOL)a1;
- (void)removeAccount:(id)a0;

@end
