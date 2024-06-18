@interface LTUIErrorViewController : UINavigationController

- (void)_updateBackground;
- (id)initWithError:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewWillAppear:(BOOL)a0;
- (void)drawCloseButton;

@end
