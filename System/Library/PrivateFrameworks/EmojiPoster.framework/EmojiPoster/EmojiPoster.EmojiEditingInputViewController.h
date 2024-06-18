@interface EmojiPoster.EmojiEditingInputViewController : UIViewController <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ navBar;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ emoji;
    void /* unknown type, empty encoding */ textField;
    void /* unknown type, empty encoding */ emojiCountLabel;
    void /* unknown type, empty encoding */ keyboardVC;
    void /* unknown type, empty encoding */ delegate;
}

- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)didTapCloseButton;

@end
