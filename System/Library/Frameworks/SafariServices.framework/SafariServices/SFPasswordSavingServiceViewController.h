@class NSURLCredential, NSString, NSArray, NSExtension, _ASAccountAuthenticationModificationHostViewController, UIAlertController, WBSPasswordWarning, WBSAutoFillQuirksManager, WBSSavedAccountStore;

@interface SFPasswordSavingServiceViewController : SFPasswordServiceViewController <_ASAccountAuthenticationModificationExtensionManagerObserver, _ASAccountAuthenticationModificationHostViewControllerDelegate, SFPasswordSavingServiceViewControllerProtocol> {
    long long _action;
    NSArray *_protectionSpacesToUpdate;
    NSString *_domainForSavePasswordAction;
    NSURLCredential *_credential;
    NSString *_tokenForShowingPrompt;
    UIAlertController *_prompt;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    WBSPasswordWarning *_passwordWarning;
    NSExtension *_accountModificationExtension;
    _ASAccountAuthenticationModificationHostViewController *_accountModificationHostViewController;
    WBSSavedAccountStore *_savedAccountStore;
    BOOL _supportsUpgradeToStrongPassword;
    BOOL _supportsUpgradeToSignInWithApple;
    BOOL _passwordIsWeakEnoughForActiveWarning;
    BOOL _passwordHasLikelyBeenCompromised;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)credentialsSubmittedForWebsiteURL:(id)a0 user:(id)a1 password:(id)a2 passwordIsAutoGenerated:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)_initiateChangeToStrongPassword;
- (void)_addChangePasswordOnWebsiteActionToPrompt;
- (void)_addChangeToStrongPasswordActionToPrompt;
- (void)_addUpgradeToSignInWithAppleActionToPrompt;
- (void)_checkIfWarningStoreAlreadyContainsCredentialWithCompletionHandler:(id /* block */)a0;
- (void)_configureSecurityPromptActionsWithCompletionHandler:(id /* block */)a0;
- (void)_initiateUpgradeToSignInWithApple;
- (id)_messageStringForAccountModificationPrompt;
- (void)_openPasswordManagerToChangePasswordOnWebsite;
- (void)_removeCredential:(id)a0;
- (void)_saveCredential:(id)a0;
- (void)_showAccountModificationPrompt;
- (id)_titleStringForAccountModificationPrompt;
- (void)_updateCredential:(id)a0;
- (void)showPromptWithToken:(id)a0 style:(long long)a1;

@end