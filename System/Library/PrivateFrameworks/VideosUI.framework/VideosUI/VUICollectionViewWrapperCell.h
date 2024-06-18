@class UIView;

@interface VUICollectionViewWrapperCell : UICollectionViewCell

@property (retain, nonatomic) UIView *childView;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end
