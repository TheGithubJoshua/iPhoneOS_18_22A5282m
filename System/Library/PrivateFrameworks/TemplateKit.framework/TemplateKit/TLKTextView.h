@class TLKMultilineText;

@interface TLKTextView : UITextView

@property (nonatomic) unsigned long long prominence;
@property (retain, nonatomic) TLKMultilineText *multilineText;
@property (nonatomic) BOOL automaticUrlification;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setText:(id)a0;
- (double)effectiveBaselineOffsetFromBottom;
- (double)effectiveFirstBaselineOffsetFromTop;
- (BOOL)_usesNonVibrantAppearance;
- (void)updateAttributedString;
- (void)urlify;

@end
