@class NSString, UIHoverEvent;

@interface _UIInterruptScrollDecelerationGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable, _UIHoverEventRespondable> {
    UIHoverEvent *_currentHoverEvent;
    long long _previousTrackpadFingerDownCount;
    long long _trackpadFingerDownCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_hoverExited:(id)a0 withEvent:(id)a1;
- (void)_hoverCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldReceivePress:(id)a0;
- (void)_hoverEntered:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldReceiveTouch:(id)a0 forEvent:(id)a1 recognizerView:(id)a2;
- (void)_scrollingChangedWithEvent:(id)a0;
- (void)_hoverMoved:(id)a0 withEvent:(id)a1;
- (BOOL)_affectedByGesture:(id)a0;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)reset;

@end
