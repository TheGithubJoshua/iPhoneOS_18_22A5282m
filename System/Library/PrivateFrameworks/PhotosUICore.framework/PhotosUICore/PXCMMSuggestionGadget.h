@class NSString, PXCMMSuggestionViewModel, PXGadgetSpec, PXCMMSuggestionView, PXFaceTileImageCombiner;
@protocol PXGadgetDelegate, PXCMMWorkflowPresenting, PXCMMSuggestion;

@interface PXCMMSuggestionGadget : NSObject <PXCMMSuggestionViewDelegate, PXDiagnosticsEnvironment, PXGadget> {
    BOOL _didLoadSuggestion;
    PXCMMSuggestionViewModel *_suggestionViewModel;
    PXCMMSuggestionView *_suggestionView;
    struct CGSize { double width; double height; } _requestedPosterImageSize;
    double _requestedWidth;
    BOOL _didRequestCachingOfPosterImage;
    PXFaceTileImageCombiner *_faceTileImageCombiner;
}

@property (readonly, nonatomic) id<PXCMMWorkflowPresenting> workflowPresenter;
@property (retain, nonatomic) id<PXCMMSuggestion> suggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;

+ (id)_imageRequestOptions;

- (void)commitPreviewViewController:(id)a0;
- (id)init;
- (id)targetPreviewViewForLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void).cxx_destruct;
- (id)previewViewControllerAtLocation:(struct CGPoint { double x0; double x1; })a0 fromSourceView:(id)a1;
- (void)_cachePosterImageWithWidth:(double)a0;
- (void)_clearPosterImageCache;
- (void)_loadSuggestionIfNecessary;
- (void)_presentDetailViewAnimated:(BOOL)a0 pptConfigurationBlock:(id /* block */)a1;
- (void)_setCombinedFaceTileImage:(id)a0;
- (void)_updatePeopleSuggestionFaceTileImagesForPersons:(id)a0 mutableViewModel:(id)a1;
- (void)contentHasBeenSeen;
- (void)dynamicUserInterfaceTraitDidChange;
- (void)gadgetControllerHasAppeared;
- (id)initWithWorkflowPresenter:(id)a0;
- (void)ppt_presentComposeRecipientViewAfterDelay:(double)a0;
- (void)prefetchDuringScrollingForWidth:(double)a0;
- (void)prepareCollectionViewItem:(id)a0;
- (void)presentDetailViewAnimated:(BOOL)a0;
- (void)presentDetailViewForSuggestionView:(id)a0 animated:(BOOL)a1;
- (void)suggestionViewSizeThatFitsDidChange:(id)a0;
- (BOOL)supportsHighlighting;
- (id)uniqueGadgetIdentifier;
- (void)userDidSelectGadget;

@end
