@class NSString;
@protocol WKKeyboardScrollViewAnimatorDelegate;

@interface WKKeyboardScrollViewAnimator : NSObject <WKKeyboardScrollableInternal> {
    struct WeakObjCPtr<UIScrollView> { id m_weakReference; } _scrollView;
    struct RetainPtr<WKKeyboardScrollingAnimator> { void *m_ptr; } _animator;
    BOOL _delegateRespondsToIsKeyboardScrollable;
    BOOL _delegateRespondsToDistanceForIncrement;
    BOOL _delegateRespondsToWillScroll;
    BOOL _delegateRespondsToDidFinishScrolling;
}

@property (weak, nonatomic) id<WKKeyboardScrollViewAnimatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishScrolling;
- (void)handleKeyEvent:(id)a0;
- (id)init;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (id)initWithScrollView:(id)a0;
- (BOOL)isKeyboardScrollable;
- (struct RectEdges<bool> { struct array<bool, 4UL> { BOOL x0[4]; } x0; })rubberbandableDirections;
- (double)distanceForIncrement:(unsigned char)a0 inDirection:(unsigned char)a1;
- (struct CGSize { double x0; double x1; })interactiveScrollVelocity;
- (id).cxx_construct;
- (void)invalidate;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })boundedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)scrollTriggeringKeyIsPressed;
- (void)willStartInteractiveScroll;
- (BOOL)beginWithEvent:(id)a0;
- (void)dealloc;
- (struct RectEdges<bool> { struct array<bool, 4UL> { BOOL x0[4]; } x0; })scrollableDirectionsFromOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollWithScrollToExtentAnimationTo:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollToContentOffset:(struct FloatPoint { float x0; float x1; })a0 animated:(BOOL)a1;

@end
