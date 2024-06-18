@interface SwiftUI.UIKitHoverGestureRecognizer : UIHoverGestureRecognizer {
    void /* unknown type, empty encoding */ eventBridge;
}

- (id)initWithCoder:(id)a0;
- (void)_hoverExited:(id)a0 withEvent:(id)a1;
- (void)_hoverCancelled:(id)a0 withEvent:(id)a1;
- (id)init;
- (void)_hoverEntered:(id)a0 withEvent:(id)a1;
- (void)_hoverMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)reset;

@end
