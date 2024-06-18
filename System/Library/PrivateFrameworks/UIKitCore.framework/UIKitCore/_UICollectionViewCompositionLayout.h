@class NSArray, NSMutableDictionary;

@interface _UICollectionViewCompositionLayout : UICollectionViewLayout {
    NSMutableDictionary *_sublayoutsDict;
}

@property (readonly, nonatomic) NSArray *sublayouts;

+ (Class)invalidationContextClass;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)a0 withOriginalAttributes:(id)a1;
- (id)init;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)invalidationContextForPreferredLayoutAttributes:(id)a0 withOriginalAttributes:(id)a1;
- (void)invalidateLayoutWithContext:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void).cxx_destruct;
- (void)_prepareLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForLayout:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1 relativeToEdges:(unsigned long long)a2 fromSiblingLayout:(id)a3;
- (id)_originConvertedSublayoutAttributesForAttributes:(id)a0 inLayout:(id)a1;
- (void)addSublayout:(id)a0 forElementKinds:(id)a1;
- (void)addSublayout:(id)a0 forItems:(id)a1 inSection:(long long)a2 offset:(struct CGPoint { double x0; double x1; })a3 relativeToEdges:(unsigned long long)a4 fromSiblingLayout:(id)a5;
- (void)addSublayout:(id)a0 forRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)addSublayout:(id)a0 forSections:(id)a1 offset:(struct CGPoint { double x0; double x1; })a2 relativeToEdges:(unsigned long long)a3 fromSiblingLayout:(id)a4;
- (void)removeSublayout:(id)a0;

@end