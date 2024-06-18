@class NSSet;

@interface _UITouchesObservingGestureRecognizer : UIGestureRecognizer

@property (copy, nonatomic) NSSet *touches;

+ (BOOL)_shouldDefaultToTouches;

- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)_affectedByGesture:(id)a0;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)_allTouchesAreEndedOrCancelled:(id)a0;
- (void)_updateTouchesFromEvent:(id)a0;
- (BOOL)_wantsPartialTouchSequences;

@end
