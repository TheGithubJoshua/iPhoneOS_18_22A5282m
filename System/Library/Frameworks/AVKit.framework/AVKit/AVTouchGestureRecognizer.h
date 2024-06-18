@class NSTimer, NSMutableArray;

@interface AVTouchGestureRecognizer : UIGestureRecognizer {
    NSTimer *_gestureWarmUpDelayTimer;
    NSMutableArray *_candidateGestureIncrementsMultiTouchInfo;
}

- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
