@class NSString, NSArray, NSDate;
@protocol CertInfoSheetViewControllerDelegate;

@interface CertInfoSheetViewController : UIViewController

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *trustTitle;
@property (retain, nonatomic) NSString *trustSubtitle;
@property (retain, nonatomic) NSString *trustPurpose;
@property (retain, nonatomic) NSDate *trustExpiration;
@property (retain, nonatomic) NSArray *trustProperties;
@property (weak, nonatomic) id<CertInfoSheetViewControllerDelegate> delegate;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_cancel;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_accept;
- (void)_dismissWithResult:(int)a0;
- (void)_pushDetailsView;
- (void)_setupNavItem;

@end
