@class UIView, NSString, NSArray, NSAttributedString, UIImage, UIImageView, UILayoutGuide, UILabel;

@interface _SFSettingsAlertButton : _SFSettingsAlertControl <_SFSettingsAlertOptionsGroupItemConfiguration> {
    NSArray *_contentConstraints;
    NSArray *_componentsArrangement;
    UILabel *_detailTextLabel;
    UILayoutGuide *_textGuide;
    UIView *_dotView;
    BOOL _selected;
    NSString *_text;
    NSString *_detailText;
    NSAttributedString *_attributedDetailText;
    UIImage *_image;
}

@property (readonly, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) NSString *textStyle;
@property (readonly, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *accessoryView;
@property (retain, nonatomic) UIImageView *statusImageView;
@property (readonly, nonatomic) UIView *trailingView;
@property (copy, nonatomic) NSArray *componentsArrangement;
@property (nonatomic) BOOL limitToSingleLine;
@property (nonatomic) BOOL showsIndicatorDot;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)isSelected;
- (void)setSelected:(BOOL)a0;
- (id)image;
- (void)updateConstraints;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_updateTintColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDetailText:(id)a0;
- (id)text;
- (void)setImage:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (void)setText:(id)a0;
- (void)layoutSubviews;
- (id)detailText;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)_hover:(id)a0;
- (id)_arrangedSubviews;
- (void)_didChangeContents;
- (void)_updateHasDetailText;
- (id)attributedDetailText;
- (void)setAttributedDetailText:(id)a0;

@end
