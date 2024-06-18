@interface RMAccountsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController

- (id)specifiers;
- (void)viewDidLoad;
- (Class)accountInfoControllerClass;
- (id)messageForAccountDeletionWarning;
- (id)titleForDeleteButton;
- (void)_reloadSpecifiersAndDeleteAccountButton;

@end
