@class NSString;

@interface UIDictationFloatingStarkView : UIDictationView <UIGestureRecognizerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)show;
- (void)setState:(int)a0;
- (void)dimmingViewWasTapped:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)returnToKeyboard;
- (void)finishReturnToKeyboard;
- (void)layoutSubviews;
- (struct CGPoint { double x0; double x1; })positionForShow;
- (void)endpointButtonPressed;
- (void)prepareForReturnToKeyboard;
- (void)setInputViewsHiddenForDictation:(BOOL)a0;

@end
