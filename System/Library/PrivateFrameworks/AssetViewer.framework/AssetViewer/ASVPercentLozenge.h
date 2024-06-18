@class UIViewPropertyAnimator, NSNumberFormatter;

@interface ASVPercentLozenge : UILabel

@property (retain, nonatomic) NSNumberFormatter *percentageFormatter;
@property (retain, nonatomic) UIViewPropertyAnimator *percentLozengeAnimator;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)sizeToFit;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setPercentage:(float)a0;
- (id)lozengeFont;

@end
