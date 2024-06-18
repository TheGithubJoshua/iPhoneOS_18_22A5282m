@class UIColor;

@interface SPUIHeaderBlurView : UIVisualEffectView

@property (retain) UIColor *baseTintColor;
@property (nonatomic) BOOL keyboardIsUp;
@property (nonatomic) BOOL useInPlaceFilteredBlur;

+ (double)backgroundViewBlurAlphaForProgress:(double)a0 isDarkBackground:(BOOL)a1;

- (id)init;
- (void)setTintColor:(id)a0;
- (void)updateEffect;
- (void).cxx_destruct;
- (void)keyboardWillHide;
- (void)keyboardWillShow;

@end
