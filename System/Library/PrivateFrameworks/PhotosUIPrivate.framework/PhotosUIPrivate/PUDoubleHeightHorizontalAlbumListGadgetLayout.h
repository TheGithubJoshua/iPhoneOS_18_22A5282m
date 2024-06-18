@class NSMutableDictionary;

@interface PUDoubleHeightHorizontalAlbumListGadgetLayout : PUHorizontalAlbumListGadgetLayout

@property (readonly, nonatomic) NSMutableDictionary *layoutAttributesByIndexPath;

- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (BOOL)prefersPagingEnabled;
- (id)initWithHorizontalLayoutDelegate:(id)a0 showsHorizontalScrollIndicator:(BOOL)a1;
- (void).cxx_destruct;
- (void)_adjustLayoutAttributes:(id)a0;
- (void)invalidateLayout;

@end
