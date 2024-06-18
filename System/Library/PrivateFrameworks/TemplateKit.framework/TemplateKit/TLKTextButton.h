@class UIFont, TLKImageView, NSString, TLKRichText, TLKImage;

@interface TLKTextButton : UIButton

@property BOOL attributedTitleExplicitlySet;
@property (retain, nonatomic) TLKImageView *tlkImageView;
@property (nonatomic) unsigned long long prominence;
@property (copy, nonatomic) TLKRichText *richTitle;
@property (copy, nonatomic) TLKImage *tlkImage;
@property (nonatomic) BOOL alwaysShowPlaceholderView;
@property BOOL matchesHeightForAlignmentRectWithIntrinsicContentSize;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long alignment;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setAttributedTitle:(id)a0 forState:(unsigned long long)a1;
- (BOOL)allowsVibrancy;
- (void)tlk_updateForAppearance:(id)a0;
- (void)matchHeightForAlignmentRectWithIntrinsicContentSizeIfNecessary;
- (struct CGSize { double x0; double x1; })minimumLayoutSize;
- (void)updateAttributedTitle;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setMinimumLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })maximumLayoutSize;
- (void).cxx_destruct;
- (BOOL)hasTemplateUIImage;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)isImageMode;
- (void)layoutSubviews;
- (void)setMaximumLayoutSize:(struct CGSize { double x0; double x1; })a0;

@end
