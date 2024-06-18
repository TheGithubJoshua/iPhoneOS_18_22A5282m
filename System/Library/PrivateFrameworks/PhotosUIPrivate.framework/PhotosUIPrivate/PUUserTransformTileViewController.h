@class PUAssetViewModel, NSString, NSTimer, PUDisplayTileTransform, PUUserTransformView, PUBrowsingViewModel;
@protocol PXVKImageAnalysisInteraction, PUUserTransformTileViewControllerDelegate;

@interface PUUserTransformTileViewController : PUTileViewController <PUUserTransformViewDelegate, PUAssetViewModelChangeObserver, PUBrowsingViewModelChangeObserver, PXVKImageAnalysisInteractionDelegate> {
    struct { BOOL respondsToDidChangeModelTileTransform; BOOL respondsToDidChangeIsUserInteracting; BOOL respondsToShouldReceiveTouchAtLocationFromProvider; BOOL respondsToTextsToHighlight; BOOL respondsToViewControllerPresentingTileView; BOOL respondsToViewControllerPresentingViewController; BOOL respondsToViewControllerShouldShowVisualIntelligenceOverlay; } _delegateFlags;
}

@property (retain, nonatomic, setter=_setUserTransformView:) PUUserTransformView *userTransformView;
@property (nonatomic, setter=_setUntransformedContentFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _untransformedContentFrame;
@property (copy, nonatomic, setter=_setIdentifier:) NSString *_identifier;
@property (retain, nonatomic) PUDisplayTileTransform *displayTileTransform;
@property (retain, nonatomic) id<PXVKImageAnalysisInteraction> imageInteraction;
@property (readonly, nonatomic) BOOL _allowsVKRemoveBackground;
@property (nonatomic) long long vkOverlayUpdateToken;
@property (nonatomic) BOOL imageSubjectAnalyzingFinished;
@property (readonly, nonatomic) BOOL visualImageInteractionEnabled;
@property (retain, nonatomic) NSTimer *pptVKAnalysWaitingTimer;
@property (weak, nonatomic) id<PUUserTransformTileViewControllerDelegate> delegate;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (nonatomic, setter=setUserInteractionEnabled:) BOOL userInteractionEnabled;
@property (readonly, nonatomic) BOOL hasActiveTextSelection;
@property (readonly, nonatomic) BOOL imageSubjectAnalysisAvailable;
@property (readonly, nonatomic) BOOL isVisualIntelligenceOverlayInitialized;
@property (readonly, nonatomic) BOOL imageInteractionHasAnalysisAndSubjectLiftingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleBrowsingViewModel:(id)a0 didChange:(id)a1;
- (BOOL)actionInfoItemExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleAssetViewModel:(id)a0 didChange:(id)a1;
- (void)didChangeVisibleRect;
- (void)applyLayoutInfo:(id)a0;
- (void)didChangeAnimating;
- (BOOL)dataDetectorExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)wantsVisibleRectChanges;
- (BOOL)textExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)imageSubjectExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)interactableItemExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)beginImageSubjectAnalysisIfNecessary;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)becomeReusable;
- (BOOL)userTransformView:(id)a0 shouldReceiveTouchAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateUserTransformPadding;
- (id)loadView;
- (void)imageAnalysisInteraction:(id)a0 livePhotoShouldPlay:(BOOL)a1;
- (BOOL)isShowingLivePhotoForImageAnalysisInteraction:(id)a0;
- (BOOL)pointInsideContentView:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)imageAnalysisInteractionDidCompleteSubjectAnalysis:(id)a0;
- (void)_updateUserTransformView;
- (void)_configureVisualImageOverlay;
- (id)_userInputOriginIdentifier;
- (void)imageAnalysisInteractionDidBeginSubjectAnalysis:(id)a0;
- (id)presentingViewControllerForImageAnalysisInteraction:(id)a0;
- (BOOL)_needsVisualImageOverlay;
- (void).cxx_destruct;
- (id)contentImageForImageAnalysisInteraction:(id)a0;
- (BOOL)imageAnalysisInteraction:(id)a0 shouldBeginAtPoint:(struct CGPoint { double x0; double x1; })a1 forAnalysisType:(unsigned long long)a2;
- (void)_ppt_fireVKAnalysisWaitingTimer;
- (void)_resetVisualImageOverlay;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })_pointInScrollContentViewFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateUserInteractionEnabled;
- (void)_ppt_resetVKAnalysisWaitingTimer;
- (void)userTransformView:(id)a0 didChangeIsUserInteracting:(BOOL)a1;
- (void)_updateVisualImageOverlay;
- (id)contentViewForImageAnalysisInteraction:(id)a0;
- (id)_createVKImageInteractionIfNeeded;
- (id)initWithReuseIdentifier:(id)a0;
- (void)ppt_notifyWhenVKAnalysisIsReadyWithTimeout:(double)a0 completionHandler:(id /* block */)a1;
- (void)userTransformView:(id)a0 didChangeUserAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isUserInteracting:(BOOL)a2;

@end
