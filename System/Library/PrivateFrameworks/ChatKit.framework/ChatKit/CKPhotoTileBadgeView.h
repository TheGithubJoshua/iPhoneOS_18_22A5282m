@class UIImageView, UILabel, UIView, UIButton;

@interface CKPhotoTileBadgeView : UIView

@property (readonly, nonatomic) UIView *_backgroundView;
@property (readonly, nonatomic) UIImageView *_badgeImageView;
@property (readonly, nonatomic) UILabel *_textLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isSelected) BOOL selected;

+ (double)horizontalBadgeInset;
+ (double)verticalBadgeInset;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })maximumSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateBadgeImage;
- (void)_updateBadgeText;

@end
