@class UIFont, TLKMultilineText, UILabel, TLKRichText, TLKFormattedText;

@interface TLKLabel : UILabel

@property (retain, nonatomic) UILabel *overlayLabelForNonColoredGlyphs;
@property (retain) UIFont *originalFont;
@property BOOL hasCustomTextColor;
@property BOOL attributedTextExplicitelySet;
@property BOOL attributedTextUpdateDisabled;
@property BOOL attributedTextUpdateSkipped;
@property unsigned long long adjustedProminence;
@property (nonatomic) unsigned long long prominence;
@property (retain, nonatomic) TLKMultilineText *multilineText;
@property (retain, nonatomic) TLKRichText *richText;
@property (retain, nonatomic) TLKFormattedText *formattedText;
@property (nonatomic) BOOL supportsColorGlyphs;

+ (id)secondaryLabel;
+ (id)primaryLabel;
+ (id)tertiaryLabel;

- (void)setStringValue:(id)a0;
- (id)init;
- (id)initWithProminence:(unsigned long long)a0;
- (void)tlk_updateForAppearance:(id)a0;
- (void)setFont:(id)a0 keepOriginal:(BOOL)a1;
- (void)loadInlineImages;
- (void)updateAdjustedProminence;
- (void)updateWithAttributedString:(id)a0;
- (void)setTextColor:(id)a0;
- (void)updateWithString:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setText:(id)a0;
- (void)setNumberOfLines:(long long)a0;
- (void)updateAttributedText;
- (void)setFont:(id)a0;
- (void)performBatchUpdates:(id /* block */)a0;
- (void)setAttributedText:(id)a0;
- (void)layoutSubviews;
- (void)setLineBreakMode:(long long)a0;
- (void)setTextAlignment:(long long)a0;
- (void)setAttributedStringValue:(id)a0;
- (BOOL)hasEmphasizedFormattingInRichText;

@end
