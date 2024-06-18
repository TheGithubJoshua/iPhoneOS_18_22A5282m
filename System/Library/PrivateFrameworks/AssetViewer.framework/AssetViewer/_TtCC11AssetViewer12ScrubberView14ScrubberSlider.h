@interface _TtCC11AssetViewer12ScrubberView14ScrubberSlider : UISlider {
    void /* unknown type, empty encoding */ sliderThumbView;
    void /* unknown type, empty encoding */ translationFromTrailingTouch;
    void /* unknown type, empty encoding */ trackedLocationOfTouch;
    void /* unknown type, empty encoding */ trackedValue;
    void /* unknown type, empty encoding */ thumbShouldReturnToTouch;
    void /* unknown type, empty encoding */ normalizer;
    void /* unknown type, empty encoding */ scrubbingSpeed;
}

- (id)initWithCoder:(id)a0;
- (void)setValue:(float)a0 animated:(BOOL)a1;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)createThumbView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)tintColorDidChange;

@end
