@class NSString, _UICollectionViewListLayoutSectionConfiguration;
@protocol NSCollectionLayoutEnvironment_Private;

@interface _UICollectionViewListLayoutSection : NSCollectionLayoutSection <_UICollectionLayoutSectionCallback> {
    _UICollectionViewListLayoutSectionConfiguration *_configuration;
}

@property (readonly, nonatomic, getter=_layoutEnvironment) id<NSCollectionLayoutEnvironment_Private> layoutEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_willBeginSwiping;
- (double)_effectiveCornerRadius;
- (void)_didEndSwiping;
- (id)_effectiveBackgroundColor;
- (double)_alignedContentMarginGivenMargin:(double)a0;
- (id)_trailingSwipeActionsConfigurationForIndexPath:(id)a0;
- (BOOL)_useRoundedSwipeActions;
- (id)_leadingSwipeActionsConfigurationForIndexPath:(id)a0;
- (long long)_headerFooterPinningBehavior;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_horizontalInsetsForInsetsReference:(long long)a0;
- (id)_callback;
- (id)_separatorConfigurationForItemAtIndexPath:(id)a0 withSelectionGrouping:(unsigned long long)a1 considerNextCellGrouping:(BOOL)a2 interactionState:(id)a3;
- (BOOL)_hasHeaderFooterBelowLastItemInSection:(long long)a0 interactionState:(id)a1;
- (void)_configureLayoutAttributesWithInsetGroupedMasking:(id)a0 stylesFirstItemAsHeader:(BOOL)a1;
- (void)_configureLayoutAttributesForPlainSupplementaryView:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)_configureLayoutAttributes:(id)a0 forSeparatorAtBottom:(BOOL)a1 preferredConfiguration:(id)a2 interactionState:(id)a3;
- (BOOL)_shouldInvalidateForScrollViewLayoutAdjustmentsChange;
- (id)_constants;
- (long long)_separatorInsetBehaviorAtBottom:(BOOL)a0 ofSection:(long long)a1 interactionState:(id)a2;
- (BOOL)_hasHorizontalInsets;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveSectionHorizontalInsets;
- (id)initWithConfiguration:(id)a0 layoutEnvironment:(id)a1;
- (BOOL)__isLastItemInSection:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_defaultLayoutMarginsInsideSection;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_sectionPreferredTopSeparatorInsetsWithBottomInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0 hasCustomInsets:(out BOOL *)a1;
- (void)_configureLayoutAttributesWithDefaultMasking:(id)a0;
- (void)_configureLayoutAttributesForSwipeActionMasking:(id)a0;
- (void)_configureLayoutAttributesForSidebarPlainCell:(id)a0;
- (BOOL)_shouldHideTopSeparatorAtIndexPath:(id)a0 interactionState:(id)a1;
- (BOOL)prefersListSolver;
- (void)_transformPreferredLayoutAttributes:(id)a0 interactionState:(id)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_sectionPreferredBottomSeparatorInsetsForIndexPath:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_defaultSectionContentInsetsForAppearanceStyle:(long long)a0;
- (BOOL)_shouldHideBottomSeparatorAtIndexPath:(id)a0 forGrouping:(unsigned long long)a1 considerNextCellGrouping:(BOOL)a2 interactionState:(id)a3;
- (void).cxx_destruct;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveBoundarySeparatorInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)_generateListSectionDataForLayoutAttributes:(id)a0 interactionState:(id)a1;
- (id)_invalidationContextForCellBackgroundOrBottomSeparatorChangeAtIndexPath:(id)a0 interactionState:(id)a1 separatorOnly:(BOOL)a2;
- (BOOL)_wantsSwipeActions;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_defaultDirectionalLayoutMarginsInsideSection;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_defaultLayoutMarginsForSupplementaryViewWithLayoutAttributes:(id)a0;
- (BOOL)_wantsBandSelectionVisuals;
- (BOOL)_isRTL;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveSectionSupplementaryHorizontalInsets;
- (BOOL)_pinnedSupplementariesShouldOverlap;
- (void)_configureLayoutAttributesForBackgroundDecoration:(id)a0;
- (void)_transformFittingLayoutAttributes:(id)a0 interactionState:(id)a1;
- (void)_updateStyleForSwipeActionsConfiguration:(id)a0;
- (id)_descriptionProperties;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveCollectionViewLayoutMarginsForAppearanceStyle:(long long)a0 forUseAsContentInsets:(BOOL)a1;
- (double)_paddingToBoundarySupplementaries;
- (void)_configureLayoutAttributesForPlainCell:(id)a0;
- (BOOL)_shouldDrawSeparatorAtBottom:(BOOL)a0 ofSection:(long long)a1 interactionState:(id)a2;
- (void)_enrichLayoutAttributes:(id)a0 interactionState:(id)a1;
- (BOOL)__isLastSection:(long long)a0;
- (id)_preferredContainerBackgroundColor;
- (BOOL)shouldRestrictOrthogonalAxisDuringInteractiveMovement;
- (unsigned long long)_maskedCornersForBackgroundOfItemWithSelectionGrouping:(unsigned long long)a0;
- (BOOL)_adjustsLayoutToDrawTopSeparatorInSection:(long long)a0 interactionState:(id)a1;

@end
