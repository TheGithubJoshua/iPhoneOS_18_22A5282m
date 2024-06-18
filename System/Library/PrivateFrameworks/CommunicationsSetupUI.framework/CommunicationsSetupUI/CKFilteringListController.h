@class NSString, PSSpecifier, CKNSExtension, NSArray, NSMutableArray, NSDictionary;

@interface CKFilteringListController : PSListController

@property (nonatomic) BOOL addCheckmark;
@property (retain, nonatomic) id beginMappingID;
@property (retain, nonatomic) CKNSExtension *ckExtension;
@property (retain, nonatomic) NSString *currentExtensionID;
@property (retain, nonatomic) PSSpecifier *selectedSpecifier;
@property (retain, nonatomic) NSMutableArray *specifierListArray;
@property (retain, nonatomic) NSArray *extensionIDArray;
@property (retain, nonatomic) NSDictionary *extensionNameMapping;
@property (nonatomic) BOOL showingParentViewController;
@property (nonatomic) long long spamFilterState;

- (id)specifiers;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)applicationWillSuspend;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)endMatchingExtensions;
- (void)applicationDidResume;
- (id)_syncManager;
- (void)appendAboutWiFiCallingFooterToGroupSpecifier:(id)a0;
- (void)grayOutSMSFilteringIfNecessary:(id)a0;
- (void)shouldShowPrivacyAccessWarning:(id)a0;
- (void)_updateSMSFilteringParams;
- (void)disableSpamFiltering;
- (void)enableSpamFiltering:(id)a0;
- (unsigned char)enableSpamForExtensionID:(id)a0 withName:(id)a1;
- (void)findSpamExtensions;
- (id)getDefaultExtension;
- (id)getExtensionNameAndWarning:(id)a0;
- (id)getSpamSpecifiers;
- (id)isConversationListFilteringEnabled:(id)a0;
- (id)isSpamFilteringEnabled:(id)a0;
- (void)setConversationListFilteringEnabled:(id)a0 specifier:(id)a1;
- (void)setIsSpamFilteringDefaultEnabled;
- (void)showPrivacyLegalVC;
- (void)tappedNoFilterCell:(id)a0;
- (void)tappedSpamAppCell:(id)a0;
- (void)userChangedSpamFilteringSettings;
- (BOOL)verifyCurrentExtensionIDValidity;

@end
