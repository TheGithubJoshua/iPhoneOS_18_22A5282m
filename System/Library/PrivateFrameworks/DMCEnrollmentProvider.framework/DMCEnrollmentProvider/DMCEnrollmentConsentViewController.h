@class NSString, NSNumber, MCProfile;
@protocol DMCEnrollmentConsentViewControllerDelegate;

@interface DMCEnrollmentConsentViewController : DMCEnrollmentTemplateTableViewController

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *orgName;
@property (retain, nonatomic) NSNumber *requiredAppID;
@property (retain, nonatomic) MCProfile *profile;
@property (weak) id<DMCEnrollmentConsentViewControllerDelegate> delegate;

- (void)loadView;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)_cellDataForESSOBYODDisclosure;
- (id)_cellDataForRegularBYODDisclosure;
- (id)initWithDelegate:(id)a0 username:(id)a1 profile:(id)a2;

@end
