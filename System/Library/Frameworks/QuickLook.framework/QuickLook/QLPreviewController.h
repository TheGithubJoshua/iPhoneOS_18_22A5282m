@class UIViewController, QLTransitionController, NSDate, QLPinchRotationTracker, NSMutableArray, NSString, QLItem, QLNavigationState, NSArray, NSMutableDictionary, UIDocumentInteractionController, QLSwipeDownTracker, QLCustomURLSharingProxyDelegate, NSUserActivity, QLActivityItemProvider, QLBarButtonItem, UIPanGestureRecognizer, QLErrorView, UIPinchGestureRecognizer, QLPreviewItemStore, UIAlertController, UIColor, UINavigationController, NSURL, UIRotationGestureRecognizer, QLToolbarController, QLStateManager;
@protocol QLRemotePopoverTracker, QLPreviewControllerDelegate, QLPrintingProtocol, QLPreviewCollectionProtocol, QLPreviewControllerDataSource, QLPreviewItem;

@interface QLPreviewController : UIViewController <UIScreenshotServiceDelegate, UIDocumentPickerDelegate, UIDocumentInteractionControllerDelegate, UIGestureRecognizerDelegate, QLPreviewItemStoreDelegate, QLPreviewItemProvider, QLPreviewControllerStateProtocolHostOnly, UIPageViewControllerDelegate, UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    QLBarButtonItem *_doneButton;
    QLBarButtonItem *_actionButton;
    QLBarButtonItem *_listButton;
    BOOL _previewCollectionNeedsConfiguration;
    BOOL _previewCollectionIsLoading;
    BOOL _changingCurrentPreview;
    NSMutableArray *_previewCollectionReadyCompletionBlocks;
    NSString *_loadingTextForMissingFiles;
    long long _whitePointAdaptivityStyle;
    long long _enqueuedWhitePointAdaptivityStyle;
    QLErrorView *_noDataView;
    BOOL _deferReloadData;
    long long _deferredSetIndex;
    NSDate *_lastCrashTimeStamp;
    unsigned long long _numberOfRetries;
    BOOL _viewWillAppearPerformed;
    UIViewController *_modalRootViewController;
    NSUserActivity *_userActivity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *previewKeyCommands;
@property (nonatomic) BOOL canChangeCurrentPage;
@property (nonatomic) BOOL overlayHidden;
@property (nonatomic) BOOL fullScreen;
@property (nonatomic) BOOL isInteractivePopEnabled;
@property (nonatomic) BOOL previousStatusBarHidden;
@property (readonly) long long numberOfPreviewItems;
@property (readonly) QLItem *internalCurrentPreviewItem;
@property (readonly) UIViewController<QLPreviewCollectionProtocol> *previewCollection;
@property (readonly) id<QLPrintingProtocol> printer;
@property (readonly) NSArray *previewToolbarButtons;
@property (readonly) NSArray *excludedToolbarButtonIdentifiers;
@property (weak, nonatomic) UIAlertController *doneButtonAlertController;
@property (readonly) QLNavigationState *previousNavigationVCState;
@property (retain, nonatomic) UINavigationController *internalNavigationController;
@property (nonatomic) BOOL willTransitionToInternalView;
@property (nonatomic) BOOL didTransitionFromInternalView;
@property (nonatomic) BOOL allowInteractiveTransitions;
@property (readonly, nonatomic) QLToolbarController *toolbarController;
@property (readonly) QLPreviewItemStore *previewItemStore;
@property (retain) QLActivityItemProvider *currentItemProvider;
@property (retain, nonatomic) QLCustomURLSharingProxyDelegate *customURLSharingProxyDelegate;
@property (retain) UIDocumentInteractionController *sharingInteractionController;
@property (retain, nonatomic) id<QLRemotePopoverTracker> shareSheetPopoverTracker;
@property (copy, nonatomic) id /* block */ shareSheetDismissCompletion;
@property (retain, nonatomic) NSURL *accessedUrlForSharingController;
@property (retain) NSArray *originalLeftBarButtonItems;
@property (retain) NSArray *originalRightBarButtonItems;
@property (retain) NSString *currentTitleFromItemViewController;
@property (retain, nonatomic) id<QLPreviewControllerDelegate> strongDelegate;
@property (retain) UIPanGestureRecognizer *slideGesture;
@property (retain) UIPinchGestureRecognizer *pinchGesture;
@property (retain) UIRotationGestureRecognizer *rotationGesture;
@property (retain) QLSwipeDownTracker *swipeDownTracker;
@property (retain) QLPinchRotationTracker *pinchRotationTracker;
@property (retain) QLStateManager *stateManager;
@property (retain) QLTransitionController *currentAnimator;
@property BOOL canShowToolbar;
@property BOOL canShowNavBar;
@property (nonatomic) BOOL forceDismissActionsPresentation;
@property (nonatomic) BOOL currentPreviewHasRemoteUnsavedEdits;
@property (nonatomic) BOOL isObtainingEditsFromServiceBeforeDismissing;
@property (readonly, nonatomic) BOOL isTopPreviewController;
@property (nonatomic) unsigned long long quickLookVisibility;
@property (nonatomic) unsigned long long appearanceActions;
@property (nonatomic) BOOL isContentManaged;
@property (copy, nonatomic) NSString *personaUniqueString;
@property (nonatomic) BOOL useCustomActionButton;
@property (nonatomic) BOOL alwaysDisplayPreviewItemTitle;
@property (nonatomic) BOOL showActionAsDefaultButton;
@property (nonatomic) BOOL forceModalPresentation;
@property (retain, nonatomic) NSArray *additionalLeftBarButtonItems;
@property (retain, nonatomic) NSArray *additionalRightBarButtonItems;
@property unsigned long long presentationStyle;
@property (retain, nonatomic) UIColor *toolbarTintColor;
@property (retain, nonatomic) UIColor *navigationBarTintColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *fullscreenBackgroundColor;
@property (readonly, nonatomic) unsigned long long presentationMode;
@property (nonatomic) unsigned long long forcedSupportedInterfaceOrientations;
@property (copy, nonatomic) NSString *overrideParentApplicationDisplayIdentifier;
@property (weak, nonatomic) id<QLPreviewControllerDataSource> dataSource;
@property long long currentPreviewItemIndex;
@property (readonly) id<QLPreviewItem> currentPreviewItem;
@property (weak, nonatomic) id<QLPreviewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPreviewItem:(id)a0;
+ (void)presentPreviewItem:(id)a0 onViewController:(id)a1 withDelegate:(id)a2 animated:(BOOL)a3;
+ (BOOL)canPreviewDocumentType:(id)a0;
+ (BOOL)canPreviewMIMEType:(id)a0;
+ (id)contentTypeForPreviewItem:(id)a0;
+ (id)controllerWithItemStore:(id)a0;
+ (BOOL)copyPreviewItemToPasteboard:(id)a0;
+ (void)logDeprecatedMessageForMethodName:(id)a0;
+ (void)logDeprecatedMessageForSelector:(SEL)a0;
+ (id)printPageRendererForItem:(id)a0;
+ (id)titleForPreviewItem:(id)a0;

- (id)userActivity;
- (id)_doneButton;
- (long long)preferredStatusBarUpdateAnimation;
- (void)export:(id)a0;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)_updateBackgroundColor;
- (void)applicationDidBecomeActive:(id)a0;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)setAccessoryViewVisible:(BOOL)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)loadView;
- (void)beginInteractiveTransition;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)prefersStatusBarHidden;
- (id)currentTracker;
- (id)interactionControllerForPresentation:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)reloadData;
- (int)mode;
- (void).cxx_destruct;
- (id)interactionControllerForDismissal:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (id)childViewControllerForStatusBarHidden;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)applicationDidEnterBackground:(id)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)screenshotService:(id)a0 generatePDFRepresentationWithCompletion:(id /* block */)a1;
- (id)keyCommands;
- (void)willMoveToParentViewController:(id)a0;
- (id)currentItem;
- (long long)_preferredModalPresentationStyle;
- (id)activityItemsConfiguration;
- (void)setPrinter:(id)a0;
- (BOOL)sourceIsManaged;
- (void)_printDocument:(id)a0;
- (id)_actionButton;
- (id)_childViewControllerForWhitePointAdaptivityStyle;
- (id)_preferredBackgroundColor;
- (long long)_preferredWhitePointAdaptivityStyle;
- (void)_reloadDataIfNeeded;
- (BOOL)accessibilityPerformEscape;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)documentPickerWasCancelled:(id)a0;
- (void)print:(id)a0;
- (void)setUserActivity:(id)a0;
- (void)_actionButtonTapped:(id)a0;
- (void)_doneButtonTapped:(id)a0;
- (void)_prepareDelayedAppearance;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAdditionalButtonWithActionName:(SEL)a0;
- (id)initWithPreviewItems:(id)a0;
- (void)refreshCurrentPreviewItem;
- (void)setCurrentOrbMode:(unsigned long long)a0;
- (void)setLoadingTextForMissingFiles:(id)a0;
- (id)activityItemForDocumentInteractionController:(id)a0;
- (id)additionalActivitiesForDocumentInteractionController:(id)a0;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)a0;
- (id)excludedActivityTypesForDocumentInteractionController:(id)a0;
- (void)presentPreviewItem:(id)a0 onViewController:(id)a1 withDelegate:(id)a2 animated:(BOOL)a3;
- (id)printInfoForDocumentInteractionController:(id)a0;
- (id)editedItems;
- (void)_updateAppearance:(BOOL)a0;
- (void)updatePreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)dismissQuickLook;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(id /* block */)a0;
- (void)sceneWillDeactivate:(id)a0;
- (id)flexibleSpace;
- (BOOL)_canDisplayOpenInButtonForItem:(id)a0;
- (void)_triggerOverlayUpdateAfterDelay;
- (id)previewItemDisplayStateForItem:(id)a0;
- (void)unregisterFromScreenshotService;
- (void)updateDocumentPropertiesDragItemsProviderWithItem:(id)a0 shareableURL:(id)a1;
- (id)saveToFilesActionForItem:(id)a0 atURL:(id)a1;
- (id)_additionalLeftButtonItems;
- (id)_additionalRightButtonItems;
- (BOOL)_adoptPersona:(id)a0 andPerformBlock:(id /* block */)a1;
- (void)_asynchronouslyUpdateContentsOfPreviewItem:(id)a0 editedCopy:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_barButtonItemArray:(id)a0 isEqualToArray:(id)a1;
- (BOOL)_basePreviewControllerIsBeingFullyDismissed;
- (id)_buttonWithAccessibilityIdentifierPointer:(id)a0 inButtons:(id)a1;
- (BOOL)_canPerformBarButtonAction;
- (unsigned long long)_computePresentationMode;
- (void)_configurePreviewCollectionIfNeeded;
- (id)_copyBarButtons:(id)a0;
- (void)_copyToButtonTapped:(id)a0;
- (void)_didEditCopyOfPreviewItemAtIndex:(unsigned long long)a0 editedCopy:(id)a1 synchronously:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_didObtainEditsFromService;
- (void)_dismissQuickLookFromKeyboardCommand;
- (BOOL)_displayDismissActionsForEditedPreviewItemsIfNeeded:(id)a0 fromBarButtonItem:(id)a1;
- (id)_displayedButtonWithAccessibilityIdentifier:(id)a0;
- (id)_editedItemsForDoneActionControllerWithItems:(id)a0;
- (void)_handleEditedPreviewItem:(id)a0 editedCopy:(id)a1 synchronously:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_invalidatePreviewCollectionIfNeeded;
- (void)_invalidatePreviewCollectionIfNeededNow;
- (BOOL)_isBeingFullyDismissed;
- (BOOL)_isInPickMode;
- (BOOL)_isQuickLookVisible;
- (BOOL)_isToolbarVisibleForTraitCollection:(id)a0;
- (void)_keyCommandWasPerformed:(id)a0;
- (id)_listButton;
- (void)_listButtonTapped:(id)a0;
- (id)_navigationBarLeftButtonsWithTraitCollection:(id)a0;
- (id)_navigationBarRightButtonsWithTraitCollection:(id)a0;
- (BOOL)_needsListButton;
- (void)_nextPreview;
- (void)_notifyFirstAppearanceIfNeeded;
- (void)_notifyPreviewCollectionOfDoneButtonTapWithSender:(id)a0;
- (unsigned long long)_numberOfButtonsExcludingSpacersInButtons:(id)a0 disappearingOnTap:(BOOL)a1;
- (void)_obtainEditsFromServiceAndNotifyPreviewCollectionOfDoneButtonTappedWithSender:(id)a0;
- (id)_openInButton;
- (void)_openInButtonTapped:(id)a0;
- (id)_openInTitleForOpenInType:(unsigned long long)a0 claimBinding:(id)a1;
- (void)_performOpenInWithFileURL:(id)a0 claimBinding:(id)a1 additionalLaunchServicesOptions:(id)a2 completion:(id /* block */)a3;
- (void)_performQuickLookDismissalAnimated:(BOOL)a0;
- (void)_presentLoadedPreviewCollection:(id)a0;
- (void)_presentPreviewCollection;
- (void)_previousPreview;
- (void)_promptUserAndOpenURLIfNeeded:(id)a0;
- (BOOL)_quickLookWillBecomeVisible;
- (void)_refreshCurrentPreviewItemAnimated:(BOOL)a0;
- (void)_registerForApplicationStateChangesNotifications;
- (void)_removePreviewCollectionFromViewHierarchy;
- (void)_savePreviousNavigationVCState;
- (void)_setCurrentPreviewItemIndex:(long long)a0 updatePreview:(BOOL)a1 animated:(BOOL)a2;
- (void)_setFullScreen:(BOOL)a0 animated:(BOOL)a1 force:(BOOL)a2;
- (void)_setPreferredWhitePointAdaptivityStyle:(long long)a0;
- (void)_setPresentationMode:(unsigned long long)a0;
- (void)_setupDocumentInteractionControllerForPresentation:(id /* block */)a0;
- (void)_setupDocumentInteractionControllerForPresentationWithURL:(id)a0 isCustomURL:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)_shouldAllowInteractiveTransitions;
- (BOOL)_shouldDisplayOpenInInChromeIfAvailable;
- (void)_showPreviewCollection;
- (void)_showShareSheetFromBarButton:(id)a0;
- (void)_stopAccessingUrlForSharingController;
- (void)_synchronouslyUpdateContentsOfPreviewItem:(id)a0 editedCopy:(id)a1 completionHandler:(id /* block */)a2;
- (id)_toolBarButtonsWithTraitCollection:(id)a0;
- (void)_toolbarButtonPressed:(id)a0;
- (id)_topNavigationItem;
- (id)_topPreviewController;
- (id)_topViewController;
- (BOOL)_topViewControllerBelongsToHierarchy:(id)a0;
- (void)_unregisterForApplicationStateChangesNotifications;
- (void)_updateAllowInteractiveTransitionsIfNeeded;
- (void)_updateBarTintColors;
- (void)_updateCurrentPopoverButtonIfNeeded:(id)a0 newNavigationLeftButtons:(id)a1;
- (void)_updateNavigationBarBehaviorStyle;
- (void)_updateOverlayButtonsForTraitCollection:(id)a0 animated:(BOOL)a1;
- (void)_updateOverlayButtonsIfNeededWithTraitCollection:(id)a0 animated:(BOOL)a1 updatedToolbarButtons:(id *)a2;
- (void)_updatePreviewItem:(id)a0 editedCopy:(id)a1 completionHandler:(id /* block */)a2;
- (void)_updateToolbarSuperview;
- (void)_updateViewHierarchyPresentation;
- (void)_willStartObtainingEditsFromService;
- (id)activityControllerForURL:(id)a0;
- (id)animatorForShowing:(BOOL)a0 previewController:(id)a1 presentingController:(id)a2;
- (void)applyPreviewItemDisplayState:(id)a0 toItem:(id)a1;
- (BOOL)canPerformExportForItem:(id)a0 atURL:(id)a1;
- (BOOL)canPerformPrintForItem:(id)a0 atURL:(id)a1;
- (BOOL)canPerformPrintForItem:(id)a0 customPrinter:(id *)a1 shouldUseDefaultPrinter:(BOOL *)a2;
- (void)createDocumentPropertiesWithItem:(id)a0 shareableURL:(id)a1;
- (unsigned long long)currentOrbMode;
- (BOOL)currentPreviewHasUnsavedEdits;
- (void)currentPreviewItemViewControllerHasUnsavedEdits:(BOOL)a0;
- (void)didEditCopyOfPreviewItemAtIndex:(unsigned long long)a0 editedCopy:(id)a1;
- (void)didEditCopyOfPreviewItemAtIndex:(unsigned long long)a0 editedCopy:(id)a1 completionHandler:(id /* block */)a2;
- (void)didSelectPreviewItem:(id)a0;
- (id)excludedActivityTypesForCurrentPreviewItem;
- (void)expandContentOfItemAtIndex:(unsigned long long)a0 withUUID:(id)a1 unarchivedItemsURLWrapper:(id)a2;
- (void)exportItem:(id)a0 atURL:(id)a1;
- (void)forwardMessage:(id)a0 toItemAtIndex:(unsigned long long)a1 withUUID:(id)a2 completionHandler:(id /* block */)a3;
- (void)getStateRestorationUserInfo:(id /* block */)a0;
- (void)handleShortcutsActionOutputFile:(id)a0 forAction:(id)a1;
- (BOOL)hasEditedItems;
- (BOOL)hasItemsToPreview;
- (void)hideNoDataView;
- (id)itemProviderForItem:(id)a0 shareableURL:(id)a1;
- (BOOL)itemStore:(id)a0 canEditItem:(id)a1;
- (BOOL)itemStore:(id)a0 canHandleEditedCopyOfPreviewItem:(id)a1;
- (BOOL)itemStore:(id)a0 canShareItem:(id)a1;
- (unsigned long long)itemStore:(id)a0 editedFileBehaviorForItem:(id)a1;
- (long long)itemStore:(id)a0 editingModeForPreviewItem:(id)a1;
- (id)lockPDFActionForItem:(id)a0 atURL:(id)a1;
- (void)obtainAndUpdateEditedCopyOfCurrentPreviewItem:(id /* block */)a0;
- (void)openURLIfAllowed:(id)a0;
- (BOOL)parentIsNavigationController;
- (void)presentAlertControllerForScenario:(long long)a0;
- (void)presentError:(id)a0 forAction:(id)a1;
- (void)presentSaveToFilesForEditedItems:(id)a0;
- (void)presentSaveToPhotoError:(id)a0 forItem:(id)a1;
- (void)previewCollectionPrefersWhitePointAdaptivityStyle:(long long)a0;
- (void)previewCollectionUpdatePreviewItem:(long long)a0;
- (id)previewItemAtIndex:(long long)a0;
- (void)previewItemAtIndex:(unsigned long long)a0 wasUpdatedWithLifecycleState:(long long)a1 withError:(id)a2;
- (void)previewItemAtIndex:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (id)printActionForItem:(id)a0 atURL:(id)a1;
- (void)printItem:(id)a0 atURL:(id)a1;
- (void)printItemAtURL:(id)a0 withCustomPrinter:(id)a1 shouldUseDefaultPrinter:(BOOL)a2;
- (void)registerForScreenshotService;
- (void)remoteViewControllerWasInvalidated;
- (void)saveEditsIfNecessary:(id /* block */)a0;
- (id)saveToPhotosActionForItem:(id)a0 atURL:(id)a1;
- (void)setCurrentPreviewItemIndex:(long long)a0 animated:(BOOL)a1;
- (void)setNavBarCanBeVisible:(BOOL)a0;
- (void)setOverlayHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setPreviewItemDisplayState:(id)a0 onItemAtIndex:(unsigned long long)a1;
- (void)setQuickLookVisibility:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setScreenEdgePanWidth:(double)a0;
- (void)setToolbarCanBeVisible:(BOOL)a0;
- (void)shareSheetDidDismiss;
- (void)shareableURLForCurrentPreviewItem:(id /* block */)a0;
- (void)showNoDataViewIfNeeded;
- (void)showShareSheet;
- (void)showShareSheetFromBarButton:(id)a0;
- (void)showShareSheetFromRemoteViewWithPopoverTracker:(id)a0 customSharedURL:(id)a1 dismissCompletion:(id /* block */)a2;
- (void)showShareSheetWithPopoverTracker:(id)a0 customSharedURL:(id)a1 dismissCompletion:(id /* block */)a2;
- (id)titleMenuElementsForItem:(id)a0 atURL:(id)a1 withSuggestedActions:(id)a2;
- (void)triggerQuickLookDismissal;
- (void)updateDocumentPropertiesActivityProviderWithShareableURL:(id)a0;
- (void)updateDocumentPropertiesMetadataForItem:(id)a0 withShareableURL:(id)a1;
- (void)updateKeyCommands;
- (void)updateNavigationTitle;
- (void)updateOverlayAnimated:(BOOL)a0 animatedButtons:(BOOL)a1 forceRefresh:(BOOL)a2 withTraitCollection:(id)a3;
- (void)updateOverlayAnimated:(BOOL)a0 forceRefresh:(BOOL)a1;
- (void)updateOverlayAnimated:(BOOL)a0 forceRefresh:(BOOL)a1 withTraitCollection:(id)a2;
- (void)updateOverlayButtons:(BOOL)a0;
- (void)updatePreviewItemAtIndex:(unsigned long long)a0 editedCopy:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateRemoteOverlayIfNeeded;
- (void)updateStateRestorationWithUserInfo:(id)a0;
- (void)updateStatusBarAnimated:(BOOL)a0;
- (void)updateTitle:(id)a0;
- (void)updateTitleMenuAndDocumentProperties;
- (void)updateTitleMenuWithItem:(id)a0;
- (id)viewForAdditionalButtonWithActionName:(SEL)a0;
- (void)waitForPreviewCollectionWithCompletionHandler:(id /* block */)a0;

@end