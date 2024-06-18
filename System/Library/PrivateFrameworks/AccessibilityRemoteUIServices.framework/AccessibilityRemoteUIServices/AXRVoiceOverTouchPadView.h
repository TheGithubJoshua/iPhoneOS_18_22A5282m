@protocol AXRVoiceOverTouchPadViewDelegate;

@interface AXRVoiceOverTouchPadView : UIView

@property (weak, nonatomic) id<AXRVoiceOverTouchPadViewDelegate> delegate;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityGesturePracticeRegion;
- (void)_accessibilitySetCurrentGesture:(id)a0;

@end
