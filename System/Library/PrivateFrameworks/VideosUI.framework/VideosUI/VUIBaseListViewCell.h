@class UIColor, UIVisualEffectView, UIView, _UIFloatingContentView;
@protocol VUIBaseListViewCellDelegate;

@interface VUIBaseListViewCell : UICollectionViewCell {
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIVisualEffectView *_backgroundVisualEffectView;
}

@property (nonatomic) BOOL visualEffectViewBackgroundEnabled;
@property (retain, nonatomic) _UIFloatingContentView *floatingView;
@property (weak, nonatomic) id<VUIBaseListViewCellDelegate> delegate;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic) BOOL shouldAppearSelected;
@property (readonly, nonatomic) UIView *vuiContentView;

- (void)setHighlighted:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_preferredConfigurationForFocusAnimation:(long long)a0 inContext:(id)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (BOOL)canBecomeFocused;
- (id)contentView;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)_descendantsShouldHighlight;
- (void)setBackgroundColor:(id)a0 forState:(unsigned long long)a1;
- (unsigned long long)_floatingViewControlState;
- (void)_updateSelectedBackgroundColor;
- (void)updateFloatingViewControlStateForPreviouslyFocusedView:(id)a0;

@end
