@class CKChatItem, NSString, UIBarButtonItem;
@protocol CKQLPreviewControllerDelegate;

@interface CKQLPreviewController : QLPreviewController <CKFullScreenBalloonViewControllerDelegate, IMPhotoLibraryPersistenceManagerListener>

@property (nonatomic) BOOL controllerWasDismissed;
@property (nonatomic) BOOL suppressRefetchingCurrentHighQualityImage;
@property (retain, nonatomic) UIBarButtonItem *tapbackButton;
@property (nonatomic) BOOL currentPreviewItemIsSaved;
@property (weak, nonatomic) CKChatItem *chatItem;
@property (weak, nonatomic) id<CKQLPreviewControllerDelegate> chatControllerPreviewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)photoLibraryPersistedSyndicatedAssetSetDidChange;
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (id)previewActions;
- (void)fullScreenBalloonViewController:(id)a0 willDisappearWithSendAnimation:(BOOL)a1;
- (void)_dismissFullScreenBubbleViewController:(id)a0 animated:(BOOL)a1 withSendAnimation:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)canCurrentPreviewItemQuickSave;
- (id)currentPreviewItem;
- (void)currentPreviewItemDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullScreenBalloonViewController:(id)a0 balloonFrameForChatItem:(id)a1;
- (void)fullScreenBalloonViewController:(id)a0 deleteStickerWithTransferGUID:(id)a1;
- (void)fullScreenBalloonViewController:(id)a0 didAppearAnimated:(BOOL)a1;
- (void)fullScreenBalloonViewController:(id)a0 replyButtonPressedForChatItem:(id)a1;
- (void)fullScreenBalloonViewController:(id)a0 sendMessageAcknowledgment:(long long)a1 forChatItem:(id)a2;
- (void)fullScreenBalloonViewController:(id)a0 sendMessageHighlight:(BOOL)a1 forChatItem:(id)a2;
- (void)fullScreenBalloonViewController:(id)a0 stickerPackTappedWithAdamID:(id)a1;
- (void)fullScreenBalloonViewController:(id)a0 verticallyScrollTranscriptByAmount:(double)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)fullScreenBalloonViewController:(id)a0 willAppearAnimated:(BOOL)a1;
- (char)fullScreenBalloonViewControllerAnchorVertialOrientation:(id)a0 withBalloonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)fullScreenBalloonViewControllerDidDisappear:(id)a0;
- (void)fullScreenBalloonViewControllerHandleDismissTap:(id)a0;
- (void)fullScreenBalloonViewControllerMessageHighlightButtonDidFinishAnimating:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullScreenBalloonViewControllerSafeAreaLayoutFrame:(id)a0;
- (BOOL)fullScreenBalloonViewControllerShouldShowHightlightButton:(id)a0 forChatItem:(id)a1;
- (BOOL)fullScreenBalloonViewControllerShouldShowReplyButton:(id)a0;
- (void)replyTapped:(id)a0;
- (void)saveTapped:(id)a0;
- (void)tapbackTapped:(id)a0;
- (void)updateBarButtonItems;
- (void)updateCurrentPreviewItemIsSaved:(BOOL)a0 valueDidChange:(BOOL *)a1;

@end
