@class UIKeyboard;

@interface _UIDatePickerNumericKeyboardViewController : UIViewController

@property (readonly, nonatomic) UIKeyboard *keyboard;

- (id)init;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)viewWillAppear:(BOOL)a0;

@end
