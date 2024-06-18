@class UIPrinterSetupConnectingView, UIPrinterSetupPINView, UIScrollView, PKPrinter;

@interface UIPrinterSetupPINViewController : UIViewController

@property (retain, nonatomic) PKPrinter *printer;
@property (retain, nonatomic) UIPrinterSetupConnectingView *connectingView;
@property (retain, nonatomic) UIPrinterSetupPINView *PINView;
@property (retain, nonatomic) UIScrollView *scrollView;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)connected:(BOOL)a0;
- (void)connectToPrinter;
- (id)initWithPrinter:(id)a0;
- (void)showFailure;
- (void)showSetup;

@end
