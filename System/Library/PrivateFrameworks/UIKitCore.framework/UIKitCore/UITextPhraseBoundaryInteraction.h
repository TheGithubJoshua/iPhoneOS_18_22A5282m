@class UITextGestureTuning;
@protocol UITextCursorAssertion;

@interface UITextPhraseBoundaryInteraction : UITextInteraction {
    UITextGestureTuning *_gestureTuning;
    id<UITextCursorAssertion> _blinkAssertion;
}

- (void)_createGestureTuningIfNecessary;
- (id)initWithTextInput:(id)a0;
- (void)didMoveToView:(id)a0;
- (void).cxx_destruct;
- (void)_phraseBoundaryGesture:(id)a0;
- (id)_phraseBoundaryGestureRecognizer;
- (struct CGPoint { double x0; double x1; })pointIfPlacedCarefully:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })touchAlignedPointForPoint:(struct CGPoint { double x0; double x1; })a0 translation:(struct CGPoint { double x0; double x1; })a1;
- (void)updateVisibilityOffsetForGesture:(id)a0;

@end
