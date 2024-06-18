@class NSString, _HPSUIBetaEnrollmentViewController;

@interface HPSUIBetaEnrollmentViewController : UIViewController <HomePlatformSettingsUI.BetaEnrollmentClientInterface>

@property (retain, nonatomic) NSString *homeID;
@property (retain, nonatomic) _HPSUIBetaEnrollmentViewController *internalVC;

+ (void)shouldShowBetaEnrollmentButtonForHomeID:(id)a0 withCompletion:(id /* block */)a1;

- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithHomeID:(id)a0;
- (void)configureInternalVC;
- (void)setBackgroundColorIfNeeded;

@end
