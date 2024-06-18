@class UILabel, NSString;

@interface HRBulletedIndentedLabel : UIView

@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *text;

+ (id)_bodyFont;
+ (id)_bodyFontTextStyle;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0;
- (id)firstBaselineAnchor;
- (id)lastBaselineAnchor;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (void)_updateLeadingDetailAttributedTextSize;

@end
