@class SBOrientationTransformWrapperView;
@protocol SBSwitcherViewControllerDelegate;

@interface SBSwitcherViewController : UIViewController {
    SBOrientationTransformWrapperView *_contentWrapperView;
}

@property (weak, nonatomic) id<SBSwitcherViewControllerDelegate> delegate;
@property (nonatomic) long long contentOrientation;

- (long long)_overrideInterfaceOrientationMechanics;
- (void)viewDidLoad;
- (BOOL)shouldAutorotate;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)addContentView:(id)a0;

@end
