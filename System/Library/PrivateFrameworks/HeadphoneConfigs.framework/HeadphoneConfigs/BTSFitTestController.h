@class UIImage, BTSDevice, UILabel, AVSystemController, OBTrayButton, UIView, OBWelcomeController, NSLayoutConstraint, OBLinkTrayButton, UIActivityIndicatorView, UIStackView, AVAudioPlayer, UIImageView;

@interface BTSFitTestController : UIViewController {
    BTSDevice *currentDevice;
    OBWelcomeController *_fitTestController;
    OBTrayButton *_playButton;
    OBLinkTrayButton *_debugCopyResultsButton;
    NSLayoutConstraint *_topSpacerConstraint;
    AVSystemController *_avSystemController;
    AVAudioPlayer *_player;
    UIView *_fitTestContentView;
    UIStackView *_stackViewImages;
    UIImageView *_leftImView;
    UIImageView *_rightImView;
    UIView *_leftBudLabel;
    UILabel *_leftBudLabelText;
    UIView *_rightBudLabel;
    UILabel *_rightBudLabelText;
    UILabel *_leftBudResultLabel;
    UILabel *_rightBudResultLabel;
    UIImage *_buttonImage;
    UIActivityIndicatorView *_spinner;
    UILabel *_resultDetailLabel;
    BOOL _budsInEar;
    BOOL _testActive;
    BOOL _callActive;
    BOOL _darkMode;
    BOOL _volumeModified;
    float _initialVolume;
}

- (BOOL)isiPad;
- (id)initWithDevice:(id)a0;
- (BOOL)isCallActive;
- (void)applicationDidBecomeActive:(id)a0;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)setupConstraints;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)isDebugModeEnabled;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (BOOL)isSmallScreenDevice;
- (void)handleAudioSessionInterruption:(id)a0;
- (void)cleanupAudio;
- (void)copyToClipboard;
- (void)setCancelAction;
- (void)deviceDisconnectedHandler:(id)a0;
- (void)dismissFitTest;
- (void)fitTestStopped;
- (float)getConfidenceThreshold;
- (id)getImageFileName:(unsigned int)a0 forSide:(BOOL)a1;
- (float)getSealThreshold;
- (void)handleCallIsActiveDidChangeNotification:(id)a0;
- (void)handleMediaServerConnectionDied:(id)a0;
- (void)inEarStatusChanged:(id)a0;
- (void)powerChangedHandler:(id)a0;
- (void)removeDoneButton;
- (void)resetVolume;
- (void)sealValueChanged:(id)a0;
- (void)setupFitTestContentView;
- (void)startFitTest;
- (void)updateFitTestActiveState;

@end
