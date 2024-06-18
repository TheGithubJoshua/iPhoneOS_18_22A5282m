@class VMVoicemailManager;

@interface VMNavigationController : UINavigationController

@property (readonly, nonatomic) VMVoicemailManager *manager;

- (id)initWithCoder:(id)a0;
- (id)initWithManager:(id)a0;
- (id)init;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithRootViewController:(id)a0;
- (void).cxx_destruct;

@end
