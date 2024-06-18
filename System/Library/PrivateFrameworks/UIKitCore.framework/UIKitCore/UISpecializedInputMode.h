@interface UISpecializedInputMode : UIKeyboardInputMode

@property (retain, nonatomic) Class viewControllerClass;

- (BOOL)showSWLayoutWithHWKeyboard;
- (BOOL)includeBarHeight;
- (void).cxx_destruct;
- (void)dealloc;
- (id)hardwareLayout;
- (BOOL)isSpecializedInputMode;

@end
