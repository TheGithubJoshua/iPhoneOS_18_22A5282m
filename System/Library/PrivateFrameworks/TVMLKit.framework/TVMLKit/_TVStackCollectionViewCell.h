@class UIViewController, UIView;

@interface _TVStackCollectionViewCell : UICollectionViewCell {
    UIView *_cellContentView;
    long long _pressesEventDepth;
    UIView *_stowedContentView;
}

@property (weak, nonatomic) UIViewController *viewController;

- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (void)prepareForReuse;
- (id)preferredFocusEnvironments;
- (void)layoutSubviews;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)_pressesDidEnd;

@end
