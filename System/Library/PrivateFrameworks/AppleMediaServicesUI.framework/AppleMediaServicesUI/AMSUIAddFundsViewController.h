@class AMSUIWebViewController, NSDictionary, ACAccount, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSUIAddFundsViewController : AMSUICommonViewController

@property (readonly, nonatomic) AMSUIWebViewController *webViewController;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSDictionary *metricsOverlay;

+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)createBagForSubProfile;

- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (id)initWithAccount:(id)a0 bag:(id)a1 clientInfo:(id)a2;

@end
