@class NSArray;

@interface CertInfoTrustDetailsViewController : UIViewController

@property (retain, nonatomic) NSArray *trustProperties;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setupNavItem;

@end
