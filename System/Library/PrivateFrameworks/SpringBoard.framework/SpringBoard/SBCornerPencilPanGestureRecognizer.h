@class NSString, SBTouchHistory;

@interface SBCornerPencilPanGestureRecognizer : SBScreenEdgePanGestureRecognizer <PTSettingsKeyObserver> {
    SBTouchHistory *_touchHistory;
    double _cornerHorizontalEdgeLength;
    double _cornerVerticalEdgeLength;
    long long _touchInterfaceOrientationWhenGestureBegan;
}

@property (readonly, nonatomic) unsigned long long corner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interactiveCornerPanGestureRecognizerWithSettings:(id)a0 corner:(unsigned long long)a1 target:(id)a2 action:(SEL)a3;
+ (unsigned long long)_edgesForCorner:(unsigned long long)a0;
+ (BOOL)_shouldSupportStylusTouches;

- (void)setState:(long long)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)_isOrientedLocation:(struct CGPoint { double x0; double x1; })a0 inCorner:(unsigned long long)a1 forOrientedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withEdgeOffsets:(struct UIOffset { double x0; double x1; })a3;
- (void)_SBLogTouchesWithMethodName:(id)a0 withMethodName:(id)a1;
- (long long)_touchInterfaceOrientation;
- (void)setEdges:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_convertReferenceLocation:(struct CGPoint { double x0; double x1; })a0 toOrientedLocation:(struct CGPoint { double x0; double x1; } *)a1 orientedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_updateSettingsDerivedValues:(id)a0;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (struct UIOffset { double x0; double x1; })_edgeOffsets;
- (BOOL)shouldReceiveTouch:(id)a0;
- (id)_initWithSettings:(id)a0 corner:(unsigned long long)a1 target:(id)a2 action:(SEL)a3 type:(long long)a4 options:(unsigned long long)a5;

@end
