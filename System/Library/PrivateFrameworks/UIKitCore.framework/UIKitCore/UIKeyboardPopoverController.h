@class UIView;

@interface UIKeyboardPopoverController : UIViewController

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;

- (long long)overrideUserInterfaceStyle;
- (id)init;
- (BOOL)isPresented;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (BOOL)handleHardwareKeyboardEvent:(id)a0;

@end
