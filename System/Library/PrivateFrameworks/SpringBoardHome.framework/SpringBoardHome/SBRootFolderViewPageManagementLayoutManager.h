@class NSURL, UIImageView, SBTitledHomeScreenButton, SBIconDragManager, NSMapTable, UITapGestureRecognizer, UIViewController, UIScrollView, NSString, SBRootFolder, SBHIconModel, SBHFocusMode, SBRootFolderView, SBIconListView;
@protocol UIViewImplicitlyAnimating, SBDockOffscreenFractionModifying, BSInvalidatable;

@interface SBRootFolderViewPageManagementLayoutManager : NSObject <SBFolderObserver, SBIconViewProviding, SBIconViewDelegate, SBIconViewActionDelegate, SBIconListViewDragDelegate, SBHPageManagementCellViewControllerDelegate, SBIconListViewDominoPivotAnimatorDelegate, SBIconDragManagerDelegate, SBIconListModelObserver, UIScrollViewDelegate, SBRootFolderViewLayoutManager> {
    NSMapTable *_iconViewControllersByIcon;
    NSMapTable *_iconViewControllersByListModel;
    NSMapTable *_pageIconsByListModel;
    NSMapTable *_initialScalingAttributesByIconView;
    SBIconDragManager *_iconDragManager;
}

@property (retain, nonatomic) UIImageView *focusModeSymbolView;
@property (retain, nonatomic) SBTitledHomeScreenButton *focusModeOptionsButton;
@property (retain, nonatomic) SBIconListView *rootListView;
@property (retain, nonatomic) SBRootFolder *pageManagementRootFolder;
@property (retain, nonatomic) UIScrollView *pageManagementScrollView;
@property (nonatomic) unsigned long long transitionCount;
@property (nonatomic) unsigned long long activeTransitionCount;
@property (retain, nonatomic) id<UIViewImplicitlyAnimating> latestActiveTransitionAnimator;
@property (nonatomic) long long layoutAction;
@property (nonatomic) long long layoutConfiguration;
@property (retain, nonatomic) UITapGestureRecognizer *backgroundTapGestureRecognizer;
@property (retain, nonatomic) id<SBDockOffscreenFractionModifying> dockOffscreenAssertion;
@property (retain, nonatomic) id<BSInvalidatable> scrollAccessoryBorrowedAssertion;
@property (retain, nonatomic) id<BSInvalidatable> pageDotsVisibilityAssertion;
@property (readonly, nonatomic) SBIconDragManager *iconDragManager;
@property (nonatomic) BOOL allowsPageHiding;
@property (weak, nonatomic) UIViewController *alertPresentationViewController;
@property (nonatomic) BOOL allowsEditing;
@property (retain, nonatomic) SBHFocusMode *activeFocusMode;
@property (copy, nonatomic) NSURL *completionURL;
@property (readonly, nonatomic) BOOL isTrackingActiveOrDroppingIconDrags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SBHIconModel *iconModel;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic, getter=isScrolling) BOOL scrolling;
@property (nonatomic, getter=isTrackingScroll) BOOL trackingScroll;
@property (readonly, nonatomic, getter=isRootFolderContentVisible) BOOL rootFolderContentVisible;
@property (readonly, nonatomic, getter=isIconContentPossiblyVisibleOverApplication) BOOL iconContentPossiblyVisibleOverApplication;
@property (nonatomic, getter=isOverlayTodayViewVisible) BOOL overlayTodayViewVisible;
@property (nonatomic, getter=isMainDisplayLibraryViewVisible) BOOL mainDisplayLibraryViewVisible;
@property (weak, nonatomic) SBRootFolderView *rootFolderView;
@property (retain, nonatomic) id userInfo;

- (void)iconView:(id)a0 willAnimateDragLiftWithAnimator:(id)a1 session:(id)a2;
- (BOOL)iconListView:(id)a0 shouldAllowSpringLoadedInteractionForIconDropSession:(id)a1 onIconView:(id)a2;
- (void)iconListView:(id)a0 iconDropSessionDidEnter:(id)a1;
- (id)init;
- (void)iconList:(id)a0 didMoveIcon:(id)a1;
- (void)iconListView:(id)a0 performIconDrop:(id)a1;
- (void)iconList:(id)a0 didRemoveIcon:(id)a1;
- (BOOL)iconListView:(id)a0 canHandleIconDropSession:(id)a1;
- (BOOL)iconViewCanBecomeFocused:(id)a0;
- (id)iconListView:(id)a0 iconDropSessionDidUpdate:(id)a1;
- (id)iconViewQueryableForIconDragManager:(id)a0;
- (void)iconListView:(id)a0 iconDragItem:(id)a1 willAnimateDropWithAnimator:(id)a2;
- (void)iconListView:(id)a0 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)a1;
- (id)dequeueReusableIconViewOfClass:(Class)a0;
- (void)folder:(id)a0 listHiddenDidChange:(id)a1;
- (void)iconListView:(id)a0 iconDropSession:(id)a1 didPauseAtLocation:(struct CGPoint { double x0; double x1; })a2;
- (void)iconListView:(id)a0 iconDropSessionDidExit:(id)a1;
- (void)iconCloseBoxTapped:(id)a0;
- (BOOL)isIconViewRecycled:(id)a0;
- (void)iconView:(id)a0 dragLiftAnimationDidChangeDirection:(long long)a1;
- (id)rootViewForIconDragManager:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)customImageViewControllerForIconView:(id)a0;
- (void)iconViewWillBeginDrag:(id)a0 session:(id)a1;
- (id)iconView:(id)a0 dragPreviewForItem:(id)a1 session:(id)a2 previewParameters:(id)a3;
- (void)iconView:(id)a0 item:(id)a1 willAnimateDragCancelWithAnimator:(id)a2;
- (BOOL)iconView:(id)a0 canAddDragItemsToSession:(id)a1;
- (id)iconListView:(id)a0 previewForDroppingIconDragItem:(id)a1 proposedPreview:(id)a2;
- (void).cxx_destruct;
- (long long)closeBoxTypeForIconView:(id)a0;
- (void)recycleIconView:(id)a0;
- (void)iconListView:(id)a0 willUseIconView:(id)a1 forDroppingIconDragItem:(id)a2;
- (BOOL)iconShouldAllowCloseBoxTap:(id)a0;
- (id)iconListView:(id)a0 iconViewForDroppingIconDragItem:(id)a1 proposedIconView:(id)a2;
- (void)iconView:(id)a0 didEndDragSession:(id)a1 withOperation:(unsigned long long)a2;
- (id)rootFolderForIconDragManager:(id)a0;
- (BOOL)iconViewCanBeginDrags:(id)a0;
- (id)iconListViewForIndexPath:(id)a0;
- (id)iconListView:(id)a0 customSpringAnimationBehaviorForDroppingItem:(id)a1;
- (void)configureIconView:(id)a0 forIcon:(id)a1;
- (id)iconDragManager:(id)a0 dragPreviewForIconView:(id)a1;
- (BOOL)_allowsCloseBoxForIconView:(id)a0;
- (BOOL)_canRasterizeIconView:(id)a0;
- (void)_removePageIcon:(id)a0;
- (void)_updateCloseBoxVisibilityWithAnimation:(long long)a0;
- (void)backgroundTapped:(id)a0;
- (id)backgroundViewForSnapshotForPageManagementCellViewController:(id)a0;
- (void)cleanUpViewsInFolderView:(id)a0;
- (void)dominoPivotAnimator:(id)a0 didLayOutIconView:(id)a1;
- (id)dragItemsForIconView:(id)a0;
- (void)focusModeOptionsButtonTapped:(id)a0;
- (unsigned long long)folderListIndexToAnimateOutForList:(id)a0 inFolder:(id)a1 avoidingList:(id)a2;
- (BOOL)iconDragManager:(id)a0 doesIconViewRepresentRealIconPosition:(id)a1;
- (void)layoutFooterViewsInFolderView:(id)a0;
- (void)layoutHeaderViewsInFolderView:(id)a0;
- (void)layoutScrollViewAndRootListViewInFolderView:(id)a0;
- (void)makeMaterialViewsVisible;
- (void)makeRootListViewInFolderView:(id)a0 animated:(BOOL)a1;
- (id)newCellBackgroundMaterialViewInFolderView:(id)a0 initialWeighting:(double)a1;
- (BOOL)pageContainsBookmarkIcons:(id)a0;
- (BOOL)pageManagementCellViewControllerCanReceiveTap:(id)a0;
- (void)pageManagementCellViewControllerDidReceiveTap:(id)a0;
- (BOOL)pageManagementCellViewControllerShouldSuppressHighlight:(id)a0;
- (void)presentPageDeleteConfirmationAlertForIconView:(id)a0 completion:(id /* block */)a1;
- (void)presentSecondPageDeleteConfirmationAlertBookmarksFoundForIconView:(id)a0 completion:(id /* block */)a1;
- (void)rasterizeIconViewsForImprovedLegibilityInScaledDownListViews;
- (void)transitionToActive:(BOOL)a0 inFolderView:(id)a1 usingAnimator:(id)a2;
- (void)turnOffIconViewRazterizationForNormalSizeListViews;

@end