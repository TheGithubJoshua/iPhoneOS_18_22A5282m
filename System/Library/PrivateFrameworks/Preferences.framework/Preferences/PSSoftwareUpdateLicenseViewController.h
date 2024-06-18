@class NSString, UITextView;

@interface PSSoftwareUpdateLicenseViewController : PSViewController

@property (retain, nonatomic) NSString *licenseTextInfo;
@property (retain, nonatomic) UITextView *licenseTextView;

- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)setLicenseText:(id)a0;
- (id)initWithLicense:(id)a0;

@end
