@protocol SBSystemGestureRecognizerDelegate;

@interface SBScreenEdgePanGestureRecognizer : UIScreenEdgePanGestureRecognizer

@property (nonatomic) double grabberActiveZoneWidth;
@property (weak, nonatomic) id<SBSystemGestureRecognizerDelegate> delegate;

- (BOOL)isLocationWithinGrabberActiveZone;
- (void)sb_commonInitScreenEdgePanGestureRecognizer;
- (id)initWithTarget:(id)a0 action:(SEL)a1 type:(long long)a2 options:(unsigned long long)a3;
- (long long)_touchInterfaceOrientation;
- (id)initWithTarget:(id)a0 action:(SEL)a1;

@end
