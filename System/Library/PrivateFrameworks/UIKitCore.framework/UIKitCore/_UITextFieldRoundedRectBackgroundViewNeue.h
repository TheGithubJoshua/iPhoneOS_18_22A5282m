@class UIColor;

@interface _UITextFieldRoundedRectBackgroundViewNeue : UIView {
    struct { unsigned char enabled : 1; unsigned char hasFlexibleCornerRadius : 1; unsigned char usesSinglePixelLineWidth : 1; } _flags;
}

@property (nonatomic) BOOL usesSinglePixelLineWidth;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL hasFlexibleCornerRadius;

- (double)_screenScale;
- (void)setEnabled:(BOOL)a0 animated:(BOOL)a1;
- (id)_strokeColor:(BOOL)a0;
- (id)_fillColor:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_cornerRadiusAdjustedForBoundsHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 active:(BOOL)a1;
- (void).cxx_destruct;
- (void)updateView;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 active:(BOOL)a1 usesSinglePixelLineWidth:(BOOL)a2 updateView:(BOOL)a3;
- (void)layoutSubviews;
- (void)setActive:(BOOL)a0;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 active:(BOOL)a1 usesSinglePixelLineWidth:(BOOL)a2;

@end
