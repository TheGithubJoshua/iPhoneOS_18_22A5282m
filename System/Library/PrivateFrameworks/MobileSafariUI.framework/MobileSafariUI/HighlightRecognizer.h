@interface HighlightRecognizer : UIGestureRecognizer {
    unsigned long long _numberOfTouches;
}

@property (weak, nonatomic) id highlightTarget;
@property (nonatomic) SEL highlightAction;

- (unsigned long long)numberOfTouches;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
