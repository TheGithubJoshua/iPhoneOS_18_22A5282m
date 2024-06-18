@class SBTouchHistory, SBCornerFingerGestureClassifier;

@interface SBCornerFingerPanGestureRecognizer : SBScreenEdgePanGestureRecognizer {
    SBTouchHistory *_touchHistory;
    long long _touchInterfaceOrientationWhenGestureBegan;
    struct CGPoint { double x; double y; } _firstTouchReferenceLocation;
    SBCornerFingerGestureClassifier *_classifier;
}

@property (readonly, nonatomic) unsigned long long corner;

- (void)setState:(long long)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_SBLogTouchesWithMethodName:(id)a0 withMethodName:(id)a1;
- (long long)_touchInterfaceOrientation;
- (void)setEdges:(unsigned long long)a0;
- (struct CGVector { double x0; double x1; })_convertReferenceVector:(struct CGVector { double x0; double x1; })a0 toCorner:(unsigned long long)a1 orientation:(long long)a2;
- (unsigned long long)edges;
- (void).cxx_destruct;
- (BOOL)_shouldBegin;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_convertReferenceLocation:(struct CGPoint { double x0; double x1; })a0 toOrientedLocation:(struct CGPoint { double x0; double x1; } *)a1 orientedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void)reset;
- (id)initWithTarget:(id)a0 action:(SEL)a1 corner:(unsigned long long)a2 classifier:(id)a3;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
