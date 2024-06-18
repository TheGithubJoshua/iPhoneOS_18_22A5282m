@class VPScannerView, NSString, UIView, UILabel, UIButton;

@interface VPScannerViewController : UIViewController

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *pairManuallyButton;
@property (retain, nonatomic) VPScannerView *scannerView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *viewfinderView;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (copy, nonatomic) id /* block */ scannedCodeHandler;
@property (copy, nonatomic) NSString *titleMessage;

+ (id)instantiateViewController;

- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)handleCancelButton:(id)a0;
- (void)handlePairManuallyButton:(id)a0;

@end
