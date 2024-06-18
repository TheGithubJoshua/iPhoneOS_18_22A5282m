@class NSString, CNFRegController;

@interface CNFRegListController : PSListController <CNFRegChangeAccountPasswordDelegate, CNFRegAccountAuthorizationDelegate, IMSystemMonitorListener>

@property (copy, nonatomic) id /* block */ appearBlock;
@property (nonatomic) BOOL showingChildController;
@property (nonatomic) BOOL shouldRerootPreferences;
@property (readonly, nonatomic) BOOL appeared;
@property (readonly, nonatomic) long long currentAppearanceStyle;
@property (retain, nonatomic) CNFRegController *regController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)handleURL:(id)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)loadView;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (void)systemApplicationDidSuspend;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_updateTitle;
- (void)systemApplicationDidBecomeActive;
- (void)systemApplicationDidResume;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)systemApplicationDidEnterBackground;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)setSpecifier:(id)a0;
- (void)systemApplicationWillEnterForeground;
- (void)applicationDidResume;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)systemApplicationWillResignActive;
- (id)logName;
- (BOOL)shouldSelectResponderOnAppearance;
- (id)customTitle;
- (id)initWithParentController:(id)a0;
- (void)changePasswordControllerDidFinish:(id)a0 withAppleID:(id)a1 authID:(id)a2 authToken:(id)a3;
- (id)_existingLabelForSection:(long long)a0 header:(BOOL)a1;
- (id)_existingLabelForSpecifier:(id)a0 header:(BOOL)a1;
- (BOOL)_handleURLDictionary:(id)a0;
- (void)_performAppearBlock;
- (void)_setFieldsEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)_setLabel:(id)a0 forSpecifier:(id)a1 header:(BOOL)a2;
- (void)_setSpecifierEnabled:(id)a0 enabled:(BOOL)a1 animated:(BOOL)a2;
- (void)_setupEventHandlers;
- (BOOL)_showWiFiAlertIfNecessary;
- (void)_updateExistingLabelForSpecifier:(id)a0 header:(BOOL)a1;
- (void)_updateTableLabel:(id)a0 withTableView:(id)a1 isTopMostHeader:(BOOL)a2;
- (void)authorizationController:(id)a0 authorizedAccount:(BOOL)a1;
- (void)changePasswordControllerDidCancel:(id)a0;
- (long long)currentAppearanceStyle;
- (id)initWithRegController:(id)a0;
- (void)removeAllHandlers;
- (id)specifierList;
- (BOOL)wantsWiFiChooser;

@end
