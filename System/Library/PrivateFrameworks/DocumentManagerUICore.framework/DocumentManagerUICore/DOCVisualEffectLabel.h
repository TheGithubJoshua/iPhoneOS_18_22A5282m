@class UIColor, NSString, UIFont, UILabel;

@interface DOCVisualEffectLabel : UIVisualEffectView

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIFont *font;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) UILabel *label;

- (id)initWithEffect:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)viewForLastBaselineLayout;
- (id)font;
- (long long)lineBreakMode;
- (id)text;
- (void)setAdjustsFontForContentSizeCategory:(BOOL)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)setText:(id)a0;
- (void)setFont:(id)a0;
- (void)setLineBreakMode:(long long)a0;
- (BOOL)adjustsFontForContentSizeCategory;

@end
