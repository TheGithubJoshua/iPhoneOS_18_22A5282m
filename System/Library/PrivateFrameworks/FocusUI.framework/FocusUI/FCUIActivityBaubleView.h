@class NSString, UIImageView, UIFont;

@interface FCUIActivityBaubleView : UIView <FCUIContentSizeCategoryAdjusting, FCUIActivityBaubleLayoutDescribing> {
    UIImageView *_glyphImageView;
    UIFont *_referenceFont;
}

@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double referencePointSize;
@property (readonly, nonatomic) double maximumPointSize;
@property (readonly, nonatomic) double referenceDimension;

- (double)_scaledValueForValue:(double)a0;
- (void)setTintColor:(id)a0;
- (id)tintColor;
- (id)initWithBaubleDescription:(id)a0 shadowAttributes:(struct { float x0; struct CGSize { double x0; double x1; } x1; double x2; })a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateTextAttributes;
- (double)scaledValueForValue:(double)a0;
- (void).cxx_destruct;
- (void)_updateTextAttributesIfNecessary;
- (BOOL)_needsTextAttributesUpdate;
- (void)layoutSubviews;
- (void)_setNeedsTextAttributesUpdate;
- (BOOL)adjustForContentSizeCategoryChange;

@end
