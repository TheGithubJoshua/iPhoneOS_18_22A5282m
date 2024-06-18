@class DMCEnrollmentInterface;

@interface DMCMDMSignoutSpecifierProvider : DMCSpecifierProvider

@property (retain, nonatomic) DMCEnrollmentInterface *enrollmentInterface;

- (id)specifiers;
- (void)_specifierForMDMProfileWasTapped:(id)a0;
- (void).cxx_destruct;
- (id)_specifierForSignoutButton;
- (id)viewController;

@end
