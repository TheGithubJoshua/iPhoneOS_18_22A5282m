@class NSString, _UIDataSourceSnapshotter, _UICollectionViewLayoutInteractionStateModule, _UICollectionCompositionalLayoutSolver, NSCollectionLayoutSection, _UICollectionCompositionalLayoutSolverResolveResult, _UIUpdateVisibleCellsContext, _UICollectionCompositionalLayoutSolverUpdate, UICollectionViewCompositionalLayoutConfiguration;

@interface UICollectionViewCompositionalLayout : UICollectionViewLayout <_UICollectionViewLayoutInteractionStateModuleHost> {
    UICollectionViewCompositionalLayoutConfiguration *_configuration;
    _UICollectionViewLayoutInteractionStateModule *_interactionStateModule;
}

@property (retain, nonatomic) NSCollectionLayoutSection *layoutSectionTemplate;
@property (copy, nonatomic) id /* block */ layoutSectionProvider;
@property (retain, nonatomic) _UICollectionCompositionalLayoutSolver *solver;
@property (nonatomic) BOOL deferringInitialSolveUntilPrepare;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } memoizedDynamicAnimatorWorldAdjustingInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } memoizedPreviousLayoutMargins;
@property (nonatomic) struct CGSize { double width; double height; } memoizedPreviousSolvedViewBoundsSize;
@property (retain, nonatomic) _UIDataSourceSnapshotter *dataSourceSnapshotter;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (nonatomic) BOOL shouldAdjustContentInsetModeForCollectionViewNeverMode;
@property (nonatomic) unsigned long long edgesForSafeAreaPropagation;
@property (nonatomic) BOOL isInUpdateVisibleCellsPass;
@property (nonatomic) BOOL deferredLastInvalidationNextInvalidationRequiresFullResolve;
@property (retain, nonatomic) _UIUpdateVisibleCellsContext *updateVisibleCellsContext;
@property (retain, nonatomic) _UICollectionCompositionalLayoutSolverUpdate *currentUpdate;
@property (retain, nonatomic) _UICollectionCompositionalLayoutSolverResolveResult *currentResolveResult;
@property (nonatomic) BOOL layoutRTL;
@property (nonatomic) BOOL roundsToScreenScale;
@property (copy, nonatomic) id /* block */ dynamicsConfigurationHandler;
@property (copy, nonatomic) UICollectionViewCompositionalLayoutConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)layoutWithListConfiguration:(id)a0;

- (id)_marginsChangeResolve;
- (BOOL)_allowsItemInteractionsToBegin;
- (void)_prepareForCollectionViewUpdates:(id)a0 withDataSourceTranslator:(id)a1;
- (void)_prepareForTransitionToLayout:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_orthogonalScrollingContentInsetsForSection:(long long)a0;
- (BOOL)_shouldInvalidateLayoutForOldInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 newInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)boundarySupplementaryItems;
- (void)_handlePreferredSizingDataInvalidation:(id)a0;
- (BOOL)_wantsAnimationsForOffscreenAuxillaries;
- (void)_traitCollectionDidChangeFromPreviousCollection:(id)a0 newTraitCollection:(id)a1;
- (void)_willBeginSwiping;
- (double)_orthogonalScrollingSectionCornerRadius:(long long)a0;
- (void)prepareLayout;
- (struct CGPoint { double x0; double x1; })_orthogonalScrollingTargetContentOffsetForOffset:(struct CGPoint { double x0; double x1; })a0 section:(long long)a1 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_transformSupplementaryLayoutAttributes:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBeEdited;
- (void)_scrollViewLayoutAdjustmentsChanged;
- (void)_updateCollectionViewBackgroundColor;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)a0;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_orthogonalScrollingLayoutRectForSection:(long long)a0;
- (id)initWithSection:(id)a0 configuration:(id)a1;
- (id)_invokeVisibleItemsInvalidationHandlerIfNeededForVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_interactionStateModule:(id)a0 spacingAfterLayoutSection:(long long)a1;
- (id)_preferredAttributesResolveWithInvalidatedPreferredAttributes:(id)a0 layoutOffset:(struct CGPoint { double x0; double x1; })a1 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_cellBackgroundOrBottomSeparatorChangedAtIndexPath:(id)a0 separatorOnly:(BOOL)a1;
- (BOOL)_disallowsFadeCellsForBoundsChange;
- (id)_endInteractiveReorderingResolveWithContext:(id)a0;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)a0;
- (id)initWithSection:(id)a0 sectionProvider:(id /* block */)a1 configuration:(id)a2;
- (void)_didPerformUpdateVisibleCellsPassWithLayoutOffset:(struct CGPoint { double x0; double x1; })a0 logInvalidationReason:(BOOL)a1;
- (void)_transformDecorationLayoutAttributes:(id)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (BOOL)_allowsPanningAcrossConstrainedAxisToBeginMultiSelectInteractionInSection:(long long)a0;
- (id)initWithSectionProvider:(id /* block */)a0;
- (void)_handleSwipeActionsInvalidationWithContext:(id)a0;
- (BOOL)_overridesSafeAreaPropagationToDescendants;
- (id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_viewBoundsPermitsLayout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldAdjustTargetContentOffsetToValidateContentExtents;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)a0 withTargetPosition:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
- (id)_orthogonalScrollingSections;
- (void)setBoundarySupplementaryItems:(id)a0;
- (id)_updateResolve;
- (struct CGPoint { double x0; double x1; })_offsetForOrthogonalScrollingSection:(long long)a0;
- (void)_didEndSwiping;
- (void)_postProcessPreferredAttributes:(id)a0 forView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)_boundsSizeChangedFromLastSolvedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_wantsBandSelectionVisualsInSection:(long long)a0;
- (void)_createSwipeActionsModuleIfNeeded;
- (long long)scrollDirection;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_propertyAnimatorForCollectionViewUpdates:(id)a0 withCustomAnimator:(id)a1;
- (void)_setOffset:(struct CGPoint { double x0; double x1; })a0 forOrthogonalScrollingSection:(long long)a1;
- (id)_updatePinnedSectionSupplementaryItemsForCurrentVisibleBounds;
- (id)initWithLayoutSection:(id)a0 scrollDirection:(long long)a1;
- (id)_contentInsetsEnvironmentFromCollectionViewForInsetsReference:(long long)a0;
- (BOOL)_orthogonalScrollingUsesTargetContentOffsetForSection:(long long)a0;
- (double)_orthogonalScrollingPagingDimensionForSection:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentFrameForSection:(long long)a0;
- (id)initWithSectionProvider:(id /* block */)a0 configuration:(id)a1;
- (BOOL)_orthogonalScrollingElementShouldAppearAboveForAttributes:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_supplementaryViewInsetsForScrollingToItemAtIndexPath:(id)a0;
- (struct CGPoint { double x0; double x1; })_targetPositionForInteractiveMovementOfItemAtIndexPath:(id)a0 withProposedTargetPosition:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)a0 withOriginalAttributes:(id)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsetsForSection:(long long)a0;
- (BOOL)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(id)a0 elementKind:(id)a1;
- (BOOL)_estimatesSizes;
- (BOOL)_estimatesSupplementaryItems;
- (id)_containerFromCollectionViewWithCollectionViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_wantsUntrackedAnimationCleanupForAuxillaryItems;
- (id)_invalidationContextForUpdatedLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_willPerformUpdateVisibleCellsPass;
- (unsigned long long)_orthogonalScrollingAxis;
- (double)_orthogonalScrollingInterPageDimensionForSection:(long long)a0;
- (BOOL)_orthogonalScrollingElementShouldAppearBelowForAttributes:(id)a0;
- (id)_sectionsDescription;
- (id)_interactionStateModule:(id)a0 layoutSectionForIndex:(long long)a1;
- (BOOL)_shouldInvalidateLayoutForUpdatedLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 fromOldMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)_sectionContainerDescriptorForSectionIndex:(long long)a0;
- (id)initWithSection:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutFrameForSection:(long long)a0;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)a0;
- (BOOL)_shouldInvalidateLayoutForUpdatedSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 fromOldInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)_customContainerSectionIndexes;
- (unsigned long long)_layoutAxis;
- (BOOL)_supportsPrefetchingWithEstimatedSizes;
- (id)_layoutSectionForSectionIndex:(unsigned long long)a0;
- (double)_alignedContentMarginGivenMargin:(double)a0;
- (BOOL)_orthogonalScrollingShouldCenterCustomPagingSizeForSection:(long long)a0;
- (id)_trailingSwipeActionsConfigurationForIndexPath:(id)a0;
- (BOOL)_wantsUpdateVisibleCellsPassNotifications;
- (BOOL)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(id)a0 elementKind:(id)a1;
- (void)_setCollectionView:(id)a0;
- (long long)_anchorForAuxiliaryElementOfKind:(id)a0;
- (id)_scrollViewAdjustmentsChangeResolve;
- (BOOL)_adjustCollectionViewContentInsetBehaviorForLayoutAxisIfNeeded:(unsigned long long)a0 container:(id)a1;
- (void)_prepareForPreferredAttributesQueryForView:(id)a0 withLayoutAttributes:(id)a1;
- (void)_fullResolve;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)a0;
- (BOOL)_hasOrthogonalScrollingSections;
- (struct CGVector { double x0; double x1; })_scrollingUnitVectorForOrthogonalScrollingSection:(long long)a0;
- (id)_boundsChangeResolve;
- (BOOL)_orthogonalScrollingSectionShouldClipContentToBounds:(long long)a0;
- (void)_solveForPinnedSupplementaryItemsIfNeededWithContext:(id)a0;
- (void)_finalizeCollectionViewUpdates;
- (BOOL)_supportsSwipeActionsForIndexPath:(id)a0;
- (id)_leadingSwipeActionsConfigurationForIndexPath:(id)a0;
- (void)_computeAndUpdateAdjustedContentFrame;
- (id)initWithLayoutSection:(id)a0;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)a0 atIndexPath:(id)a1;
- (void)_transformCellLayoutAttributes:(id)a0;
- (BOOL)_preparedForBoundsChanges;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_orthogonalScrollingDecelerationRateForSection:(long long)a0;
- (id)invalidationContextForPreferredLayoutAttributes:(id)a0 withOriginalAttributes:(id)a1;
- (id)_dataSourceSnapshotter;
- (unsigned long long)_edgesForSafeAreaPropagationToDescendants;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)_containerFromCollectionView;
- (void)_updateStyleForSwipeActionsConfiguration:(id)a0 indexPath:(id)a1;
- (BOOL)_invokeVisibleBoundsUpdateForDynamicAnimatorForNewVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 preparingLayout:(BOOL)a1;
- (BOOL)_shouldAddElementToSectionContainer:(id)a0;
- (BOOL)_shouldConfigureForPagingForOrthogonalScrollingSection:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_orthogonalScrollingContentRectForSection:(long long)a0;
- (id)_layoutAttributesForIndelibleElements;
- (BOOL)_wantsCustomSectionContainers;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)setEditing:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEditing;

@end