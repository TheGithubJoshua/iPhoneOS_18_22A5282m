@class NSString, UINavigationController, UIViewController;

@interface _VUITVAppNavigationController : UINavigationController <UINavigationControllerDelegate, VUITVAppRootViewController>

@property (nonatomic) unsigned long long maxNavControllerStackDepth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UINavigationController *currentNavigationController;
@property (readonly, nonatomic) UIViewController *currentViewController;

- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)loadView;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void)setDelegate:(id)a0;
- (id)initWithRootViewController:(id)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)setTitle:(id)a0;
- (void)dismissAllModals:(id /* block */)a0;
- (id)vui_popToRootViewControllerAnimated:(BOOL)a0;
- (id)vui_popViewControllerAnimated:(BOOL)a0;
- (void)vui_pushViewController:(id)a0 animated:(BOOL)a1;
- (id)vui_rootViewController;
- (void)vui_setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)vui_topViewController;
- (id)vui_viewControllers;
- (id)vui_visibleViewController;

@end
