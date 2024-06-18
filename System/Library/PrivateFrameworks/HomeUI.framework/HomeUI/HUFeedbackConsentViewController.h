@class WKWebView;
@protocol HUFeedbackConsentViewControllerDelegate;

@interface HUFeedbackConsentViewController : UIViewController

@property (retain, nonatomic) WKWebView *consentView;
@property (nonatomic) BOOL isFamilyAndFriendsConsent;
@property (retain, nonatomic) id<HUFeedbackConsentViewControllerDelegate> consentDelegate;

- (void)loadView;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (void)dealloc;
- (id)htmlString;
- (id)consentFormFilePath;
- (void)didAcceptConsent;
- (void)didDeclineConsent;
- (id)initWithConsentDelegate:(id)a0;

@end
