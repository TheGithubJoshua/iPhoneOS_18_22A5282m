@class UIViewController;
@protocol SBUISystemApertureElement;

@interface SBUISystemApertureElementSourceContainerViewController : UIViewController

@property (retain, nonatomic) UIViewController<SBUISystemApertureElement> *elementViewController;

- (void).cxx_destruct;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)_canShowWhileLocked;
- (id)_transitionCoordinator;
- (id)_childViewControllerForAlwaysOnTimelines;

@end
