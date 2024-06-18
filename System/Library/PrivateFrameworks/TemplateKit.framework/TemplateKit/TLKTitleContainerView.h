@class TLKRichTextField, NUIContainerBoxView, TLKImageView, TLKLabel;

@interface TLKTitleContainerView : TLKStackView

@property (retain, nonatomic) TLKRichTextField *titleField;
@property (retain, nonatomic) TLKLabel *secondaryLabel;
@property (retain, nonatomic) NUIContainerBoxView *secondaryImageViewBoxView;
@property (retain, nonatomic) TLKImageView *secondaryImageView;

+ (BOOL)hasNonBoldFormattingInRichText:(id)a0;

- (id)init;
- (id)viewForLastBaselineLayout;
- (id)titleLabel;
- (void).cxx_destruct;
- (id)viewForFirstBaselineLayout;
- (id)titleFont;
- (id)secondaryTitleLabelString;
- (id)titleLabelString;
- (void)updateResultWithTitle:(id)a0 secondaryTitle:(id)a1 image:(id)a2 detached:(BOOL)a3 useCompactMode:(BOOL)a4 truncateMiddle:(BOOL)a5;

@end
