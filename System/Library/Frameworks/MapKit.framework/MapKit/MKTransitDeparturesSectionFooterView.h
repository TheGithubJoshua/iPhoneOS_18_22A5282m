@class MKButtonWithTargetArgument, NSLayoutConstraint;

@interface MKTransitDeparturesSectionFooterView : MKCustomSeparatorCell {
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (readonly, nonatomic) MKButtonWithTargetArgument *button;

+ (id)_font;
+ (double)defaultHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)_updateConstraintValues;

@end
