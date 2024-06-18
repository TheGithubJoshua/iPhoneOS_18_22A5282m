@class _SFWebProcessPlugInPageController, NSString, _WKRemoteObjectInterface, WBSCertificateWarningPageContext;
@protocol WBSCertificateWarningPageHandler;

@interface SFWebProcessPlugInCertificateWarningController : NSObject <WBSCertificateWarningPagePresenter> {
    _SFWebProcessPlugInPageController *_pageController;
    _WKRemoteObjectInterface *_certificateWarningPagePresenterInterface;
    WBSCertificateWarningPageContext *_warningPageContext;
    id<WBSCertificateWarningPageHandler> _certificateWarningPageHandlerProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showCertificateInformation;
- (id)initWithPageController:(id)a0;
- (void)certificateWarningPageLoaded;
- (void)goBackSelected;
- (void).cxx_destruct;
- (void)_clearCertificateWarningPagePresenterInterface;
- (void)openClockSettings;
- (void)visitInsecureWebsite;
- (void)_setUpCertificateWarningPagePresenterInterface;
- (void)dealloc;
- (id)_certificateWarningPageHandlerProxy;
- (void)injectCertificateWarningBindingsForFrame:(id)a0 inScriptWorld:(id)a1;
- (void)prepareCertificateWarningPage:(id)a0;
- (void)visitInsecureWebsiteWithTemporaryBypass;

@end
