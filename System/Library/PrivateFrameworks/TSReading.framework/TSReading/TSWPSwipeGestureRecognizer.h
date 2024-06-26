@class TSUPointerKeyDictionary;

@interface TSWPSwipeGestureRecognizer : UIGestureRecognizer {
    double mStartTime;
    unsigned long long mTouchCountAttained;
    TSUPointerKeyDictionary *mStartLocations;
}

@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) int direction;

- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (double)p_angleDifferenceForAngle1:(double)a0 angle2:(double)a1;
- (void)p_recordTouches:(id)a0;
- (BOOL)p_swipeDirectionValidForAngle:(double)a0 direction:(int)a1;
- (BOOL)p_swipeDirectionValidForXDiff:(double)a0 yDiff:(double)a1;
- (BOOL)p_touchWasSwipe:(id)a0 movedFarOut:(BOOL *)a1;

@end
