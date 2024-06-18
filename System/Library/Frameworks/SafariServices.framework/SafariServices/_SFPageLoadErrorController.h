@class NSTimer, NSString, WBSSecIdentitiesCache, NSURL, UINavigationController, _WKRemoteObjectInterface, WBSCertificateWarningPageContext, NSURLRequest, NSURLProtectionSpace, WKWebView;
@protocol WBSCertificateWarningPagePresenter, _SFPageLoadErrorControllerDelegate, SFDialogPresenting;

@interface _SFPageLoadErrorController : NSObject <WBSCertificateWarningPageHandler> {
    BOOL _reloadAfterResume;
    WKWebView *_webView;
    NSTimer *_crashCountResetTimer;
    WBSSecIdentitiesCache *_secIdentitiesCache;
    id<WBSCertificateWarningPagePresenter> _certificateWarningPagePresenterProxy;
    _WKRemoteObjectInterface *_certificateWarningPageHandlerInterface;
    BOOL _certificateWarningPageHandlerInterfaceInvalidated;
    struct __SecTrust { } *_certificateTrust;
    id /* block */ _certificateRecoveryAttempter;
    NSURL *_certificateFailingURL;
    UINavigationController *_certificateNavigationViewController;
    WBSCertificateWarningPageContext *_legacyTLSWarningPageContext;
    NSURL *_clickThroughURL;
}

@property (weak, nonatomic) id<_SFPageLoadErrorControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL reloadingFailedRequest;
@property (readonly, nonatomic) NSURLRequest *failedRequest;
@property (readonly, nonatomic) unsigned long long crashesSinceLastSuccessfulLoad;
@property (weak, nonatomic) id<SFDialogPresenting> dialogPresenter;
@property (retain, nonatomic) NSURLProtectionSpace *protectionSpaceForInvalidCertificateBypass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearOldCertificateBypasses;

- (void)_reachabilityChanged:(id)a0;
- (void)showErrorPageWithTitle:(id)a0 bodyText:(id)a1 learnMoreLink:(id)a2 forError:(id)a3;
- (void)handleLegacyTLSWithFailingURL:(id)a0 clickThroughURL:(id)a1 authenticationChallenge:(id)a2;
- (void)addAlert:(id)a0;
- (void)clearCrashCountResetTimer;
- (id)_titleForError:(id)a0;
- (void)webViewDidCommitErrorPagePreview:(id)a0;
- (void)_resetCrashCount:(id)a0;
- (void)addDialog:(id)a0;
- (void)handleClientCertificateAuthenticationChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)showCertificateInformation;
- (void)addFormAlertWithTitle:(id)a0 decisionHandler:(id /* block */)a1;
- (id)_certificateWarningPagePresenterProxy;
- (void)addInvalidProfileAlert;
- (id)_genericMessageForError:(id)a0;
- (void)performAction:(int)a0 forAlert:(id)a1;
- (void)scheduleResetCrashCount;
- (void)_handleFrameLoadError:(id)a0 forURL:(id)a1 recoveryAttempter:(id /* block */)a2;
- (void)handleFrameLoadError:(id)a0;
- (void)_resetCrashCountSoon;
- (void)_clearCertificateWarningPageHandlerInterface;
- (void)_cacheSecIdentityIfNeeded:(struct __SecIdentity { } *)a0 forIdentityDomain:(id)a1;
- (void)_showRepeatedWebProcessCrashError:(id)a0 URLString:(id)a1;
- (void)handleSubframeCertificateError:(id)a0;
- (void)addDisallowedFileURLAlert;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_continueWithoutCredentialsUsingAlertContext:(id)a0;
- (void)clearFailedRequest;
- (void)_setUpCertificateWarningPageHandlerInterface;
- (void)openClockSettings;
- (void)goBackButtonClicked;
- (void)_setFailedRequest:(id)a0;
- (void)addInvalidURLAlert;
- (void)visitInsecureWebsite;
- (void)addDisallowedUseOfJavaScriptAlert;
- (void)addAlertWithTitle:(id)a0 bodyText:(id)a1;
- (void)dealloc;
- (void)addDownloadFailedAlertWithDescription:(id)a0;
- (void)showErrorPageWithTitle:(id)a0 bodyText:(id)a1 forError:(id)a2;
- (void)_continueAfterCertificateAlertWithURL:(id)a0 trust:(struct __SecTrust { } *)a1 recoveryAttempter:(id /* block */)a2;
- (BOOL)updateCrashesAndShowCrashError:(id)a0 URLString:(id)a1;
- (void)_handleCertificateError:(id)a0 forURL:(id)a1 isMainFrame:(BOOL)a2 recoveryAttempter:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)_loadCertificateWarningPageForContext:(id)a0;
- (void)reloadAfterError;
- (void)visitInsecureWebsiteWithTemporaryBypass;
- (void)_dismissCertificateViewButtonTapped;
- (id)initWithWebView:(id)a0;
- (id)_specializedMessageForError:(id)a0 URL:(id)a1;

@end
