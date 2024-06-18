@class UIUndoTutorialView;

@interface UIUndoTutorialViewController : UIViewController

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) UIUndoTutorialView *tutorialView;

- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)doneButtonPressed;
- (id)initWithCompletionHandler:(id /* block */)a0;

@end
