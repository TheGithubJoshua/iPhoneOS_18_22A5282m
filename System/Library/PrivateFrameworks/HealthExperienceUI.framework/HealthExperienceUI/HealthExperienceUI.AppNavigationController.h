@interface HealthExperienceUI.AppNavigationController : HealthExperienceUI.BaseNavigationController

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (id)initWithCoder:(id)a0;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithRootViewController:(id)a0;

@end