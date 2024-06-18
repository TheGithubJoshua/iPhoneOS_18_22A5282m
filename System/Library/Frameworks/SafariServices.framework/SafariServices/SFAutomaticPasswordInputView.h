@class SFAutomaticPasswordExplanationView;
@protocol SFAutomaticPasswordInputViewSizing, SFAutomaticPasswordInputViewDelegate;

@interface SFAutomaticPasswordInputView : UIInputView {
    SFAutomaticPasswordExplanationView *_explanationView;
}

@property (readonly, nonatomic) long long keyboardType;
@property (weak, nonatomic) id<SFAutomaticPasswordInputViewDelegate> delegate;
@property (weak, nonatomic) id<SFAutomaticPasswordInputViewSizing> inputViewSizing;
@property (nonatomic) BOOL shouldAllowSelfSizing;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setKeyboardAppearance:(long long)a0;
- (void).cxx_destruct;
- (BOOL)allowsSelfSizing;
- (long long)keyboardAppearance;
- (void)_useStrongPasswordButtonAction:(id)a0;
- (id)initWithInputViewStyle:(long long)a0 keyboardType:(long long)a1;

@end
