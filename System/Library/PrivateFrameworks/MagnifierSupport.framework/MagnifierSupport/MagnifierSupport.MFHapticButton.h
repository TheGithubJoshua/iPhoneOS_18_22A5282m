@interface MagnifierSupport.MFHapticButton : UIButton {
    void /* unknown type, empty encoding */ buttonFeedbackGenerator;
}

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)shutterButtonDown:(id)a0;

@end
