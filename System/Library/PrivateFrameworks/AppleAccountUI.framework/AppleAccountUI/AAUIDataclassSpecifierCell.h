@class UIImageView, UILabel, UITextView;

@interface AAUIDataclassSpecifierCell : PSTableCell

@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UILabel *headerTitleLabel;
@property (retain, nonatomic) UITextView *headerSubTitleTextView;

+ (long long)cellStyle;
+ (id)_subTitleFont;
+ (id)_attributedStringFromSpecifier:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeForLinkFromSpecifier:(id)a0;
+ (id)_subTitleAttributes;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setupViews;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;

@end
