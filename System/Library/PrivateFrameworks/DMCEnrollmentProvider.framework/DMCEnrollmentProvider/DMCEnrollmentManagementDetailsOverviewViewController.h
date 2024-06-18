@class NSString, MCProfile;
@protocol DMCEnrollmentManagementDetailsOverviewViewControllerDelegate;

@interface DMCEnrollmentManagementDetailsOverviewViewController : DMCEnrollmentTemplateTableViewController

@property (copy, nonatomic) NSString *managedAppleID;
@property (retain, nonatomic) MCProfile *profile;
@property (weak) id<DMCEnrollmentManagementDetailsOverviewViewControllerDelegate> delegate;

- (void)loadView;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setupNavigationBar;
- (id)initWithDelegate:(id)a0 managedAppleID:(id)a1 profile:(id)a2;
- (void)leftBarButtonTapped:(id)a0;

@end
