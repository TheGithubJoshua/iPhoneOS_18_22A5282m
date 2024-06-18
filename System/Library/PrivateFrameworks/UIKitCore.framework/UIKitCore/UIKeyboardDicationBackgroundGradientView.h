@class NSString, UIDictationView, UIKBRenderConfig;

@interface UIKeyboardDicationBackgroundGradientView : UIView <_UIBasicAnimationFactory>

@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (nonatomic) UIDictationView *dictationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_timingFunctionForAnimation;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (void)startColorTransitionOut;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startColorTransitionIn;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundFillFrame;
- (id)backgroundColorForCurrentRenderConfig;

@end
