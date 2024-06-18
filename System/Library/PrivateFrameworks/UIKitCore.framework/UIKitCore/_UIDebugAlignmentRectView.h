@interface _UIDebugAlignmentRectView : UIView {
    double _baselineOffset;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)_alignmentDebuggingOverlayCreateIfNecessary:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 baselineOffset:(double)a1;

@end
