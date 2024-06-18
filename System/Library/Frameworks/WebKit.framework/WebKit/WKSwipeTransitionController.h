@class NSString;

@interface WKSwipeTransitionController : NSObject <_UINavigationInteractiveTransitionBaseDelegate> {
    void *_gestureController;
    struct RetainPtr<_UINavigationInteractiveTransitionBase> { void *m_ptr; } _backTransitionController;
    struct RetainPtr<_UINavigationInteractiveTransitionBase> { void *m_ptr; } _forwardTransitionController;
    struct WeakObjCPtr<UIView> { id m_weakReference; } _gestureRecognizerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startInteractiveTransition:(id)a0;
- (id).cxx_construct;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)interactiveTransition:(id)a0 gestureRecognizer:(id)a1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a2;
- (BOOL)isNavigationSwipeGestureRecognizer:(id)a0;
- (id)initWithViewGestureController:(void *)a0 gestureRecognizerView:(id)a1;
- (BOOL)interactiveTransition:(id)a0 gestureRecognizer:(id)a1 shouldReceiveTouch:(id)a2;
- (BOOL)shouldBeginInteractiveTransition:(id)a0;
- (id)gestureRecognizerForInteractiveTransition:(id)a0 WithTarget:(id)a1 action:(SEL)a2;
- (id)transitionForDirection:(int)a0;
- (int)directionForTransition:(id)a0;

@end
