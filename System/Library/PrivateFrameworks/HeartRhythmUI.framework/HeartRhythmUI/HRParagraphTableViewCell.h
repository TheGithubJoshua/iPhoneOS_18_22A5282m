@class NSString, UILabel, NSLayoutConstraint, UIButton;

@interface HRParagraphTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *paragraphLabel;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paragraphLabelBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewParagraphBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewButtonBottomConstraint;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *paragraphText;
@property (copy, nonatomic) NSString *buttonText;

+ (id)reuseIdentifier;

- (id)initWithCoder:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateForCurrentSizeCategory;
- (void)traitCollectionDidChange:(id)a0;
- (id)_titleLabelFont;
- (void).cxx_destruct;
- (id)_buttonFont;
- (void)_setUpConstraints;
- (long long)_buttonHorizontalAlignment;
- (id)_paragraphLabelFont;
- (void)_setUpUI;
- (double)_subtitleLabelBaselineToButton;
- (double)_titleLabelBaselineToParagraphBaseline;
- (double)_titleLabelTopToBaseline;
- (void)_updateBottomConstraint;
- (id)_buttonFontTextStyle;
- (double)_lastViewToBottom;
- (id)_paragraphLabelFontTextStyle;
- (id)_titleLabelFontTextStyle;

@end
