@class UIColor, NSIndexSet, NSString, NSArray, NSMapTable;

@interface SKUIStorePageCollectionViewLayout : UICollectionViewFlowLayout <SKUIStorePageCollectionViewLayout> {
    UIColor *_collectionViewBackgroundColor;
    BOOL _hasValidGradientIndexPaths;
    BOOL _hasValidIndexPathsForPinningItems;
    BOOL _hasValidPinnedBackdropViewStyle;
    BOOL _hasValidPinningLayoutInformation;
    long long _inLayoutAttributesForElementsCount;
    NSMapTable *_indexPathToItemPinningConfiguration;
    NSMapTable *_indexPathToPinningLayoutInformation;
    NSArray *_indexPathsForPinningItems;
    long long _pinnedBackdropViewStyle;
    struct { unsigned char respondsToIndexPathsForPinningItems : 1; unsigned char respondsToPinningContentInsetForItemAtIndexPath : 1; unsigned char respondsToPinningStyleForItemAtIndexPath : 1; unsigned char respondsToPinningGroupForItemAtIndexPath : 1; unsigned char respondsToPinningTransitionStyleForItemAtIndexPath : 1; unsigned char respondsToWillApplyLayoutAttributes : 1; } _collectionViewDelegateFlags;
    NSArray *_updateItems;
}

@property (nonatomic) BOOL allowsPinningTransitions;
@property (nonatomic) double overrideContentWidth;
@property (copy, nonatomic) NSIndexSet *expandChildPageSectionsIndexSet;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (readonly, nonatomic) NSArray *indexPathsForPinningItems;
@property (copy, nonatomic) NSArray *indexPathsForGradientItems;
@property (nonatomic) BOOL rendersWithParallax;
@property (nonatomic) BOOL rendersWithPerspective;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void).cxx_destruct;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (void)_appendAdditionalLayoutAttributesForPinningItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toArray:(id)a1;
- (long long)_pinningTransitionStyleForItemPinningConfiguration:(id)a0 atIndexPath:(id)a1;
- (void)_alginCellsToTop:(id)a0;
- (BOOL)_allowsBackdropDecorationForItemPinningConfiguration:(id)a0 atIndexPath:(id)a1;
- (void)_calculatePinningLayoutInformation;
- (void)_configureCellLayoutAttributes:(id)a0 forItemWithPinningConfiguration:(id)a1 layoutInformation:(id)a2 atIndexPath:(id)a3 allowPinning:(BOOL)a4 returningIsPinning:(out BOOL *)a5;
- (id)_getCollectionViewUpdateItemForItemFromIndex:(long long)a0 initalLayout:(BOOL)a1;
- (id)_indexPathsForBackgroundGradients;
- (id)_indexPathsForPinningItems;
- (void)_invalidatePinningLayoutInformation;
- (id)_itemPinningConfigurationForItemAtIndexPath:(id)a0;
- (id)_itemPinningLayoutInformationForItemAtIndexPath:(id)a0;
- (id)_layoutAttributesForGradientDecorationViewAtIndexPath:(id)a0 currentAttributes:(id)a1;
- (id)_layoutAttributesForPinnedBackdropDecorationViewAtIndexPath:(id)a0 pinningConfiguration:(id)a1 layoutInformation:(id)a2;
- (long long)_pinnedBackdropViewStyle;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_pinningContentInsetForItemPinningConfiguration:(id)a0 atIndexPath:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pinningFrameForStartingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 itemPinningConfiguration:(id)a1 atIndexPath:(id)a2;
- (long long)_pinningGroupForItemPinningConfiguration:(id)a0 atIndexPath:(id)a1;
- (long long)_pinningStyleForItemPinningConfiguration:(id)a0 atIndexPath:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_targetFrameForStartingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 itemPinningConfiguration:(id)a1 layoutInformation:(id)a2 atIndexPath:(id)a3 returningIsPinning:(out BOOL *)a4;
- (void)_updateItemsLayoutForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForUnpinnedItemAtIndexPath:(id)a0;
- (id)pinnedLayoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
