@class UIView, NSString, NSArray, QLPreviewContext, UIDragInteraction, NSObject, PUProgressIndicatorView, NSMutableArray, QLAppearance;
@protocol QLItemViewControllerPresentingDelegate, OS_dispatch_queue, QLPreviewItemViewControllerDelegate;

@interface QLItemViewController : UIViewController <UIDragInteractionDelegate_Private, QLLocalPreviewingController, QLToolbarButtonAction> {
    NSMutableArray *_completionBlocks;
    long long _lastScrollViewUpdateInterfaceOrientation;
}

@property (readonly) long long preferredWhitePointAdaptivityStyle;
@property (retain, nonatomic) UIDragInteraction *dragInteraction;
@property BOOL didAppearOnce;
@property BOOL isLoaded;
@property BOOL isLoading;
@property BOOL loadingFailed;
@property (retain) id contents;
@property (retain) QLPreviewContext *context;
@property (retain, nonatomic) QLAppearance *appearance;
@property (weak, nonatomic) id<QLItemViewControllerPresentingDelegate> presentingDelegate;
@property (retain, nonatomic) PUProgressIndicatorView *saveEditProgressView;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *saveEditsQueue;
@property (nonatomic) BOOL isSavingEdits;
@property (readonly, nonatomic) UIView *accessoryView;
@property (readonly, nonatomic) NSArray *registeredKeyCommands;
@property (weak, nonatomic) id<QLPreviewItemViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transitioningView;
- (id)init;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (long long)_dragInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (void).cxx_destruct;
- (id)draggableView;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)scrollView;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (BOOL)canSwipeToDismiss;
- (void)hostApplicationDidBecomeActive;
- (void)previewIsAppearingWithProgress:(double)a0;
- (void)updateInterfaceAfterSavingEdits;
- (void)_addDragInteractionIfNeeded;
- (id)_cancelTouchToken;
- (void)_scrollScrollViewByPercentualOffset:(double)a0;
- (void)_scrollScrollViewDown;
- (void)_scrollScrollViewUp;
- (void)actionSheetDidDismiss;
- (id)additionalItemViewControllerDescription;
- (BOOL)automaticallyUpdateScrollViewContentInset;
- (BOOL)automaticallyUpdateScrollViewContentOffset;
- (BOOL)automaticallyUpdateScrollViewIndicatorInset;
- (void)buttonPressedWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canBeLocked;
- (BOOL)canClickToToggleFullscreen;
- (BOOL)canEnterFullScreen;
- (BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)a0;
- (BOOL)canPinchToDismiss;
- (BOOL)canShowNavBar;
- (BOOL)canShowToolBar;
- (BOOL)canToggleFullScreen;
- (void)didFinishSavingEdits;
- (void)didStartSavingEdits;
- (void)documentMenuActionWillBegin;
- (BOOL)draggableViewShouldStartDragSession:(id)a0;
- (double)edgePanGestureWidth;
- (id)editProgressIndicatorMessage;
- (void)editedCopyToSaveChangesWithOutputType:(id)a0 completionHandler:(id /* block */)a1;
- (id)excludedToolbarButtonIdentifiersForTraitCollection:(id)a0;
- (id)fullscreenBackgroundColor;
- (void)handlePerformedKeyCommandIfNeeded:(id)a0;
- (void)hideSaveEditProgressIndicator;
- (void)hostApplicationDidEnterBackground:(id)a0;
- (void)hostSceneWillDeactivate;
- (void)loadPreviewControllerIfNeededWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)notifyDelegatesDidFailWithError:(id)a0;
- (void)notifyStateRestorationWithUserInfo:(id)a0;
- (void)notifyStateRestorationWithUserInfoIfNeeded:(id)a0;
- (id)parallaxView;
- (void)performCompletionBlocksWithError:(id)a0;
- (void)performFirstTimeAppearanceActions:(unsigned long long)a0;
- (void)performFirstTimeAppearanceActionsIfNeeded:(unsigned long long)a0;
- (void)preloadViewControllerForContext:(id)a0;
- (void)prepareForActionSheetPresentation;
- (void)prepareForInvalidationWithCompletionHandler:(id /* block */)a0;
- (BOOL)presenterShouldHandleLoadingView:(id)a0 readyToDisplay:(id /* block */)a1;
- (void)previewBecameFullScreen:(BOOL)a0 animated:(BOOL)a1;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (void)previewWillAppear:(BOOL)a0;
- (void)previewWillDisappear:(BOOL)a0;
- (void)previewWillFinishAppearing;
- (void)requestLockForCurrentItem;
- (void)savePreviewEditedCopyWithCompletionHandler:(id /* block */)a0;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldAcceptTouch:(id)a0 ofGestureRecognizer:(id)a1;
- (BOOL)shouldAlwaysRunFullscreen;
- (BOOL)shouldRecognizeGestureRecognizer:(id)a0;
- (void)showSaveEditsProgressIndicatorAfterDelay;
- (id)stateRestorationDictionary;
- (BOOL)supportsScrollingUpAndDownUsingKeyCommands;
- (id)toolbarButtonsForTraitCollection:(id)a0;
- (void)transitionDidFinish:(BOOL)a0 didComplete:(BOOL)a1;
- (void)transitionDidStart:(BOOL)a0;
- (void)transitionWillFinish:(BOOL)a0 didComplete:(BOOL)a1;
- (void)updateInterfaceForSavingEdits;
- (void)updatePreviewItemDisplayState:(id)a0;
- (void)updateScrollViewContentOffset;
- (void)updateScrollViewContentOffset:(BOOL)a0 withPreviousAppearance:(id)a1;

@end