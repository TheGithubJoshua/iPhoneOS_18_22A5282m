@interface UICollectionViewAccessibility : __UICollectionViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (long long)accessibilityContainerType;
- (void)reloadData;
- (id)accessibilityLabel;
- (id)preferredFocusedView;
- (BOOL)canBecomeFocused;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleBounds;
- (void)reloadSections:(id)a0;
- (void)deleteSections:(id)a0;
- (void)insertSections:(id)a0;
- (id)_dequeueReusableViewOfKind:(id)a0 withIdentifier:(id)a1 forIndexPath:(id)a2 viewCategory:(unsigned long long)a3;
- (id)_fulfillPromisedFocusRegionForCell:(id)a0;
- (void)_moveItemAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (BOOL)_reuseCell:(id)a0 notifyDidEndDisplaying:(BOOL)a1;
- (void)_reuseSupplementaryView:(id)a0;
- (BOOL)_shouldSelectionFollowFocusForIndexPath:(id)a0 initiatedBySelection:(BOOL)a1;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)accessibilityElementCount;
- (BOOL)beginInteractiveMovementForItemAtIndexPath:(id)a0;
- (void)cancelInteractiveMovement;
- (void)deleteItemsAtIndexPaths:(id)a0;
- (void)endInteractiveMovement;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void)insertItemsAtIndexPaths:(id)a0;
- (void)moveSection:(long long)a0 toSection:(long long)a1;
- (void)reloadItemsAtIndexPaths:(id)a0;
- (id)_accessibilityRoleDescription;
- (id)_accessibilitySupplementaryHeaderViews;
- (unsigned long long)_accessibilityAutomationType;
- (id)_accessibilitySupplementaryFooterViews;
- (id)accessibilityElementForRow:(unsigned long long)a0 andColumn:(unsigned long long)a1;
- (BOOL)_accessibilityDescendantElementAtIndexPathIsValid:(id)a0;
- (BOOL)_accessibilityDrawsFocusRingWhenChildrenFocused;
- (id)_accessibilityGroupIdentifier;
- (BOOL)_accessibilityHasOrderedChildren;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityIncludeRoleInGroupNavigationOnly;
- (id)_accessibilityIndexPathToOtherCollectionViewItems;
- (BOOL)_accessibilityKeyCommandsShouldOverrideKeyCommands;
- (BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
- (id)_accessibilityOpaqueHeaderElementInDirection:(long long)a0 childElement:(id)a1;
- (id)_accessibilityReusableViewForOpaqueElement:(id)a0;
- (id)_accessibilityScannerGroupElements;
- (unsigned long long)_accessibilityScanningBehaviorTraits;
- (id)_accessibilitySelectedChildren;
- (BOOL)_accessibilityShouldAvoidScrollingCollectionViewCells;
- (BOOL)_accessibilityShouldIncludeArrowKeyCommandsForDirectionalFocusMovement;
- (id)_accessibilitySortedElementsWithin;
- (id)_accessibilitySortedElementsWithinWithOptions:(id)a0;
- (BOOL)_accessibilitySpeakThisShouldOnlyIncludeVisibleElements;
- (id)_accessibilitySupplementaryHeaderViewAtIndexPath:(id)a0;
- (id)_accessibilitySupplementaryViewSectionHeaderIdentifiers;
- (id)_accessibilityUserTestingVisibleCells;
- (unsigned long long)accessibilitySemanticGroupChildrentCount;
- (BOOL)isAccessibilityOpaqueElementProvider;
- (BOOL)accessibilityCollectionViewBehavesLikeUIViewAccessibility;
- (id)_accessibilityIndexPathOfDirectSubviewForDescendantElement:(id)a0 withElementKind:(id *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityBoundsOfCellsToLoad;
- (void)_accessibilityCollectionViewUpdateVisibleCells;
- (id)_accessibilityCollectionViewSupplementaryViews;
- (void)_accessibilityEnsureViewsAroundAreLoaded;
- (id)_accessibilityFuzzyHitTest:(struct CGPoint { double x0; double x1; } *)a0 withEvent:(id)a1;
- (id)_accessibilityLayoutAttributesForSupplementaryHeaderViewAtIndexPath:(id)a0;
- (id)_accessibilityOtherCollectionViewItems;
- (BOOL)_accessibilityShouldUseCollectionViewCellAccessibilityElements;
- (id)_axFirstLastOpaqueHeaderElementFromSection:(long long)a0 options:(id)a1 direction:(long long)a2;
- (id)_axFirstLastOpaqueHeaderElementInDirection:(long long)a0 options:(id)a1;
- (id)_axOffScreenOpaqueHeaderElementInDirection:(long long)a0 options:(id)a1 childElement:(id)a2;
- (id)_axOpaqueHeaderElementInDirection:(long long)a0 withinElements:(id)a1 startIndex:(unsigned long long)a2;
- (id)accessibilityCellForRowAtIndexPath:(id)a0;
- (id)accessibilityCollectionCellElementForIndexPath:(id)a0;
- (id /* block */)accessibilityComparatorForSorting;
- (id)accessibilityCreatePrepareCellForIndexPath:(id)a0;
- (BOOL)accessibilityShouldSpeakItemReorderEvents;
- (id)axData;
- (void)setAccessibilityComparatorForSorting:(id /* block */)a0;
- (void)setAccessibilityShouldBypassCollectionViewAccessibility:(BOOL)a0;
- (void)setAccessibilityShouldSpeakItemReorderEvents:(BOOL)a0;

@end
