@class CLKUICurvedLabel, UIView;

@interface CLKUICurvedColoringLabel : CLKUIColoringLabel {
    CLKUICurvedLabel *_curvedLabel;
}

@property (nonatomic) double circleRadius;
@property (nonatomic) BOOL interior;
@property (nonatomic) double centerAngle;
@property (nonatomic) double maxAngularWidth;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } textBoundingRect;
@property (nonatomic) unsigned long long imagePlacement;
@property (nonatomic) double imagePadding;
@property (weak, nonatomic) UIView *imageView;
@property (nonatomic) struct CGSize { double x0; double x1; } imageViewOverrideSize;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)font;
- (double)alpha;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (id)textColor;
- (id)text;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setTracking:(double)a0;
- (void)setTextColor:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setAlpha:(double)a0;
- (void).cxx_destruct;
- (double)maxWidth;
- (void)setColor:(id)a0;
- (long long)numberOfLines;
- (id)attributedText;
- (void)setText:(id)a0;
- (void)setNumberOfLines:(long long)a0;
- (void)setFont:(id)a0;
- (id)color;
- (void)setAttributedText:(id)a0;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setMaxWidth:(double)a0;
- (double)_firstLineBaseline;
- (double)_lastLineBaseline;
- (void)invalidateCachedSize;
- (void)setImageView:(id)a0 placement:(unsigned long long)a1 padding:(double)a2;
- (void)getTextCenter:(struct CGPoint { double x0; double x1; } *)a0 startAngle:(double *)a1 endAngle:(double *)a2;
- (void)setUsesTextProviderTintColoring:(BOOL)a0;
- (BOOL)isTextTruncated;
- (void)_setAnimationAlpha:(double)a0;
- (void)_setUpSnapshot;
- (struct CGPoint { double x0; double x1; })centerForImage;
- (void)setTextProviderFont:(id)a0;
- (id)textProviderFont;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForImage;

@end
