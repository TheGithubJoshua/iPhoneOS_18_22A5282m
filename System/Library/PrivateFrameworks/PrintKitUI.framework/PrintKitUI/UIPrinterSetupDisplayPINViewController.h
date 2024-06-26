@class PKPrinter;

@interface UIPrinterSetupDisplayPINViewController : UIViewController

@property (retain, nonatomic) PKPrinter *printer;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)enterPIN;
- (id)initWithPrinter:(id)a0;
- (void)showDisplayMessage:(long long)a0;

@end
