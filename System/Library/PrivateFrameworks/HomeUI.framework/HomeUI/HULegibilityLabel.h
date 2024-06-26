@class UIFont, NSString, NSAttributedString, _UILegibilitySettings, NSArray, UILayoutGuide, _UILegibilityView, UILabel, UIColor;

@interface HULegibilityLabel : UIView <HUActsAsLabel> {
    UILabel *_lookasideLabel;
    _UILegibilityView *_legibilityView;
    BOOL _isDirty;
    long long _options;
    NSArray *_legibilityConstraints;
    UILayoutGuide *_firstBaselineLayoutGuide;
    UILayoutGuide *_lastBaselineLayoutGuide;
    UIColor *_textColorOverride;
}

@property (nonatomic) double strength;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (readonly, nonatomic) double firstBaselineOffsetFromBottom;
@property (readonly, nonatomic) double lastBaselineOffsetFromBottom;
@property (readonly, nonatomic) double baselineOffset;

- (id)initWithCoder:(id)a0;
- (void)_updateLegibilityView;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)a0;
- (id)viewForLastBaselineLayout;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)lineBreakMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setAdjustsFontForContentSizeCategory:(BOOL)a0;
- (void)setOptions:(long long)a0;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0 strength:(double)a1;
- (void)_updateLabelForLegibilitySettings;
- (long long)numberOfLines;
- (BOOL)adjustsFontSizeToFitWidth;
- (void)setNumberOfLines:(long long)a0;
- (id)viewForFirstBaselineLayout;
- (void)_markOurselfDirty;
- (void)layoutSubviews;
- (double)minimumScaleFactor;
- (void)setMinimumScaleFactor:(double)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLineBreakMode:(long long)a0;
- (void)setTextAlignment:(long long)a0;
- (BOOL)adjustsFontForContentSizeCategory;
- (long long)textAlignment;
- (id)initWithSettings:(id)a0 strength:(double)a1 text:(id)a2 font:(id)a3;
- (id)initWithSettings:(id)a0 strength:(double)a1 text:(id)a2 font:(id)a3 options:(long long)a4;

@end
