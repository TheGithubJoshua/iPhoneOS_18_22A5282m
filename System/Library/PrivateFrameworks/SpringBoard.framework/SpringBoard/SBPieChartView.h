@class NSArray;

@interface SBPieChartView : UIView {
    NSArray *_slices;
    double _valueTotal;
    double _radius;
    struct CGPoint { double x; double y; } _center;
    double _defaultRotation;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateMetrics;
- (void)_drawSlice:(id)a0 atValue:(double)a1;
- (void)_rotateContext;
- (void)setSlices:(id)a0;

@end