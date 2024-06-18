@class UITextGestureTuning;

@interface _UIKeyboardBasedTextSelectionInteraction : _UIKeyboardTextSelectionInteraction

@property (readonly, nonatomic) UITextGestureTuning *gestureTuning;

- (void)_createGestureTuningIfNecessary;
- (void)updateOneFingerSelectWithTranslation:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;
- (void)_processGestureForCustomHighlighter:(id)a0;
- (id)owner;
- (void)didMoveToView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (BOOL)enclosingScrollViewIsScrolling;
- (void)oneFingerForcePan:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint { double x0; double x1; })a0 viaDrag:(BOOL)a1;
- (void)dealloc;
- (void)endOneFingerSelectWithExecutionContext:(id)a0;
- (void)oneFingerForcePress:(id)a0;
- (void)beginOneFingerSelectWithTranslation:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;

@end
