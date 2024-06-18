@class ACAccount;

@interface RMAccountDetailsViewController : ACUIViewController

@property (retain) ACAccount *account;

- (id)specifiers;
- (void)doneButtonTapped:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)cancelButtonTapped:(id)a0;
- (void)_processUserInfoDictionary;
- (id)_specifiersForAccount;
- (id)accountDescription:(id)a0;
- (id)accountEmail:(id)a0;

@end
