@interface TeaCharts.TapDragGestureRecognizer : UIGestureRecognizer {
    void /* unknown type, empty encoding */ locations;
    void /* unknown type, empty encoding */ minimumPressDuration;
    void /* unknown type, empty encoding */ orientation;
    void /* unknown type, empty encoding */ touches;
    void /* unknown type, empty encoding */ timer;
}

- (id)initWithCoder:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
