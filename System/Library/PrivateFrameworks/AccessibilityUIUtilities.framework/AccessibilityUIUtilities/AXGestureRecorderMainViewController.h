@class AXGestureRecorderViewController, AXGestureRecorderControlsView, UIView, NSString, AXAssertion, AXGestureRecorderStyleProvider, UILabel, UIBarButtonItem;
@protocol AXGestureRecorderMainViewControllerDelegate;

@interface AXGestureRecorderMainViewController : PSViewController <AXGestureRecorderViewControllerDelegate, AXGestureRecorderControlsViewDelegate, UITextFieldDelegate>

@property (retain, nonatomic) AXGestureRecorderStyleProvider *styleProvider;
@property (retain, nonatomic) AXGestureRecorderViewController *gestureRecorderViewController;
@property (retain, nonatomic) AXGestureRecorderControlsView *controlsView;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *instructionsLabel;
@property (retain, nonatomic) UIBarButtonItem *saveButton;
@property (nonatomic) unsigned long long leftButtonIdentifier;
@property (nonatomic) unsigned long long rightButtonIdentifier;
@property (nonatomic) double gestureRecordingDidStartTimeInterval;
@property (nonatomic, getter=isInReplayMode) BOOL inReplayMode;
@property (retain, nonatomic) AXAssertion *disableSystemGesturesAssertion;
@property (weak, nonatomic) id appDidResignActiveNotificationHandlerToken;
@property (nonatomic) long long recorderType;
@property (nonatomic) BOOL isDisplayLinkInEffect;
@property (weak, nonatomic) id<AXGestureRecorderMainViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)_reset;
- (id)init;
- (id)initWithType:(long long)a0;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)_commonInit;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_clearProgressView;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)_cancelButtonTapped:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)_releaseOutlets;
- (void)gestureRecorderViewControllerDidFinishReplayingRecordedGesture:(id)a0;
- (BOOL)_canSaveGestureWithName:(id)a0;
- (id)_defaultInstructionalText;
- (void)_didSaveGestureWithName:(id)a0;
- (void)_enterReplayMode;
- (void)_enterWaitingMode;
- (void)_getButtonPropertiesForIdentifier:(unsigned long long)a0 enabled:(BOOL)a1 color:(int *)a2 title:(id *)a3;
- (void)_hide;
- (void)_hideChrome;
- (void)_hideChromeButtonTapped:(id)a0;
- (BOOL)_isForRealTimeGesture;
- (void)_manageDisplayLinkManager:(BOOL)a0;
- (void)_saveButtonTapped:(id)a0;
- (void)_savePoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_saveReplayableGesture;
- (void)_saveWithMessage:(id)a0;
- (void)_setLeftButtonIdentifier:(unsigned long long)a0 enabled:(BOOL)a1 rightButtonIdentifier:(unsigned long long)a2 enabled:(BOOL)a3 animate:(BOOL)a4 completion:(id /* block */)a5;
- (void)_unhideChrome;
- (void)_updateProgressView:(id)a0;
- (void)gestureRecorderControlsView:(id)a0 buttonTappedAtIndex:(unsigned long long)a1;
- (void)gestureRecorderViewController:(id)a0 didStartRecordingAtomicFingerPathAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)gestureRecorderViewController:(id)a0 setChromeVisible:(BOOL)a1;
- (void)gestureRecorderViewControllerDidStopRecordingAtomicFingerPath:(id)a0;
- (BOOL)isChromeVisibleForGestureRecorderViewController:(id)a0;
- (double)maximumDurationOfRecordedGestureForGestureRecorderViewController:(id)a0;

@end