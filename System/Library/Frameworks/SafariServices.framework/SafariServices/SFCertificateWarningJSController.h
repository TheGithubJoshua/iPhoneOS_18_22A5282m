@class SFWebProcessPlugInCertificateWarningController;

@interface SFCertificateWarningJSController : NSObject <SFCertificateWarningJSControllerMethods> {
    SFWebProcessPlugInCertificateWarningController *_certificateWarningController;
}

- (void)showCertificateInformation;
- (void)goBackSelected;
- (void).cxx_destruct;
- (void)openClockSettings;
- (void)visitInsecureWebsite;
- (void)visitInsecureWebsiteWithTemporaryBypass;
- (id)initWithCertificateWarningController:(id)a0;
- (void)pageLoaded;

@end
