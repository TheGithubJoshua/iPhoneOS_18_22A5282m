@class SBHIconDragAutoScrollAssistant, NSString, NSMapTable, NSMutableDictionary, SBIconDraggingEditContext, NSMutableArray;
@protocol SBIconDragManagerDelegate;

@interface SBIconDragManager : NSObject <SBIconListViewDragObserver, SBHIconDragAutoScrollAssistantDelegate> {
    NSMapTable *_iconDrags;
    NSMapTable *_uniqueIdentifiersPerDropSession;
    NSMapTable *_uniqueIdentifiersPerDragSession;
    NSMutableDictionary *_revertingReplacementIndexPaths;
    NSMutableArray *_singleUseDragWindows;
    SBHIconDragAutoScrollAssistant *_autoScrollAssistant;
}

@property (retain, nonatomic) SBIconDraggingEditContext *draggingEditContext;
@property (weak, nonatomic) id<SBIconDragManagerDelegate> delegate;
@property (readonly, nonatomic, getter=isIconDragging) BOOL iconDragging;
@property (readonly, nonatomic, getter=isTrackingMultipleIconDrags) BOOL trackingMultipleIconDrags;
@property (readonly, nonatomic, getter=isTrackingMultipleItemIconDrags) BOOL trackingMultipleItemIconDrags;
@property (readonly, nonatomic, getter=isTrackingUserActiveIconDrags) BOOL trackingUserActiveIconDrags;
@property (readonly, nonatomic, getter=isTrackingDroppingIconDrags) BOOL trackingDroppingIconDrags;
@property (readonly, nonatomic, getter=isTrackingActiveOrDroppingIconDrags) BOOL trackingActiveOrDroppingIconDrags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cancelAllDrags;
+ (void)enumerateMedusaPlatterDragPreviewsInDragItems:(id)a0 usingBlock:(id /* block */)a1;
+ (void)enumerateAppDragContextsInDragItems:(id)a0 usingBlock:(id /* block */)a1;

- (void)iconView:(id)a0 willAnimateDragLiftWithAnimator:(id)a1 session:(id)a2;
- (void)iconView:(id)a0 session:(id)a1 willEndWithOperation:(unsigned long long)a2;
- (id)init;
- (id)firstHiddenIconIdentifierInDrag:(id)a0;
- (void)layoutIconListsWithAnimationType:(long long)a0 forceRelayout:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isTrackingDragOriginatingFromOrDroppingIntoIconView:(id)a0 otherThanDragWithIdentifier:(id)a1;
- (void)iconView:(id)a0 willUsePreviewForCancelling:(id)a1 targetIconView:(id)a2;
- (void)simulateIconDragWithIdentifier:(id)a0 didPauseAtLocation:(struct CGPoint { double x0; double x1; })a1 inIconListView:(id)a2;
- (void)windowSceneDidDisconnect:(id)a0;
- (void)performIconDrop:(id)a0 identifier:(id)a1 draggedIconIdentifiers:(id)a2 inIconListView:(id)a3;
- (void)cancelAllDrags;
- (BOOL)isManagingTemporarilyRemovedIcon:(id)a0;
- (void)iconDropSessionDidEnd:(id)a0;
- (BOOL)shouldBeginEditingWhenAddingDragItems;
- (void)iconListView:(id)a0 iconDragItem:(id)a1 willAnimateDropWithAnimator:(id)a2;
- (void)revertLocationsForUnplacedIconsInDragWithIdentifier:(id)a0;
- (id)rootFolder;
- (void)iconListView:(id)a0 concludeIconDrop:(id)a1;
- (id)_windowForDragPreviewsForPlatterView:(id)a0 forWindowScene:(id)a1;
- (BOOL)revertLocationForIcon:(id)a0 toPath:(id)a1;
- (id)allDragIdentifiers;
- (void)iconView:(id)a0 dragLiftAnimationDidChangeDirection:(long long)a1;
- (void)removeAllGrabbedIconViews;
- (id)_applicationBundleIdentifierForDragItem:(id)a0;
- (BOOL)_isTrackingDragWithIdentifier:(id)a0;
- (id)_iconViewForDragItem:(id)a0 inIconListView:(id)a1;
- (id)_replaceDraggedIconViewWithPlaceholder:(id)a0;
- (unsigned long long)listGridCellInfoOptions;
- (id)succinctDescription;
- (void)autoScrollAssistant:(id)a0 triggeredAutoScrollInDirection:(long long)a1;
- (id)appDragLocalContextForDragItem:(id)a0;
- (id)_iconIdentifierForDragItem:(id)a0;
- (void)_stopTrackingDragIfPossibleWithIdentifier:(id)a0;
- (BOOL)shouldBeginEditingWhenLiftPreviewBegins;
- (BOOL)replaceDragPlaceholderWithReferencedIcons:(id)a0;
- (void)_updateDragPreviewsForEditingState:(BOOL)a0 animated:(BOOL)a1;
- (void)iconViewWillBeginDrag:(id)a0 session:(id)a1;
- (void)addAppLocalContextsFromDragItems:(id)a0 session:(id)a1 toDragWithIdentifier:(id)a2;
- (void)_cleanUpAllDraggingState;
- (BOOL)doesIconViewRepresentRealIconPosition:(id)a0;
- (id)iconView:(id)a0 dragPreviewForItem:(id)a1 session:(id)a2 previewParameters:(id)a3;
- (BOOL)canAcceptDropInSession:(id)a0 inIconListView:(id)a1;
- (BOOL)canHandleIconDropSession:(id)a0 inIconListView:(id)a1;
- (void)changeStateOfDragWithIdentifier:(id)a0 toState:(long long)a1;
- (void)watchdogDragWithIdentifier:(id)a0;
- (id)draggedIconIdentifiersForDragDropSession:(id)a0;
- (BOOL)shouldUseGhostIconForIconView:(id)a0;
- (id)iconDragContextForDragSession:(id)a0;
- (void)createIconsFromDragItemsIfNecessary:(id)a0 withDragIdentifier:(id)a1;
- (double)defaultIconLayoutAnimationDuration;
- (void)captureInitialIconStateToDragContext:(id)a0;
- (id)model;
- (BOOL)doesIconLocationRepresentRealIconPosition:(id)a0;
- (id)draggedIconForIdentifier:(id)a0;
- (void)enumerateIconDragContextsUsingBlock:(id /* block */)a0;
- (id)iconDropSessionDidUpdate:(id)a0 inIconListView:(id)a1;
- (id)_iconForDragItem:(id)a0 inIconListView:(id)a1;
- (void)_invalidateAutoScrollAssistant;
- (void)iconView:(id)a0 item:(id)a1 willAnimateDragCancelWithAnimator:(id)a2;
- (id)iconDragContextForDropSession:(id)a0;
- (BOOL)iconView:(id)a0 canAddDragItemsToSession:(id)a1;
- (id)iconListView:(id)a0 previewForDroppingIconDragItem:(id)a1 proposedPreview:(id)a2;
- (void)iconDropSession:(id)a0 didPauseAtLocation:(struct CGPoint { double x0; double x1; })a1 inIconListView:(id)a2;
- (void).cxx_destruct;
- (void)concludeIconDrop:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)shouldAllowSpringLoadedInteractionForIconDropSession:(id)a0 onIconView:(id)a1;
- (BOOL)isTrackingDragOfIcon:(id)a0;
- (void)iconDropSessionDidEnter:(id)a0 identifier:(id)a1 draggedIconIdentifiers:(id)a2 inIconListView:(id)a3;
- (BOOL)isEditing;
- (id)uniqueIdentifierForIconDragSession:(id)a0;
- (BOOL)isRootFolderContentVisible;
- (BOOL)shouldCancelDragsWhenEditingEnds;
- (BOOL)replaceDragPlaceholdersWithReferencedIconsInDragWithIdentifier:(id)a0;
- (id)iconViewWillCancelDrag:(id)a0;
- (void)_stopTrackingDragWithIdentifier:(id)a0;
- (void)simulateIconDropSessionWithIdentifier:(id)a0 didEnterWithIconIdentifiers:(id)a1 inIconListView:(id)a2;
- (id)iconDragContextForDragDropSession:(id)a0;
- (void)iconDropSessionDidExitWithIdentifier:(id)a0 fromIconListView:(id)a1;
- (unsigned long long)countOfTrackedDragsOriginatingFromOrDroppingIntoIconView:(id)a0;
- (BOOL)isTrackingDragMatchingPredicate:(id /* block */)a0;
- (BOOL)isTrackingDragOriginatingFromIconView:(id)a0;
- (BOOL)isTrackingUserActiveDragOriginatingFromIconView:(id)a0;
- (void)noteFolderControllerWillClose:(id)a0;
- (BOOL)isTrackingWidgetIconDrags;
- (BOOL)isTrackingActiveDragOfIcon:(id)a0;
- (BOOL)isTrackingWidgetStackIconDrags;
- (BOOL)canMakeIconViewRecipient:(id)a0;
- (void)iconListView:(id)a0 willUseIconView:(id)a1 forDroppingIconDragItem:(id)a2;
- (id)uniqueIdentifierForIconDropSession:(id)a0;
- (id)leafIconsInList:(id)a0 matchingApplicationBundleIdentifierOfIcons:(id)a1;
- (id)iconListView:(id)a0 iconViewForDroppingIconDragItem:(id)a1 proposedIconView:(id)a2;
- (void)_handleScaleAdjustmentForDropSession:(id)a0 currentListView:(id)a1;
- (void)replaceAllBouncedIconsInContext:(id)a0;
- (unsigned long long)maximumAllowedIconDroppingAnimationsForListView:(id)a0;
- (void)iconView:(id)a0 didEndDragSession:(id)a1 withOperation:(unsigned long long)a2;
- (void)noteDragItemWasConsumedExternallyForDropSession:(id)a0;
- (id)iconDragContextForDragItem:(id)a0;
- (void)noteFolderBeganScrolling;
- (void)noteIconManagerEditingDidChange;
- (void)noteIconTapped;
- (void)informQuickActionPlatterDidFinishPresentation:(id)a0;
- (void)performIconDrop:(id)a0 inIconListView:(id)a1;
- (void)removeNearestLeafIconsMatchingIcons:(id)a0 inList:(id)a1 dragContext:(id)a2;
- (void)watchdogTimerDidFire:(id)a0;
- (BOOL)isTrackingDropIntoDestinationIconView:(id)a0;
- (void)addPlatterViewToMedusaDragOffscreenWindow:(id)a0 forWindowScene:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (double)delayAfterAfterLiftPreviewToBeginEditing;
- (void)iconDropSessionDidEnter:(id)a0 inIconListView:(id)a1;
- (void)_updateAutoScrollAssistantForDropSession:(id)a0;
- (id)iconDragContextForDragWithIdentifier:(id)a0;
- (void)compactAndLayoutRootIconListsWithDuration:(double)a0;
- (void)performSpringLoadedInteractionForIconDragOnIconView:(id)a0;
- (BOOL)removeAllDragPlaceholdersInFolder:(id)a0 passingTest:(id /* block */)a1;
- (void)revertDragChangesForDragWithIdentifier:(id)a0;
- (void)stopTrackingDragLocationForEditingForDragWithIdentifier:(id)a0;
- (void)cancelEditingAndAllDrags;
- (void)iconView:(id)a0 willAddDragItems:(id)a1 toSession:(id)a2;
- (id)leafIconForIdentifier:(id)a0;
- (BOOL)removeDragPlaceholdersForDragWithIdentifier:(id)a0;
- (BOOL)removeDragPlaceholdersForDragWithIdentifier:(id)a0 placeholderPath:(out id *)a1;
- (void)removeEmptyFolders;
- (void)resetWatchdogTimerForDragWithIdentifier:(id)a0 timeout:(double)a1;
- (void)removeEmptyFoldersInFolder:(id)a0;
- (id)draggedIconsForIdentifiers:(id)a0;
- (BOOL)iconViewCanBeginDrags:(id)a0;
- (BOOL)revertLocationsForIcons:(id)a0 dragIdentifier:(id)a1;
- (void)enumerateIconDragIdentifiersUsingBlock:(id /* block */)a0;
- (void)setIndexPath:(id)a0 whenRevertingIconsWithPathPrefix:(id)a1;
- (BOOL)isTrackingDragInUserActiveLiftPreviewOriginatingFromIconView:(id)a0;
- (void)removePlatterViewFromMedusaDragOffscreenWindow:(id)a0;
- (BOOL)revertLocationForIcon:(id)a0 toGridPath:(id)a1;
- (void)_updateDragPreviewIconViewForDropSession:(id)a0 inIconListView:(id)a1;
- (void)_startTrackingDragWithIdentifier:(id)a0 session:(id)a1;
- (void)revertActiveDragChanges;
- (void)iconDropSessionDidEnd:(id)a0 identifier:(id)a1 draggedIconIdentifiers:(id)a2;
- (void)iconDropSessionDidExit:(id)a0 fromIconListView:(id)a1;
- (void)compactAndLayoutRootIconLists;
- (void)startTrackingDragLocationForEditingFromDropSession:(id)a0 orDragSession:(id)a1;
- (void)revertLocationsForIconsInAllListsForDragWithIdentifier:(id)a0;
- (id)iconListViewForIndexPath:(id)a0;
- (void)updateExistingIconPlaceholderForDragWithIdentifier:(id)a0;
- (void)revertLocationsForIconsInList:(id)a0 dragIdentifier:(id)a1;
- (BOOL)replaceAllDragPlaceholdersWithReferencedIcons;
- (void)iconListView:(id)a0 iconDropSessionDidEnd:(id)a1;
- (BOOL)shouldBeginEditingWhenDragBegins;
- (id)iconListView:(id)a0 customSpringAnimationBehaviorForDroppingItem:(id)a1;
- (id)simulateDragStartedFromIconView:(id)a0;
- (void)simulateIconDraggingEndedWithIdentifier:(id)a0;
- (BOOL)removeAllDragPlaceholders;
- (void)simulatePerformIconDropWithIdentifier:(id)a0 inIconListView:(id)a1;
- (BOOL)_isTrackingDrag:(id)a0;
- (id)fullIndexPathForRevertingIcon:(id)a0 context:(id)a1;
- (void)iconDropSessionWithIdentifier:(id)a0 draggedIconIdentifiers:(id)a1 didPauseAtLocation:(struct CGPoint { double x0; double x1; })a2 inIconListView:(id)a3;
- (BOOL)swapTrackedIconWithIdentifier:(id)a0 withIcon:(id)a1;
- (id)simulateIconDropSessionDidEnterWithIconIdentifiers:(id)a0 inIconListView:(id)a1;
- (BOOL)_shouldPerformRippleAnimationForInsertingDragItem:(id)a0 toIconListView:(id)a1;

@end