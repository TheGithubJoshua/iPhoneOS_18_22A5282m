@class NSURL, UILabel, HMCameraClipFetchVideoAssetContextOperation, HUCameraRecordingPlayerView, HMCameraClip, UIButton, NSString, AVPlayerLooper, AVQueuePlayer, UIActivityIndicatorView, UITextView, NSOperationQueue, HMCameraProfile;

@interface HUCameraRecordingExportPreviewViewController : UIViewController <UITextViewDelegate>

@property (weak, nonatomic) HMCameraClip *cameraClip;
@property (weak, nonatomic) HMCameraProfile *cameraProfile;
@property (retain, nonatomic) NSURL *exportURL;
@property (retain, nonatomic) HMCameraClipFetchVideoAssetContextOperation *videoDownloadOperation;
@property (nonatomic) BOOL hasVideoPreview;
@property (weak, nonatomic) AVQueuePlayer *queuePlayer;
@property (retain, nonatomic) AVPlayerLooper *looper;
@property (retain, nonatomic) HUCameraRecordingPlayerView *playerView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *submitButton;
@property (retain, nonatomic) UITextView *learnMoreTextView;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) id queuePlayerObserver;
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView;
@property (retain, nonatomic) NSOperationQueue *backgroundSessionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)viewWillAppear:(BOOL)a0;
- (void)_addConstraints;
- (void)didDismissPrivacyViewController;
- (void)_displayFailureToSubmitAlert;
- (void)_loadLoadingInterface;
- (void)_loadPreviewInterface;
- (void)_stripAndTruncateRecording;
- (void)cancelSubmission;
- (id)initWithCameraClip:(id)a0 cameraProfile:(id)a1 completionHandler:(id /* block */)a2;
- (void)playVideoFile;
- (void)prepareRecordingForExport;
- (void)showPrivacyInformation;
- (void)submitCurrentClip;

@end
