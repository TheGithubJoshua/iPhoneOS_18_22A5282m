@class NSString, UIKeyboardInputMode;

@interface TIHardwareKeyboardDetailController : PSListController

@property (readonly, nonatomic) NSString *inputMode;
@property (copy, nonatomic) UIKeyboardInputMode *uiKeyboardinputMode;

- (id)specifiers;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setHardwareLayout:(id)a0;
- (id)newSpecifiers;

@end
