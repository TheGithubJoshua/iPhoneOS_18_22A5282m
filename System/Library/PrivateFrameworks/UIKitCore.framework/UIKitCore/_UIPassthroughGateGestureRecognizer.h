@class NSString;
@protocol _UIPassthroughGestureDelegate;

@interface _UIPassthroughGateGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable>

@property (weak, nonatomic) id<_UIPassthroughGestureDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_supportsTouchContinuation;

- (BOOL)_shouldReceiveTouch:(id)a0 withEvent:(id)a1;
- (BOOL)shouldReceiveEvent:(id)a0;
- (void)_scrollingChangedWithEvent:(id)a0;
- (void)endClosed;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)open;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;

@end
