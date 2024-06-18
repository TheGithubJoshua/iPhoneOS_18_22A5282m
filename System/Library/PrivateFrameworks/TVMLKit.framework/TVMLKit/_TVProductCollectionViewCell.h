@class UIViewController, UIView;

@interface _TVProductCollectionViewCell : UICollectionViewCell {
    UIView *_titleView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _activeMargins;
    BOOL _marginActive;
}

@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } partialMargins;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margins;

- (id)titleView;
- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (void)prepareForReuse;
- (id)preferredFocusEnvironments;
- (void)layoutSubviews;
- (void)disableMargins;
- (void)enableWithMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)isShowingTitleView;
- (void)setTitleView:(id)a0 margins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 show:(BOOL)a2;
- (void)showTitleView:(BOOL)a0;

@end
