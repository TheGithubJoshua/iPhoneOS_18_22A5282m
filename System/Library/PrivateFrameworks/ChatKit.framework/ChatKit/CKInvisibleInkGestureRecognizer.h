@class UITouch;

@interface CKInvisibleInkGestureRecognizer : UIGestureRecognizer

@property (retain, nonatomic) UITouch *firstTouch;
@property (nonatomic) struct CGPoint { double x; double y; } startLocation;
@property (nonatomic) double startTime;

- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)_hasActiveTouchesInEvent:(id)a0;

@end
