@class NSLayoutConstraint;

@interface HKDynamicButton : UIButton

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;

- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateForCurrentSizeCategory;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (double)_buttonLabelHeight;

@end
