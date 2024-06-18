@class NSString, UILabel, UIView, UIButton;

@interface UIDictationLayoutView : UIDictationView <UIPointerInteractionDelegate> {
    BOOL _hideSwitcher;
    UIButton *_globeButton;
    UIButton *_keyboardButton;
    UILabel *_languageLabel;
    NSString *_currentDictationLanguage;
    UIView *_waveTapEndpointButtonView;
    BOOL _blackTextColor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setState:(int)a0;
- (BOOL)isShowing;
- (void)globeButtonPressed:(id)a0 withEvent:(id)a1 location:(struct CGPoint { double x0; double x1; })a2;
- (void)setRenderConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)darkGrayColor;
- (void)updateLanguageLabel;
- (void).cxx_destruct;
- (void)returnToKeyboard;
- (void)finishReturnToKeyboard;
- (void)layoutSubviews;
- (void)keyboardButtonPressed:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)globeButtonPressed:(id)a0 withEvent:(id)a1;

@end
