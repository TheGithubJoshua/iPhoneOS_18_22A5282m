@interface GameCenterUI.GKMultiplayerViewControllerLayout : UICollectionViewFlowLayout {
    void /* unknown type, empty encoding */ type;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;
@property (nonatomic, readonly) long long cellLayoutMode;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })minimumContentInsetIn:(id)a0;

- (void)prepareLayout;
- (id)initWithCoder:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;

@end
