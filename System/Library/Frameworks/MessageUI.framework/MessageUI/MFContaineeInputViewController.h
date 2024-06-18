@class UIViewController, NSLayoutConstraint;

@interface MFContaineeInputViewController : UIInputViewController

@property (retain, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (nonatomic) BOOL allowsSelfSizing;

- (void)viewDidLayoutSubviews;
- (void)_updateContentViewControllerHeight;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithContentViewController:(id)a0;

@end
