@interface CKNavigationController : UINavigationController

- (void)viewDidLayoutSubviews;
- (id)childViewControllerForStatusBarStyle;
- (BOOL)shouldAutorotate;
- (id)preferredFocusEnvironments;

@end
