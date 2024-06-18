@class UIVisualEffectView, CloudTabItemView, UILabel, NSMutableArray, NSString, NSTimer, NSArray, TabOverviewToolbar, ReorderingAutoscroller, UITextInputPasswordRules, NSCountedSet, TabOverviewInterpolatedLocation, TabOverviewItemView, SFScrollingPanGestureRecognizer, UIView, UIPointerInteraction, CADisplayLink, UIToolbar, UISearchBar, TabExplanationView, SFGradientView, TabOverviewItem, NSIndexSet, UITapGestureRecognizer, NSHashTable;
@protocol TabOverviewThemeProviding, TabOverviewDelegate;

@interface TabOverview : UIView <CloudTabTableDelegate, ReorderingAutoscrollerDelegate, _UIBasicAnimationFactory, _UIScrollToTopView, UIGestureRecognizerDelegate, UIPointerInteractionDelegate, UISearchBarDelegate, UISearchBarDelegate_Private, UIKeyInput, TabThumbnailCollectionView, TabCollectionViewDragDropSupport> {
    NSHashTable *_presentationObservers;
    CADisplayLink *_displayLink;
    TabOverviewInterpolatedLocation *_interpolatedLocation;
    NSArray *_displayedItems;
    BOOL _displayedItemsNeedUpdate;
    SFScrollingPanGestureRecognizer *_panRecognizer;
    SFScrollingPanGestureRecognizer *_tabCloseRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    UIPointerInteraction *_cursorInteraction;
    TabOverviewItem *_activeItem;
    TabOverviewItem *_visiblyCenteredItem;
    TabOverviewItem *_interactivelyLiftingItem;
    TabOverviewInterpolatedLocation *_cloudTabsLocation;
    NSArray *_cloudTabDevices;
    NSArray *_cloudTabTables;
    double _cloudTabsHeight;
    CloudTabItemView *_editedCloudTabItemView;
    struct CGPoint { double x; double y; } _lastPanTranslation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastLayoutBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastScrollBounds;
    struct CGSize { double width; double height; } _lastContentSize;
    ReorderingAutoscroller *_reorderingAutoscroller;
    double _swipeCloseTranslation;
    TabOverviewItem *_swipeClosingItem;
    NSMutableArray *_deferredClosingItems;
    NSCountedSet *_itemsShowingContextMenu;
    BOOL _dragging;
    BOOL _updatingAlternateItemPosition;
    BOOL _horizontalBounceEnabled;
    BOOL _verticalBounceEnabled;
    BOOL _shouldBounceToConstrainedLocation;
    BOOL _usesAccessibilityContentSize;
    BOOL _dismissingWithAddTabAnimation;
    BOOL _suppressesTabCloseAnimation;
    TabOverviewToolbar *_header;
    UISearchBar *_searchBar;
    double _searchBarMinimumWidth;
    UILabel *_titleLabel;
    UIToolbar *_titleToolbar;
    BOOL _includeIncomingItemsInSearch;
    UIView *_inputView;
    BOOL _needsResizeHeaderItems;
    UIView *_scrollingContainerView;
    UIView *_menuPreviewContainerView;
    UIView *_gridVisualizationView;
    NSIndexSet *_indexesMatchingSearch;
    BOOL _shouldAnimateDimmingForSearch;
    BOOL _suppressItemAnimation;
    double _bottomKeyboardInset;
    TabOverviewItem *_interactivePresentationStartingItem;
    struct CGPoint { double x; double y; } _interactivePresentationLastOffset;
    struct CGPoint { double x; double y; } _interactivePresentationFirstOffset;
    double _interactivePresentationLastTimestamp;
    double _interactivePresentationLastLogScale;
    struct CGPoint { double x; double y; } _interactivePresentationVelocity;
    double _interactivePresentationZoomLockStartTime;
    struct CGPoint { double x; double y; } _interactivePresentationZoomLockOffset;
    double _headerHeight;
    double _cachedItemHeaderHeight;
    double _cachedItemAdditionalHeaderHeight;
    double _cachedThumbnailScaleForPresentedLayout;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedContentRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedScreenRectInScrollingContainer;
    struct CGPoint { double x; double y; } _cachedVanishingPoint;
    NSTimer *_itemActivationTimer;
    NSMutableArray *_itemViewReuseStack;
    BOOL _shouldShowPrivateBrowsingExplanationView;
    TabExplanationView *_explanationView;
    struct CGSize { double width; double height; } _explanationViewSize;
    BOOL _explanationViewVisible;
    BOOL _searchBarBackdropStyleUpdated;
    unsigned long long _fadingSnapshotCount;
    double _lastUpdateTime;
    SFGradientView *_statusBarGradient;
    long long _lastUsedLayout;
    double _dismissibleSearchBarHeight;
    UIVisualEffectView *_dismissibleSearchBarBackground;
    BOOL _toolbarDismissed;
    long long _toolbarAnimationCount;
    TabOverviewItemView *_titleSizingItemView;
    unsigned long long _pinnedItemCount;
    unsigned long long _pinnedAlternateItemCount;
    BOOL _transitioningItemIsPinned;
}

@property (weak, nonatomic) id<TabOverviewThemeProviding> themeProvider;
@property (copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSArray *alternateItems;
@property (readonly, nonatomic) long long alternateItemPosition;
@property (readonly, nonatomic) NSArray *itemsMatchingSearchTerm;
@property (readonly, nonatomic) NSArray *itemsFullyInView;
@property (nonatomic) BOOL synchronizeClosingItems;
@property (readonly, nonatomic) double scalePercentageForActiveItem;
@property (readonly, nonatomic) BOOL allowsInteractivePresentation;
@property (readonly, nonatomic) BOOL presentingInteractively;
@property (nonatomic) BOOL targetItemLiftsFromGrid;
@property (retain, nonatomic) TabOverviewItem *itemToActivate;
@property (nonatomic) BOOL defersActivation;
@property (weak, nonatomic) id<TabOverviewDelegate> delegate;
@property (nonatomic) long long barPlacement;
@property (nonatomic) long long presentedTabLayout;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *barButtonItems;
@property (readonly, nonatomic, getter=isInSteadyState) BOOL inSteadyState;
@property (copy, nonatomic) id /* block */ stateUpdateHandler;
@property (copy, nonatomic) id /* block */ pptStateUpdateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (readonly, nonatomic) TabOverviewToolbar *toolbar;
@property (readonly, nonatomic) long long presentationState;
@property (copy, nonatomic) NSString *searchTerm;
@property (readonly, nonatomic, getter=isSearching) BOOL searching;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) double desiredSnapshotScale;
@property (readonly, nonatomic) unsigned long long snapshotBorderOptions;
@property (readonly, nonatomic) ReorderingAutoscroller *reorderingAutoscroller;
@property (readonly, nonatomic) unsigned long long layoutAxes;
@property (readonly, nonatomic) BOOL supportsDropTransitionToItemView;
@property (readonly, nonatomic) BOOL canDragOntoActiveTab;
@property (readonly, nonatomic) BOOL hidesInactiveTabs;
@property (readonly, nonatomic) BOOL lastDecelerationWasInterrupted;

- (void)dismissAnimated:(BOOL)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (id)_timingFunctionForAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItem:(id)a0;
- (void)_updateDisplayLink;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)reorderingAutoscroller:(id)a0 handleScroll:(struct CGPoint { double x0; double x1; })a1;
- (id)targetedDragPreviewForDroppingItem:(id)a0;
- (id)itemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_contentSize;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (unsigned long long)estimatedSnapshotsPerPageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTraitCollection:(id)a1;
- (void)cloudTabTable:(id)a0 didFinishEditingTabItemView:(id)a1;
- (void)updateInteractivePresentationWithOffset:(struct CGPoint { double x0; double x1; })a0 scale:(double)a1;
- (void)endInteractivePresentationAllowingDismissalToTargetItem:(BOOL)a0;
- (void)_updateScrollBoundsForKeyboardNotification:(id)a0;
- (void)willBeginShowingContextMenuForItem:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)viewForItem:(id)a0;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (void)cloudTabTable:(id)a0 didSelectCloudTab:(id)a1;
- (id)inputView;
- (id)undoManager;
- (BOOL)isItemAnimating:(id)a0;
- (void)test_simulateScrollByOffset:(struct CGPoint { double x0; double x1; })a0 inTime:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)_tabClose:(id)a0;
- (id)targetItemForDropAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)cancelInteractivePresentation;
- (BOOL)isScrollEnabled;
- (void)traitCollectionDidChange:(id)a0;
- (void)endSearching;
- (void)enumerateItemsOrderedByVisibility:(id /* block */)a0;
- (void)test_scrollToTopWithoutAnimation;
- (void)presentAnimated:(BOOL)a0;
- (void)attachView:(id)a0 withReferenceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toItem:(id)a2;
- (id)targetedPreviewForDismissingMenuForItem:(id)a0;
- (void)addPresentationObserver:(id)a0;
- (void)copyLocationFromItem:(id)a0 toItem:(id)a1;
- (void).cxx_destruct;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (id)targetedDragPreviewForLiftingItem:(id)a0;
- (BOOL)itemHasAttachedView:(id)a0;
- (void)_displayLinkFired:(id)a0;
- (void)endAnimation;
- (void)_dismissWithItemAtCurrentDecelerationFactor:(id)a0;
- (void)_activateItemToActivate:(id)a0;
- (void)setShowsPrivateBrowsingExplanationView:(BOOL)a0 animated:(BOOL)a1;
- (void)didMoveToWindow;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setCloudTabDevices:(id)a0;
- (void)resetPresentationScrollPosition;
- (double)targetScaleWithTabLayout:(long long)a0;
- (void)updateSnapshotForItem:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)cloudTabTable:(id)a0 closeCloudTab:(id)a1 onDevice:(id)a2;
- (void)_close:(id)a0;
- (void)removePresentationObserver:(id)a0;
- (void)beginSearching;
- (void)setInteractiveInsertionProgress:(double)a0 forItem:(id)a1;
- (void)dealloc;
- (BOOL)_isClosingLastItem;
- (BOOL)canBecomeFirstResponder;
- (void)dismissWithAddTabAnimation;
- (void)deleteBackward;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_searchBar:(id)a0 proposedSearchFieldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)willAnimateDropForItem:(id)a0 withAnimator:(id)a1;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)a0;
- (void)beginInteractivePresentationWithOffset:(struct CGPoint { double x0; double x1; })a0 scale:(double)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)performUpdatesWithoutTabCloseAnimation:(id /* block */)a0;
- (BOOL)cloudTabTable:(id)a0 shouldDisplayTab:(id)a1;
- (void)activateItem:(id)a0;
- (void)_pan:(id)a0;
- (void)_cancelSearch;
- (void)endInteractivePresentation;
- (void)insertText:(id)a0;
- (void)cloudTabTable:(id)a0 didStartEditingTabItemView:(id)a1;
- (struct CGSize { double x0; double x1; })snapshotSizeForSuggestedSize:(struct CGSize { double x0; double x1; })a0;
- (void)setItems:(id)a0 alternateItems:(id)a1 atPosition:(long long)a2;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint { double x0; double x1; })a0 resultHandler:(id /* block */)a1;
- (void)updateInteractivePresentationWithOffset:(struct CGPoint { double x0; double x1; })a0 scale:(double)a1 animated:(BOOL)a2;
- (void)_didReceiveMemoryWarning:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)_tap:(id)a0;
- (void)didEndShowingContextMenuForItem:(id)a0;

@end