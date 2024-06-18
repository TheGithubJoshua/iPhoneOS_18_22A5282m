@class SiriSharedUIViewStackContainer;

@interface SiriSharedUIViewStackContainerController : UIViewController

@property (readonly, nonatomic) SiriSharedUIViewStackContainer *viewStackContainer;

- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_canShowWhileLocked;

@end
