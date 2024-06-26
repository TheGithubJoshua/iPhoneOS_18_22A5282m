@class UIImage, UIButton;

@interface VKSelectableBarButtonContainerView : UIView

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) double padding;
@property (nonatomic) double compactPadding;
@property (nonatomic) double cornerRadiusRatio;
@property (nonatomic) BOOL selected;
@property (nonatomic) double width;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })_buttonSize;
- (void)layoutSubviews;
- (void)updateForMiniBarState:(BOOL)a0;

@end
