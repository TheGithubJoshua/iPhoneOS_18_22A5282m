@class SLSheetMasklayer, SLSheetContentView, SLSheetNavigationController, NSObject, UIViewController, NSMutableArray, UIView, NSString, SLSheetRootViewController, UITextView, UIAlertController, NSNumber, SLSheetPreviewImageSource, UIImage;
@protocol SLSheetViewHostProtocol;

@interface SLComposeServiceViewController : UIViewController <UINavigationControllerDelegate, UITextViewDelegate> {
    NSObject<SLSheetViewHostProtocol> *_hostProxy;
    unsigned long long _unfulfilledItemProviderRepresentations;
    NSMutableArray *_attachments;
    UIImage *_serviceIconImage;
    NSNumber *_charactersRemaining;
    SLSheetMasklayer *_vignetteLayer;
    UIAlertController *_alertController;
    BOOL _isShowingLocationDeniedAlert;
    BOOL _isPresentingActionViewController;
    BOOL _autoCompletionViewControllerAffectsSheetSize;
    SLSheetPreviewImageSource *_previewImageSource;
    UIView *_maskView;
    BOOL _didFirstSheetActionLoad;
    BOOL _didCallPresentSheet;
    BOOL _triggerPresentationAnimationOnKeyboard;
    BOOL _hasPresentedSheet;
    BOOL _inPostButtonTapped;
    BOOL _waitingForAnimateAlongsideTransitionBlock;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sheetFrameStartingRotation;
    UIViewController *_viewControllerForTrackingSheetSize;
}

@property (retain, nonatomic) SLSheetContentView *contentView;
@property (retain) NSMutableArray *constraints;
@property (retain, nonatomic) SLSheetRootViewController *sheetRootViewController;
@property (retain, nonatomic) SLSheetNavigationController *navigationController;
@property (nonatomic) BOOL preventSheetPositionChanges;
@property (readonly) BOOL wasPresented;
@property (nonatomic) BOOL suppressKeyboard;
@property (readonly) UIView *sheetView;
@property (nonatomic) unsigned long long maxImageAttachmentSize;
@property (readonly, nonatomic) UITextView *textView;
@property (readonly, nonatomic) NSString *contentText;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) NSNumber *charactersRemaining;
@property (retain, nonatomic) UIViewController *autoCompletionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)_preventsAppearanceProxyCustomization;
+ (id)_imageAttachmentLoadDownsamplePreviewQueue;

- (id)initWithCoder:(id)a0;
- (id)attachments;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)send;
- (void)loadView;
- (void)keyboardWillHide:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancel;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didReceiveMemoryWarning;
- (id)text;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)shouldAutorotate;
- (void)keyboardWillShow:(id)a0;
- (void).cxx_destruct;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)setTitle:(id)a0;
- (void)_willAppearInRemoteViewController;
- (void)keyboardDidChange:(id)a0;
- (void)textViewDidChange:(id)a0;
- (void)cancelButtonTapped:(id)a0;
- (void)setPlaceholderText:(id)a0;
- (void)addAttachment:(id)a0;
- (void)validateContent;
- (BOOL)isContentValid;
- (void)pushActionViewController:(id)a0;
- (void)reloadSheetActions;
- (void)setHostProxy:(id)a0;
- (id)sheetActions;
- (void)shouldShowNetworkActivityIndicator:(BOOL)a0;
- (void)_addAttachment:(id)a0;
- (void)_positionVignetteForSheetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animateSheetCancelWithDuration:(double)a0;
- (void)didSelectCancel;
- (id)loadPreviewView;
- (void)updateSheetForVerticalSizeClass;
- (id)URLAttachments;
- (void)_adjustContentViewIntrinsicHeightForPreviewView;
- (void)_animateCardSendFinished;
- (void)_animateSheetCancelFinished;
- (void)_animateSheetPresentationFinished;
- (void)_animateVignetteMaskFromSheetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toSheetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 duration:(double)a2;
- (BOOL)_areAttachmentsReady;
- (void)_convertExtensionItemProvidersToAttachments:(id)a0;
- (void)_downsampleImageAttachment:(id)a0;
- (void)_imageAttachmentDataDidLoad:(id)a0;
- (struct CGSize { double x0; double x1; })_intrinsicSheetSize;
- (void)_loadImageAttachmentData:(id)a0;
- (void)_loadPreviewView;
- (void)_performCommonInitialization:(id)a0;
- (void)_positionSheetViewAnimatedForViewController:(id)a0;
- (void)_positionSheetViewForViewController:(id)a0;
- (void)_presentSheet;
- (void)_presentedViewControllerContentSizeDidChange;
- (long long)_previewDisplayFormat;
- (void)_setViewControllerForTrackingSheetSize:(id)a0;
- (double)_sheetMinBottomMarginForVerticalSizeClass;
- (void)_updateContentViewWithCharactersRemaining;
- (void)animateCardSendOrientation:(long long)a0;
- (void)animateSheetPresentationWithDuration:(double)a0;
- (id)configurationItems;
- (void)createPreviewIfNeeded;
- (void)didSelectPost;
- (void)didSendWithSuccess:(BOOL)a0 error:(id)a1;
- (void)hideKeyboardAnimated:(BOOL)a0;
- (void)hideKeyboardWithAnimationTime:(double)a0;
- (id)initWithServiceIconImage:(id)a0;
- (void)networkActivityIndicatorNotification:(id)a0;
- (void)popConfigurationViewController;
- (void)positionSheetView;
- (void)postButtonTapped:(id)a0;
- (void)presentSettingsAlertWithTitle:(id)a0 message:(id)a1 targetURL:(id)a2;
- (void)presentationAnimationDidFinish;
- (id)previewImageSource;
- (void)pushConfigurationViewController:(id)a0;
- (void)reloadConfigurationItems;
- (void)setPostButtonTitle:(id)a0;
- (void)setServiceIconImage:(id)a0;
- (void)setSheetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sheetFrameForViewController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sheetFrameForViewController:(id)a0 topSpaceProportion:(double)a1 topSpaceOffset:(double)a2;
- (void)showKeyboardAnimated:(BOOL)a0;
- (void)showKeyboardWithAnimationTime:(double)a0;
- (void)updateKeyboardSize;

@end
