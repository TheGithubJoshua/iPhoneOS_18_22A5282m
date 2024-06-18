@interface WKDeferringGestureRecognizer : UIGestureRecognizer {
    struct WeakObjCPtr<id<WKDeferringGestureRecognizerDelegate>> { id m_weakReference; } _deferringGestureDelegate;
}

@property (nonatomic) BOOL immediatelyFailsAfterTouchEnd;

- (void)setState:(long long)a0;
- (id)initWithDeferringGestureDelegate:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)endDeferral:(BOOL)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)shouldDeferGestureRecognizer:(id)a0;

@end
