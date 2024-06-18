@class NSString, CSStatusTextViewController, CSFixedFooterView;
@protocol SBFAuthenticationStatusProvider;

@interface CSFixedFooterViewController : CSCoverSheetViewControllerBase <CSStatusTextViewControllerDelegate> {
    CSStatusTextViewController *_statusTextViewController;
    NSString *_cachedMesaFailureText;
    BOOL _temporaryMesaFailureTextActive;
    BOOL _authenticatedSinceFingerOn;
}

@property (retain, nonatomic) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;
@property (readonly, nonatomic) CSFixedFooterView *fixedFooterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (id)init;
- (void)updateCallToActionForReversingInteractiveTransition;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_addStatusTextViewControllerIfNecessary;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)handleEvent:(id)a0;
- (void).cxx_destruct;
- (void)_updateCallToActionTextAnimated:(BOOL)a0;
- (void)coverSheetStatusTextViewControllerContentDidChange:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateCallToActionForMesaMatchFailure;

@end
