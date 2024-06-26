@class AVCaptureSession, NSString, UIView, AVCaptureVideoPreviewLayer;
@protocol SFAccountOtpauthQRCodeScannerViewControllerDelegate;

@interface SFAccountOtpauthQRCodeScannerViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate> {
    AVCaptureSession *_captureSession;
    AVCaptureVideoPreviewLayer *_previewLayer;
    UIView *_viewfinderView;
}

@property (weak, nonatomic) id<SFAccountOtpauthQRCodeScannerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)_dismiss:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)captureOutput:(id)a0 didOutputMetadataObjects:(id)a1 fromConnection:(id)a2;
- (void)_configureCaptureSession;

@end
