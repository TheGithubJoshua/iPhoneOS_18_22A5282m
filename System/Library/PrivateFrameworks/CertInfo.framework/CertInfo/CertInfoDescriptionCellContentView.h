@class NSArray;

@interface CertInfoDescriptionCellContentView : UIView {
    NSArray *_labelsAndValues;
    double _idealHeight;
    int _sizesCount;
    struct CGSize { double x0; double x1; } *_sizes;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_labelFont;
- (void)dealloc;
- (void)layoutSubviews;
- (double)rowHeight;
- (id)_valueFont;
- (void)_recalculateIdealHeight;
- (void)setLabelsAndValues:(id)a0;

@end
