@class UITouch, UIEvent;
@protocol _UIMultiSelectOneFingerPanGestureDelegate;

@interface _UIMultiSelectOneFingerPanGesture : UIPanGestureRecognizer

@property (readonly, nonatomic) UITouch *activeTouch;
@property (readonly, nonatomic) UIEvent *activeEvent;
@property (weak, nonatomic) id<_UIMultiSelectOneFingerPanGestureDelegate> oneFingerPanDelegate;

- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;
- (BOOL)_affectedByGesture:(id)a0;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (BOOL)_preventsDragInteractionGestures;

@end
