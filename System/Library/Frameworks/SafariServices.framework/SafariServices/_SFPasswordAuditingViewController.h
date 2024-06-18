@class WBSPasswordWarning, SFActionableSecurityRecommendationData, NSObject, WBSSavedAccount, WBSPasswordWarningManager, SFSafariViewController, WBSAutoFillQuirksManager, _SFSiteMetadataManager, SFTableViewDiffableDataSource, ASAccountAuthenticationModificationController, NSString, UIActivityIndicatorView, NSArray, WBSPasswordGenerationManager, WBSSavedAccountStore, _SFTableLinkableFooterView;
@protocol OS_dispatch_queue, _SFPasswordAuditingViewControllerDelegate;

@interface _SFPasswordAuditingViewController : _SFAccountTableViewController <SFAccountTableViewCellDelegate, SFAccountDetailViewControllerDelegate, SFActionableSecurityRecommendationDataDelegate, SFTableViewDiffableDataSourceDelegate, SFPasswordBreachToggleCellDelegate, _ASAccountAuthenticationModificationExtensionManagerObserver, ASAccountAuthenticationModificationControllerDelegate, ASAccountAuthenticationModificationControllerPresentationContextProviding, _SFTableLinkableFooterViewDelegate, PSStateRestoration> {
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    WBSSavedAccountStore *_savedAccountStore;
    SFTableViewDiffableDataSource *_tableViewDiffableDataSource;
    WBSPasswordWarningManager *_passwordWarningManager;
    NSArray *_highPriorityRecommendationData;
    NSArray *_flaggedPasswordData;
    NSObject<OS_dispatch_queue> *_diffableDataSourceQueue;
    unsigned long long _numberOfWarnings;
    UIActivityIndicatorView *_spinner;
    SFSafariViewController *_changePasswordOnWebsiteSafariViewController;
    SFActionableSecurityRecommendationData *_recommendationForMostRecentSafariViewController;
    unsigned long long _persona;
    WBSPasswordGenerationManager *_passwordGenerator;
    SFActionableSecurityRecommendationData *_passwordDataForCurrentUpgrade;
    ASAccountAuthenticationModificationController *_accountAuthenticationModificationController;
    _SFTableLinkableFooterView *_passwordBreachFooterView;
    WBSPasswordWarning *_warningHiddenInDetailView;
    WBSPasswordWarning *_warningDeletedInDetailView;
    _SFSiteMetadataManager *_siteMetadataManager;
    NSArray *_hiddenRecommendationData;
}

@property (weak, nonatomic) id<_SFPasswordAuditingViewControllerDelegate> delegate;
@property (retain, nonatomic) WBSSavedAccount *savedAccountToRemoveAfterCompletedUpgradeInDetailView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hiddenSecurityRecommendationsViewControllerWithWarningData:(id)a0 siteMetadataManager:(id)a1 passwordWarningManager:(id)a2;
+ (id)securityRecommendationsViewControllerWithSiteMetadataManager:(id)a0 autoFillQuirksManager:(id)a1 passwordWarningManager:(id)a2;

- (void)viewDidDisappear:(BOOL)a0;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (BOOL)dataSource:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)dataSource:(id)a0 headerTextForSection:(long long)a1;
- (BOOL)canBeShownFromSuspendedState;
- (void)_completedStrongPasswordUpgrade;
- (void)_accountStoreDidUpdate;
- (void)_addHiddenSecurityRecommendationsSectionIfNecessary;
- (void)_addWarningToHiddenRecommendationData:(id)a0;
- (id)_cellForIdentifier:(id)a0 indexPath:(id)a1;
- (void)_changePasswordOnWebsiteForActionableSecurityRecommendation:(id)a0;
- (void)_completedSignInWithAppleUpgrade;
- (void)_configureSecurityRecommendationInformationCell:(id)a0 withActionableRecommendationData:(id)a1;
- (id)_contextMenuActionTitleForSecurityRecommendation;
- (void)_findAndRemoveEntryForSavedAccount:(id)a0;
- (id)_hiddenSecurityRecommendationsCell;
- (void)_hideSecurityRecommendationAtIndexPath:(id)a0;
- (void)_initiateChangeToStrongPasswordForActionableSecurityRecommendation:(id)a0;
- (id)_passwordBreachFooterTextForDeviceClass:(int)a0;
- (id)_passwordBreachFooterView;
- (id)_passwordBreachToggleCell;
- (id)_passwordGenerationManager;
- (void)_presentHideSecurityRecommendationConfirmationAlertForRecommendationAtIndexPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)_reloadSavedAccountsForceUpdate:(BOOL)a0;
- (void)_reloadTableViewDiffableDataSource;
- (void)_reloadTableViewDiffableDataSourceAnimated:(BOOL)a0;
- (void)_reloadTableViewDiffableDataSourceOnInternalQueueAnimated:(BOOL)a0;
- (void)_reloadTableViewDiffableDataSourceOnInternalQueueForHiddenSecurityRecommendationsPersona;
- (void)_reloadTableViewDiffableDataSourceOnInternalQueueForSecurityRecommendationsPersonaAnimated:(BOOL)a0;
- (void)_removeAddressedActionableRecommendation:(id)a0;
- (void)_removeHideMarkerForWarning:(id)a0;
- (void)_removeHideWarningMarkerForSavedAccount:(id)a0;
- (void)_resetHiddenSecurityRecommendations;
- (id)_resetHiddenSecurityRecommendationsCell;
- (id)_standardRecommendationCellWithPasswordCellData:(id)a0;
- (id)_swipeActionTitleForSecurityRecommendation;
- (void)_unhideHiddenSecurityRecommendationAtIndexPath:(id)a0;
- (void)_upgradeToSignInWithAppleForActionableSecurityRecommendation:(id)a0;
- (id)_warningStringForPasswordCellData:(id)a0;
- (void)accountAuthenticationModificationController:(id)a0 didFailRequest:(id)a1 withError:(id)a2;
- (void)accountAuthenticationModificationController:(id)a0 didSuccessfullyCompleteRequest:(id)a1 withUserInfo:(id)a2;
- (void)accountDetailViewController:(id)a0 didDeleteAccountWithWarning:(id)a1;
- (void)accountDetailViewController:(id)a0 didHideWarning:(id)a1;
- (void)accountModificationExtensionManagerExtensionListDidChange:(id)a0;
- (void)actionableSecurityRecommendationDataDidUpdate:(id)a0;
- (void)didSetPasswordBreachDetectionState:(BOOL)a0;
- (id)initWithPersona:(unsigned long long)a0 siteMetadataManager:(id)a1 autoFillQuirksManager:(id)a2 passwordWarningManager:(id)a3;
- (void)linkableFooterViewDidInteractWithLink:(id)a0;
- (id)passwordGeneratorForAccountDetailViewController:(id)a0;
- (id)passwordWarningManagerForAccountDetailViewController:(id)a0;
- (id)presentationAnchorForAccountAuthenticationModificationController:(id)a0;

@end