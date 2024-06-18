@class NSString, NSArray, MRUCoverSheetViewController;

@interface CSMediaControlsViewController : CSCoverSheetViewControllerBase <MRUCoverSheetViewControllerDelegate, CSAdjunctItemHosting> {
    MRUCoverSheetViewController *_mediaRemoteViewController;
    long long _mediaRemoteLayout;
    struct CGSize { double width; double height; } _containerSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double containerCornerRadius;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

+ (Class)viewClass;

- (id)init;
- (void)viewWillLayoutSubviews;
- (void)_updatePreferredContentSize;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })a0;
- (long long)presentationType;
- (void)viewDidLoad;
- (void)_layoutMediaControls;
- (BOOL)handleEvent:(id)a0;
- (void)_updatePersistentUpdatesEnabled:(BOOL)a0;
- (void)coverSheetViewController:(id)a0 willChangeToLayout:(long long)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (long long)presentationPriority;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (id)visualStylingProviderForCategory:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_suggestedFrameForMediaControls;
- (double)_preferredMediaRemoteHeight;
- (void)coverSheetViewController:(id)a0 didReceiveInteractionEvent:(id)a1;

@end
