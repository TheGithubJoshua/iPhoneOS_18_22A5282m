@class UIView;

@interface SKUISimpleCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *contentChildView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (void)applyLayoutAttributes:(id)a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;

@end
