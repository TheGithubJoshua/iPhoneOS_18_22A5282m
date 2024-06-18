@class NSString, NSLayoutConstraint, NSAttributedString;

@interface FULabel : TLKLabel {
    NSString *_stringValue;
    NSAttributedString *_attributedStringValue;
    FULabel *_realAssociatedScalingLabel;
}

@property (weak) NSLayoutConstraint *associatedLabelConstraint;
@property (copy) id /* block */ onTap;
@property (readonly, nonatomic) BOOL uppercase;
@property (readonly) BOOL useCurrentLocale;
@property (weak, nonatomic) FULabel *associatedScalingLabel;

- (void)setStyleProvider:(id)a0 primaryStyle:(BOOL)a1;
- (void)setUppercase:(BOOL)a0 usingCurrentLocale:(BOOL)a1;
- (void)awakeFromNib;
- (id)_associatedScalingLabel;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (void)updateWidthConstraintWithRatio:(double)a0;
- (void)setAttributedText:(id)a0;
- (void)layoutSubviews;
- (void)performTap:(id)a0;

@end
