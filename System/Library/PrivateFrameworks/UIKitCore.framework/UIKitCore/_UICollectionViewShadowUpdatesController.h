@class NSString, _UIDataSourceUpdateMap, UICollectionView, _UIDataSourceSnapshotter, NSMutableArray, NSPointerArray;

@interface _UICollectionViewShadowUpdatesController : NSObject <UICollectionViewDragDestination_Internal>

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) _UIDataSourceSnapshotter *initialSnapshot;
@property (retain, nonatomic) _UIDataSourceUpdateMap *updateMap;
@property (retain, nonatomic) NSMutableArray *_shadowUpdates;
@property (retain, nonatomic) NSPointerArray *rebaseObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 contextMenuConfigurationForItemsAtIndexPaths:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)collectionView:(id)a0 contextMenuConfiguration:(id)a1 highlightPreviewForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)_updateCellIfNeeded:(id)a0 atIndexPath:(id)a1;
- (void)collectionView:(id)a0 tableLayout:(id)a1 commitEditingStyle:(long long)a2 forRowAtIndexPath:(id)a3;
- (id)_rebasedShadowUpdatesForUpdate:(id)a0 initialSnapshot:(id)a1 shadowUpdates:(id)a2;
- (BOOL)collectionView:(id)a0 dragSessionIsRestrictedToDraggingApplication:(id)a1;
- (void)addRebaseObserver:(id)a0;
- (double)collectionView:(id)a0 heightForHeaderViewInTableLayout:(id)a1;
- (BOOL)_shadowUpdatesAreSimpleInsertWithOptionalMoveSequenceForIndexPath:(id)a0;
- (double)collectionView:(id)a0 tableLayout:(id)a1 estimatedHeightForHeaderInSection:(long long)a2;
- (BOOL)collectionView:(id)a0 shouldUpdateFocusInContext:(id)a1;
- (BOOL)collectionView:(id)a0 canPerformPrimaryActionForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canEditItemAtIndexPath:(id)a1;
- (id)indexTitlesForCollectionView:(id)a0;
- (BOOL)_collectionView:(id)a0 shouldSpringLoadItemAtIndexPath:(id)a1 withContext:(id)a2;
- (id)collectionView:(id)a0 dropPreviewParametersForItemAtIndexPath:(id)a1;
- (id)_supplementaryIndexPathBeforeShadowUpdates:(id)a0;
- (id)collectionView:(id)a0 tableLayout:(id)a1 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)a2;
- (id)_collectionView:(id)a0 targetIndexPathForMoveFromItemAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (void)_pruneAndRebaseShadowUpdatesForShadowInsertWithIdentifier:(id)a0;
- (id)collectionView:(id)a0 transitionLayoutForOldLayout:(id)a1 newLayout:(id)a2;
- (id)collectionView:(id)a0 contextMenuConfiguration:(id)a1 dismissalPreviewForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)_rebasedUpdateMapForUpdate:(id)a0;
- (long long)_collectionView:(id)a0 dataOwnerForDropSession:(id)a1 withDestinationIndexPath:(id)a2;
- (id)indexPathForElementWithModelIdentifier:(id)a0 inView:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (void)rebaseForUpdates:(id)a0 notifyRebaseObservers:(BOOL)a1;
- (id)collectionView:(id)a0 sceneActivationConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)collectionView:(id)a0 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)a1 atCurrentIndexPath:(id)a2 toProposedIndexPath:(id)a3;
- (void)collectionView:(id)a0 dropSessionDidEnter:(id)a1;
- (void)appendShadowUpdate:(id)a0;
- (BOOL)_collectionView:(id)a0 prefersFullSizePreviewsForDragSession:(id)a1;
- (double)collectionView:(id)a0 heightForFooterViewInTableLayout:(id)a1;
- (BOOL)_collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (id)_snapshotForShadowUpdatePreceedingShadowUpdate:(id)a0 shadowUpdates:(id)a1;
- (id)collectionView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)_dci_collectionView:(id)a0 contextMenuConfigurationForSelectedItemsAtIndexPaths:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)_collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (id)_sectionIndexTitlesForCollectionView:(id)a0;
- (void)collectionView:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (BOOL)_shouldPerformTranslationForDelegateBasedFlowLayoutSizing;
- (id)_collectionView:(id)a0 accessoriesForContextMenuWithConfiguration:(id)a1 layoutAnchor:(struct { unsigned long long x0; unsigned long long x1; double x2; double x3; long long x4; })a2;
- (id)_indexPathsBeforeShadowUpdates:(id)a0;
- (void)_collectionView:(id)a0 dropSessionDidExit:(id)a1;
- (void)collectionView:(id)a0 tableLayout:(id)a1 willBeginEditingRowAtIndexPath:(id)a2;
- (id)shadowUpdates;
- (id)_findShadowUpdateForIdentifier:(id)a0 inShadowUpdates:(id)a1;
- (void)_collectionView:(id)a0 dropSessionDidEnter:(id)a1;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)computeRevertShadowUpdates;
- (BOOL)_collectionView:(id)a0 canEditItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 dragSessionAllowsMoveOperation:(id)a1;
- (void)collectionView:(id)a0 dragSessionDidEnd:(id)a1;
- (BOOL)collectionView:(id)a0 tableLayout:(id)a1 shouldIndentWhileEditingRowAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 tableLayout:(id)a1 didEndEditingRowAtIndexPath:(id)a2;
- (struct CGPoint { double x0; double x1; })_collectionView:(id)a0 targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)collectionView:(id)a0 tableLayout:(id)a1 accessoryButtonTappedForRowWithIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 indexPathForIndexTitle:(id)a1 atIndex:(long long)a2;
- (void)collectionView:(id)a0 willDisplayContextMenuWithConfiguration:(id)a1 animator:(id)a2;
- (BOOL)_collectionView:(id)a0 dragSessionSupportsSystemDrag:(id)a1;
- (long long)sectionIndexBeforeShadowUpdates:(long long)a0;
- (long long)collectionView:(id)a0 tableLayout:(id)a1 indentationLevelForRowAtIndexPath:(id)a2;
- (id)_collectionView:(id)a0 layout:(id)a1 sizesForItemsInSection:(long long)a2;
- (id)_coalesceUpdatesIfPossible:(id)a0;
- (id)_dci_collectionView:(id)a0 contextMenuConfiguration:(id)a1 previewForHighlightingItemAtIndexPath:(id)a2;
- (id)_collectionView:(id)a0 itemsForAddingToDragSession:(id)a1 atIndexPath:(id)a2 point:(struct CGPoint { double x0; double x1; })a3;
- (id)_collectionView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)_regenerateUpdateMap;
- (id)_shadowUpdateReuseIdentifierForItemItemAtIndexPath:(id)a0;
- (id)_dci_collectionView:(id)a0 contextMenuConfiguration:(id)a1 previewForDismissingToItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)_collectionView:(id)a0 dataOwnerForDragSession:(id)a1 atIndexPath:(id)a2;
- (id)_collectionView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 itemsForAddingToDragSession:(id)a1 atIndexPath:(id)a2 point:(struct CGPoint { double x0; double x1; })a3;
- (long long)sectionIndexAfterShadowUpdates:(long long)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 tableLayout:(id)a1 estimatedHeightForFooterInSection:(long long)a2;
- (id)_collectionView:(id)a0 layout:(id)a1 flowLayoutRowAlignmentOptionsForSection:(long long)a2;
- (id)modelIdentifierForElementAtIndexPath:(id)a0 inView:(id)a1;
- (double)collectionView:(id)a0 tableLayout:(id)a1 estimatedHeightForRowAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 dragSessionWillBegin:(id)a1;
- (void)collectionView:(id)a0 didUpdateFocusInContext:(id)a1 withAnimationCoordinator:(id)a2;
- (id)collectionView:(id)a0 dragPreviewParametersForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (void)_collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (long long)collectionView:(id)a0 tableLayout:(id)a1 editingStyleForRowAtIndexPath:(id)a2;
- (void)didRebaseWithNewBaseUpdateMap:(id)a0;
- (void)_collectionView:(id)a0 orthogonalScrollViewDidScroll:(id)a1 section:(long long)a2;
- (double)collectionView:(id)a0 tableLayout:(id)a1 heightForFooterInSection:(long long)a2;
- (BOOL)_collectionView:(id)a0 canHandleDropSesson:(id)a1;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldSpringLoadItemAtIndexPath:(id)a1 withContext:(id)a2;
- (struct CGPoint { double x0; double x1; })collectionView:(id)a0 targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (id)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(id)a0;
- (id)_collectionView:(id)a0 dragDestinationTargetIndexPathForProposedIndexPath:(id)a1 currentIndexPath:(id)a2 dropSession:(id)a3;
- (long long)sectionIndexAfterShadowUpdates:(long long)a0 allowingAppendingInserts:(BOOL)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (id)_collectionView:(id)a0 flowLayoutRowAlignmentOptionsForSection:(long long)a1;
- (BOOL)collectionView:(id)a0 canHandleDropSesson:(id)a1;
- (void)_collectionView:(id)a0 dragSessionDidEnd:(id)a1;
- (double)collectionView:(id)a0 tableLayout:(id)a1 heightForHeaderInSection:(long long)a2;
- (id)_dci_collectionView:(id)a0 contextMenuConfigurationForItemsAtIndexPaths:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)collectionView:(id)a0 dropSessionDidEnd:(id)a1;
- (BOOL)collectionView:(id)a0 shouldDeselectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (BOOL)shouldRebaseForUpdates;
- (BOOL)collectionView:(id)a0 shouldShowMenuForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 tableLayout:(id)a1 leadingSwipeActionsForRowAtIndexPath:(id)a2;
- (id)_collectionView:(id)a0 sectionIndexTitlesTrimmedToCount:(unsigned long long)a1;
- (void)_collectionView:(id)a0 dropSessionDidEnd:(id)a1;
- (BOOL)_collectionView:(id)a0 shouldApplyTransitionContentOffset:(struct CGPoint { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (void)collectionView:(id)a0 dropSessionDidExit:(id)a1;
- (void)collectionView:(id)a0 cancelPrefetchingForItemsAtIndexPaths:(id)a1;
- (id)indexPathAfterShadowUpdates:(id)a0 allowingAppendingInserts:(BOOL)a1;
- (BOOL)collectionView:(id)a0 selectionFollowsFocusForItemAtIndexPath:(id)a1;
- (id)_collectionView:(id)a0 liftingPreviewParametersForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (id)_collectionView:(id)a0 styleForContextMenuWithConfiguration:(id)a1;
- (id)collectionView:(id)a0 previewForDismissingContextMenuWithConfiguration:(id)a1;
- (id)collectionView:(id)a0 tableLayout:(id)a1 trailingSwipeActionsForRowAtIndexPath:(id)a2;
- (id)_collectionView:(id)a0 indexPathOfReferenceItemToPreserveContentOffsetWithProposedReference:(id)a1;
- (void)_collectionView:(id)a0 willPerformUpdates:(id)a1;
- (id)indexPathAfterShadowUpdates:(id)a0;
- (void)collectionView:(id)a0 performAction:(SEL)a1 forItemAtIndexPath:(id)a2 withSender:(id)a3;
- (id)collectionView:(id)a0 tableLayout:(id)a1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a2;
- (void)_collectionView:(id)a0 dragSessionWillBegin:(id)a1;
- (id)_findInsertShadowUpdateForFinalIndexPath:(id)a0;
- (void)collectionView:(id)a0 performPrimaryActionForItemAtIndexPath:(id)a1;
- (id)indexPathBeforeShadowUpdates:(id)a0;
- (double)collectionView:(id)a0 tableLayout:(id)a1 heightForRowAtIndexPath:(id)a2;
- (id)_collectionView:(id)a0 sceneActivationConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (BOOL)collectionView:(id)a0 canPerformAction:(SEL)a1 forItemAtIndexPath:(id)a2 withSender:(id)a3;
- (id)collectionView:(id)a0 targetIndexPathForMoveFromItemAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (id)_collectionView:(id)a0 indexPathForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (id)initWithCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void).cxx_destruct;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)a0;
- (BOOL)collectionView:(id)a0 canHandleDropSession:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingSupplementaryView:(id)a1 forElementOfKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willEndContextMenuInteractionWithConfiguration:(id)a1 animator:(id)a2;
- (void)collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (void)reset;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;

@end