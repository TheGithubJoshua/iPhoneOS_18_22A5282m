@class UIImageView, UILabel, NSLayoutConstraint, UIButton;

@interface CKAppContainerTitleView : _UINavigationBarTitleView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) NSLayoutConstraint *iconWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *iconHeightConstraint;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIButton *closeButton;

- (void)setup;
- (id)init;
- (void).cxx_destruct;
- (void)setIconImage:(id)a0;

@end
