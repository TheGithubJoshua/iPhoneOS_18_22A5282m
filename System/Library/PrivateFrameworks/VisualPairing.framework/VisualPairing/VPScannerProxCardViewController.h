@class VPScannerView;

@interface VPScannerProxCardViewController : UIViewController

@property (retain, nonatomic) VPScannerView *scannerView;
@property (copy, nonatomic) id /* block */ scannedCodeHandler;

- (void)stop;
- (void)start;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;

@end
