@class UIImageView, UIActivityIndicatorView, UILabel, LAUICheckmarkLayer, UIButton;

@interface PKTableHeaderView : UIView {
    struct CGSize { double width; double height; } _originalImageViewSize;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_actionButton;
    BOOL _isTemplateLayout;
}

@property (nonatomic) unsigned long long style;
@property (nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;
@property (nonatomic) double minimumHeight;
@property (nonatomic) double maximumHeight;
@property (nonatomic) BOOL accessoryViewsDisabled;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) BOOL shouldReserveSubtitleHeight;
@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (readonly, nonatomic) LAUICheckmarkLayer *checkmarkLayer;

- (id)_titleFont;
- (void)_updateImageView;
- (id)_subtitleFont;
- (void)_updateFonts;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setActionTitle:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (id)actionButton;
- (BOOL)_hasAccessibilityLargeText;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageHeightAdjustment:(double)a1;
- (void)_updateAccessoryViews;
- (void)_updateCheckmarkColor;
- (void)setImageViewImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 animated:(BOOL)a2;
- (void)setPassSnapshot:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 animated:(BOOL)a2 needsCorners:(BOOL)a3;
- (void)setPassSnapshotUsingDefaultSize:(id)a0 animated:(BOOL)a1 needsCorners:(BOOL)a2;

@end
