@class UIView;

@interface PXGadgetUICollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *gadgetContentView;

+ (Class)_contentViewClass;

- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)focusEffect;
- (void)_updateFocusRing;

@end
