@class NSString, NSArray, NSTimer, TUIPredictionView, NSDate, TIAutocorrectionList;

@interface UIPredictionViewController : UIViewController <TUIPredictionViewDelegate, UIKeyboardAutocorrectionObserver, UIPredictiveViewController> {
    NSTimer *_updateUITimer;
    NSDate *_lastUIUpdateTime;
}

@property (retain, nonatomic) TIAutocorrectionList *cachedAutocorrectionList;
@property (readonly, nonatomic) TUIPredictionView *predictionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *displayedCandidates;

- (BOOL)requiresKeyboard;
- (void)_registerForNotifications;
- (void)predictionView:(id)a0 didSelectCandidate:(id)a1;
- (void)loadView;
- (void)autocorrectionController:(id)a0 didUpdateAutocorrectionList:(id)a1;
- (void)_clearTextSuggestions;
- (BOOL)_autocorrectionListMayCausePredictionViewToReappear:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updateAutocorrectionList:(id)a0;
- (void)_inputModeDidChange;
- (double)preferredHeightForTraitCollection:(id)a0;
- (void).cxx_destruct;
- (BOOL)hidesExpandableButton;
- (void)autocorrectionControllerDidClearAutocorrections:(id)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)isVisibleForInputDelegate:(id)a0 inputViews:(id)a1;
- (id)_currentTextSuggestions;
- (void)dealloc;
- (void)_throttledUpdateUIWithAutocorrectionList:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_performThrottledUpdateUIWithAutocorrectionList:(id)a0;
- (void)_inputResponderDidChangeNotification:(id)a0;
- (BOOL)_autocorrectionListContainsContinuousPathConversions:(id)a0;
- (void)_registerAsAutocorrectionObserver;
- (BOOL)_isVisibleForAutocorrectionType:(long long)a0;

@end
