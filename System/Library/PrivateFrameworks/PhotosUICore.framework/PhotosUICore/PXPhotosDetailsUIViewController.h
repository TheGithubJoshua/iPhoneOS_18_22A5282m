@class UIViewController, PXActionManager, PXScrollViewController, PXAssetReference, PXPhotosDetailsViewModel, NSMutableArray, NSString, PXPhotosDetailsHeaderTileWidget, UIContextMenuInteraction, PXPhotosDetailsContext, NSArray, NSUserActivity, PXPhotosDetailsSpecManager, PXSwipeSelectionManager, UIView, UIPointerInteraction, PXAssetSelectionUserActivityController, PXTilingController, PXBarsController, PXUIScrollViewController, PXWidgetSpec, UIScrollView, NSMapTable, PXWidgetComposition;
@protocol PXViewControllerEventTracker, PXDisplayAsset, PXPhotosDetailsUIViewControllerDelegate, PXUIWidget, PXAssetCollectionActionPerformerDelegate;

@interface PXPhotosDetailsUIViewController : UIViewController <PXWidgetCompositionDelegate, PXChangeObserver, PXActionManagerProvider, PXActionPerformerDelegate, PXWidgetUnlockDelegate, PXWidgetInteractionDelegate, PXWidgetEditingDelegate, PXForcedDismissableViewController, PXUserInterfaceFeatureViewController, UIContextMenuInteractionDelegate, UIPointerInteractionDelegate, PXBarsControllerDelegate, PXScrollViewControllerObserver, PXPurgeableController> {
    struct { BOOL requestDismissal; BOOL compositionDidChange; } _delegateRespondsTo;
}

@property (readonly, nonatomic) id<PXViewControllerEventTracker> eventTracker;
@property (readonly, nonatomic) PXPhotosDetailsViewModel *_viewModel;
@property (readonly, nonatomic) PXUIScrollViewController *_scrollViewController;
@property (readonly, nonatomic) NSArray *_widgets;
@property (readonly, nonatomic) NSMapTable *_widgetOptions;
@property (readonly, nonatomic) PXPhotosDetailsHeaderTileWidget *_headerWidget;
@property (readonly, nonatomic) PXTilingController *_headerAssetWidgetTilingController;
@property (readonly, nonatomic) PXPhotosDetailsSpecManager *_specManager;
@property (readonly, nonatomic) NSMutableArray *_widgetDisablingDimmingViews;
@property (retain, nonatomic, setter=_setWidgetSpec:) PXWidgetSpec *_widgetSpec;
@property (nonatomic, setter=_setHasAppeared:) BOOL _hasAppeared;
@property (retain, nonatomic, setter=_setSwipeSelectionManager:) PXSwipeSelectionManager *_swipeSelectionManager;
@property (readonly, nonatomic) Class _barsControllerClass;
@property (readonly, copy, nonatomic) id /* block */ _unlockStatus;
@property (readonly, copy, nonatomic) id /* block */ _unlockHandler;
@property (readonly, nonatomic) id<PXUIWidget> _previewWidget;
@property (retain, nonatomic) UIView *widgetsBackgroundView;
@property (nonatomic) BOOL didAppearOnce;
@property (copy, nonatomic, setter=_ppt_setAllWidgetLoadingCompleteHandler:) id /* block */ _ppt_allWidgetLoadingCompleteHandler;
@property (copy, nonatomic, setter=_ppt_setVariationsWidgetLoadingCompleteHandler:) id /* block */ _ppt_variationsWidgetLoadingCompleteHandler;
@property (retain, nonatomic, setter=_setContextMenuInteraction:) UIContextMenuInteraction *_contextMenuInteraction;
@property (nonatomic, setter=_setPreviewCommitting:) BOOL _previewCommitting;
@property (retain, nonatomic, setter=_setPreviewViewController:) UIViewController *_previewViewController;
@property (retain, nonatomic, setter=_setPointerInteraction:) UIPointerInteraction *_pointerInteraction;
@property (retain, nonatomic) NSUserActivity *siriActionActivity;
@property (readonly, nonatomic) PXAssetSelectionUserActivityController *userActivityController;
@property (readonly, nonatomic) PXBarsController *barsController;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (readonly, nonatomic) PXScrollViewController *scrollViewController;
@property (weak, nonatomic) id<PXAssetCollectionActionPerformerDelegate> actionPerformerDelegate;
@property (nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) id<PXDisplayAsset> presentedKeyAsset;
@property (readonly, nonatomic) PXWidgetComposition *composition;
@property (readonly, nonatomic) double captionWidgetPreferredHeight;
@property (readonly, nonatomic) double captionWidgetCurrentContentHeight;
@property (nonatomic) unsigned long long occludedContentEdges;
@property (readonly, nonatomic) BOOL shouldUpdateStatusBarTitle;
@property (readonly, nonatomic) UIScrollView *ppt_scrollView;
@property (readonly, nonatomic) PXPhotosDetailsContext *context;
@property (readonly, nonatomic) unsigned long long options;
@property (weak, nonatomic) id<PXPhotosDetailsUIViewControllerDelegate> delegate;
@property (retain, nonatomic) PXAssetReference *initiallyPresentedAssetReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXActionManager *assetActionManager;
@property (readonly, nonatomic) long long userInterfaceFeature;

+ (void)preloadResources;

- (id)initWithCoder:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)undoManagerForActionPerformer:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)actionPerformer:(id)a0 didChangeState:(unsigned long long)a1;
- (void)_updateTitleAndSubtitle;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)prepareForDismissingForced:(BOOL)a0;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)scrollViewControllerDidScroll:(id)a0;
- (void).cxx_destruct;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canBecomeFirstResponder;
- (void)scrollViewControllerWillBeginScrolling:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)contextMenuInteractionDidEnd:(id)a0;
- (id)initWithContext:(id)a0 options:(unsigned long long)a1;
- (id)initWithContext:(id)a0 configuration:(id)a1;
- (void)_updateAllWidgetsSelectionState;
- (void)purgeIfPossible;
- (void)playMovieWithCompletionHandler:(id /* block */)a0;
- (void)_addSwiftUIWidgetForHelperClassName:(id)a0 addCallback:(id /* block */)a1;
- (BOOL)_dismissSelfIfSafeAnimated:(BOOL)a0;
- (void)_ensureComposition;
- (void)_ensureScrollViewController;
- (void)_handleDeviceDidUnlock;
- (void)_handleSpaceBar:(id)a0;
- (void)_handleWidgetsLoadingDelay;
- (void)_invalidateBarSpec;
- (void)_invalidateCompositionSpec;
- (void)_invalidateWidgetSpec;
- (void)_loadComposition;
- (void)_loadWidgets;
- (unsigned long long)_optionsForWidget:(id)a0;
- (void)_performAddToMemoriesAnimation;
- (void)_ppt_informWidgetsLoadedHandlerIfNeeded;
- (id)_previewViewControllerForLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_shouldShowMovieHeader;
- (void)_updateAllWidgetsFaceModeState;
- (void)_updateAllWidgetsSpec;
- (void)_updateBarSpec;
- (void)_updateCompositionSpec;
- (void)_updateScrollViewControllerContentInset;
- (void)_updateStatusBarTitle;
- (void)_updateTopTrailingBarButtons;
- (void)_updateWidgetDisablingWithAnimationOptions:(id)a0;
- (void)_updateWidgetSpec;
- (void)_updateWidgetsBackground;
- (unsigned long long)_userEventSourceForDetailView:(id)a0;
- (void)_viewWillLayoutBeforeAppearing;
- (id)_widgetAtLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (id)barsControllerActionsForSelectionContextMenu:(id)a0;
- (void)editingDidChange:(BOOL)a0;
- (void)editorHeightDidChange;
- (void)informFirstWidgetAvailableVisibleRectInEditMode:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)ppt_performBlockAfterAllWidgetLoadingCompletes:(id /* block */)a0;
- (void)ppt_performBlockAfterVariationsWidgetLoadingCompletes:(id /* block */)a0;
- (void)ppt_toggleDiscloseWidgets;
- (void)requestExitEditModeWithChangeSavingMode:(long long)a0;
- (void)scrollViewControllerWillLayoutSubviews:(id)a0;
- (id)standaloneMapViewController;
- (void)visualSearchLookupWidgetDidTap;
- (void)widget:(id)a0 didChangeEditingMode:(BOOL)a1;
- (void)widget:(id)a0 performAfterUnlockingDeviceIfNecessary:(id /* block */)a1 failurehandler:(id /* block */)a2;
- (void)widgetComposition:(id)a0 didUpdateCompositionWithDefaultAnimationOptions:(id)a1;
- (long long)widgetComposition:(id)a0 loadingPriorityForWidget:(id)a1;
- (BOOL)widgetComposition:(id)a0 requestViewControllerDismissalAnimated:(BOOL)a1;
- (BOOL)widgetComposition:(id)a0 shouldUseEdgeToEdgeLayoutForWidget:(id)a1;
- (id)widgetComposition:(id)a0 undoManagerForWidget:(id)a1;
- (id)widgetComposition:(id)a0 viewControllerHostingWidget:(id)a1;
- (BOOL)widgetComposition:(id)a0 widget:(id)a1 transitionToViewController:(id)a2 withTransitionType:(long long)a3;
- (void)widgetComposition:(id)a0 widgetHasLoadedContentDataDidChange:(id)a1;
- (BOOL)widgetCompositionHasContentAbove:(id)a0;
- (BOOL)widgetDeviceIsUnlocked:(id)a0;
- (void)widgetEditorHeightDidChange:(id)a0;
- (void)widgetTapped:(id)a0;

@end
