@class UnifiedField, NSString, NSArray, SFCapsuleNavigationBar, SFCapsuleCollectionView, UIResponder, TabDocument, TabController, UIContextMenuInteraction;
@protocol CapsuleNavigationBarViewControllerDelegate;

@interface CapsuleNavigationBarViewController : UIViewController <PKScribbleInteractionElementSource, SFCapsuleCollectionViewGestureObserving, TabControllerDocumentObserving, TabDocumentNavigationObserving, UIContextMenuInteractionDelegate, UIDragInteractionDelegate, UIDropInteractionDelegate, _UIScrollViewScrollObserver, SFCapsuleCollectionViewDataSource, SFCapsuleCollectionViewDelegate, TabOverviewPresentationObserving> {
    id /* block */ _nextStateChangeCompletionHandler;
    long long _hideCapsuleCount;
    long long _webViewTapTransitionCount;
    TabDocument *_attachedTab;
    BOOL _unminimizeOnHideKeyboard;
    BOOL _keyboardIsVisible;
    SFCapsuleCollectionView *_capsuleCollectionView;
    BOOL _showingContextMenu;
    UIContextMenuInteraction *_contextMenuInteraction;
    SFCapsuleNavigationBar *_sizingNavigationBar;
    SFCapsuleNavigationBar *_minimizedSizingNavigationBar;
    unsigned long long _lastSwipeAxis;
    double _additionalBottomObscuredInset;
    BOOL _adjustScrollViewContentOffsetForMinimization;
    TabDocument *_interactivelyInsertedTabDocument;
}

@property (readonly, nonatomic) NSArray *tabDocuments;
@property (retain, nonatomic) TabController *tabController;
@property (weak) id<CapsuleNavigationBarViewControllerDelegate> delegate;
@property (weak) UIResponder *customNextResponder;
@property (readonly, nonatomic) SFCapsuleCollectionView *capsuleCollectionView;
@property (readonly, nonatomic) UnifiedField *unifiedField;
@property (readonly, nonatomic) BOOL capsuleIsFocused;
@property (readonly, nonatomic) BOOL capsuleIsMinimized;
@property (readonly, nonatomic) BOOL focusingForScribble;
@property (readonly, nonatomic) BOOL performingWebViewTapTransition;
@property (readonly, nonatomic) SFCapsuleNavigationBar *selectedItemNavigationBar;
@property (readonly, nonatomic) BOOL transitioningToNormalStateForKeyboardDismissal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tabControllerDocumentCountDidChange:(id)a0;
- (void)tabCollectionViewDidDismiss:(id)a0;
- (void)tabCollectionViewWillPresent:(id)a0;
- (void)tabCollectionViewDidPresent:(id)a0;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void)tabController:(id)a0 didCloseTabDocuments:(id)a1 atIndexes:(id)a2 info:(unsigned long long)a3;
- (void)tabOverviewWillBeginInteractivePresentation:(id)a0;
- (void)tabOverviewWillEndInteractivePresentation:(id)a0;
- (id)_tabDocumentAtCollectionViewIndex:(long long)a0;
- (id)capsuleCollectionView:(id)a0 contentViewForItemAtIndex:(long long)a1;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 dismissalPreviewForItemWithIdentifier:(id)a2;
- (void)loadView;
- (double)capsuleCollectionViewMinimizedContentScale:(id)a0;
- (id)nextResponder;
- (void)tabOverviewDidUpdateInteractivePresentation:(id)a0;
- (long long)_dropInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (void)_updateSelectedItemAccessoryViews;
- (void)beginHidingCapsuleAnimated:(BOOL)a0;
- (void)_scribbleInteraction:(id)a0 focusElement:(id)a1 initialFocusSelectionReferencePoint:(struct CGPoint { double x0; double x1; })a2 completion:(id /* block */)a3;
- (long long)_dragInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (id)createToolbarForCapsuleCollectionView:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tabCollectionViewWillDismiss:(id)a0;
- (void)_attachSelectedCapsuleToTabOverview;
- (void)capsuleCollectionViewDidEndSelectionGesture:(id)a0;
- (void)capsuleCollectionView:(id)a0 willChangeToLayoutStyle:(long long)a1;
- (BOOL)_shouldAttachCapsuleForTabViewTransition;
- (void)tabDocumentDidCommitNavigation:(id)a0;
- (void)capsuleCollectionViewWillReloadData:(id)a0;
- (void)willTransitionFromTabView:(id)a0 toTabView:(id)a1;
- (void)_installDetachedCapsuleInCollectionView;
- (void)_keyboardWillShow:(id)a0;
- (void)updateVisibleContextMenu;
- (void)tabController:(id)a0 didReplaceTabDocument:(id)a1 withTabDocument:(id)a2;
- (BOOL)transitionToState:(long long)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)dragInteraction:(id)a0 sessionWillBegin:(id)a1;
- (void)capsuleCollectionView:(id)a0 willEndSelectionGestureWithCoordinator:(id)a1;
- (long long)_collectionViewIndexOfTabDocument:(id)a0;
- (void)viewDidLoad;
- (void)endHidingCapsuleAnimated:(BOOL)a0;
- (BOOL)_showsOnlyActiveTab;
- (void)viewDidAppear:(BOOL)a0;
- (void)tabCollectionViewDidCancelDismissal:(id)a0;
- (void)_updateHidingCapsuleAnimated:(BOOL)a0;
- (void)_updateTabDocumentsWithoutUpdatingCollectionView;
- (void)_reattachCapsuleToCollectionView;
- (id /* block */)_contextMenuActionProvider;
- (void)capsuleCollectionView:(id)a0 didBeginSelectionGestureOnAxis:(unsigned long long)a1;
- (void)tabController:(id)a0 didMoveTabDocument:(id)a1 overTabDocument:(id)a2;
- (void).cxx_destruct;
- (void)capsuleCollectionViewLayoutStyleDidChange:(id)a0;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (double)capsuleCollectionView:(id)a0 heightForItemAtIndex:(long long)a1 width:(double)a2 state:(long long)a3;
- (void)capsuleCollectionViewWillHideKeyboard:(id)a0;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)_updateTabDocumentsAnimated:(BOOL)a0;
- (void)updateAdditionalBottomObscuredInset;
- (BOOL)_activeWebViewIsFirstResponder;
- (void)tabControllerDidChangeCurrentTabDocuments:(id)a0;
- (void)_keyboardWillHide:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scribbleInteraction:(id)a0 frameForElement:(id)a1;
- (void)_switchObservingFromTabDocument:(id)a0 toTabDocument:(id)a1;
- (id)topActionForCapsuleCollectionView:(id)a0;
- (unsigned long long)capsuleCollectionViewBoundaryEdgesForScrollableContent:(id)a0;
- (void)tabControllerWillBeginUpdates:(id)a0;
- (BOOL)transitionToState:(long long)a0 options:(long long)a1 animated:(BOOL)a2 completionHandler:(id /* block */)a3;
- (double)capsuleCollectionView:(id)a0 distanceToTopEdgeIncludingDeceleration:(BOOL)a1;
- (BOOL)capsuleCollectionViewShouldDelayToolbarPresentation:(id)a0;
- (void)capsuleCollectionView:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)webViewDidFirstMeaningfulPaintForTabDocument:(id)a0;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)_observeScrollViewDidScroll:(id)a0;
- (void)_scribbleInteraction:(id)a0 requestElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (unsigned long long)numberOfItemsInCapsuleCollectionView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)_dragPreviewForNavigationBar:(id)a0;
- (void)tabControllerDidEndUpdates:(id)a0;
- (BOOL)capsuleCollectionView:(id)a0 shouldHideShadowForItemAtIndex:(long long)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (void)tabController:(id)a0 didInsertTabDocument:(id)a1;
- (void)tabController:(id)a0 didSwitchFromTabDocument:(id)a1 toTabDocument:(id)a2;
- (id)trailingActionForCapsuleCollectionView:(id)a0;
- (void)tabDocumentWillEndNavigationGesture:(id)a0 withNavigationToBackForwardListItem:(id)a1;
- (void)capsuleCollectionView:(id)a0 selectedItemWillChangeToState:(long long)a1 options:(long long)a2 coordinator:(id)a3;
- (BOOL)capsuleCollectionViewContentScaleCompletesMinimization:(id)a0;
- (BOOL)capsuleCollectionViewAllowsMinimizationGesture:(id)a0;
- (void)capsuleCollectionView:(id)a0 didUpdateProgress:(double)a1 toSelectItemAtIndex:(long long)a2 progressToTopAction:(double)a3 snapToAxis:(unsigned long long)a4;
- (unsigned long long)_boundaryEdgesForScrollView:(id)a0;
- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 highlightPreviewForItemWithIdentifier:(id)a2;
- (BOOL)_capsuleShouldShowAlternateToolbarDuringTabViewTransition;

@end
