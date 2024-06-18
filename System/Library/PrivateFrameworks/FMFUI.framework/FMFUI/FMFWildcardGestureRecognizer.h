@interface FMFWildcardGestureRecognizer : UIGestureRecognizer

@property (copy, nonatomic) id /* block */ touchesBeganCallback;
@property (copy, nonatomic) id /* block */ touchesEndedCallback;

- (id)init;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)ignoreTouch:(id)a0 forEvent:(id)a1;

@end
