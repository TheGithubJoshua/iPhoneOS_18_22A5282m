@class UIStackView, _UIActivityActionCellBadgeView, _UIActivityActionCellTitleLabel, UIView, NSUUID, UIImageView, NSString, UIImage, NSLayoutConstraint, _UIHostActivityProxy, UIColor;

@interface UIActivityActionGroupCell : UIActivityActionCell {
    NSLayoutConstraint *_titleLabelHeightAnchor;
}

@property (retain, nonatomic) _UIActivityActionCellTitleLabel *titleLabel;
@property (retain, nonatomic) UIImageView *activityImageView;
@property (retain, nonatomic) UIView *activitySlotView;
@property (retain, nonatomic) UIView *titleSlotView;
@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) UIStackView *imageStackView;
@property (retain, nonatomic) _UIActivityActionCellTitleLabel *subtitleLabelIfLoaded;
@property (retain, nonatomic) _UIActivityActionCellBadgeView *badgeViewIfLoaded;
@property (retain, nonatomic) UIImageView *statusImageViewIfLoaded;
@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) _UIHostActivityProxy *activityProxy;
@property (nonatomic) unsigned int imageSlotID;
@property (nonatomic) unsigned int titleSlotID;
@property (nonatomic) double platterTextHeight;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *statusImage;
@property (retain, nonatomic) UIColor *statusImageTintColor;
@property (retain, nonatomic) UIColor *contentTintColor;

- (void)setHighlighted:(BOOL)a0;
- (void)_updateImageView;
- (id)subtitleLabel;
- (void)setSelected:(BOOL)a0;
- (void)_updateTitleView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setDisabled:(BOOL)a0;
- (id)badgeView;
- (void)_updateSubtitleLabel;
- (id)statusImageView;
- (void)_updateBadgeWithText:(id)a0 textColor:(id)a1 backgroundColor:(id)a2;
- (void)_updateContentTintColor;
- (void)_updateStatusImageView;
- (void)_updateTitleHeight;
- (void)setBadgeText:(id)a0 textColor:(id)a1 backgroundColor:(id)a2;

@end
