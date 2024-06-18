@interface ConversationKit.PushToTalkTalkButtonGestureRecognizer : UIGestureRecognizer {
    void /* unknown type, empty encoding */ interval;
    void /* unknown type, empty encoding */ maximumVerticalVelocity;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ previous;
    void /* unknown type, empty encoding */ recognizedGestureWorkItem;
}

- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
