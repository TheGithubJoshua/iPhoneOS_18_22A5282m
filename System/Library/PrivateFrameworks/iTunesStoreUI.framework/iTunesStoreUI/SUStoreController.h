@class ISOperation, NSString, NSURL, UINavigationController, NSArray, UIWindow, MFMailComposeViewController, NSDictionary, SUSectionsResponse, SUClient, SUTabBarController;

@interface SUStoreController : NSObject <SUClientDelegate, SUPurchaseManagerDelegate, SUTabBarControllerDelegate, UIApplicationDelegate, MFMailComposeViewControllerDelegate> {
    SUClient *_client;
    SUSectionsResponse *_lastBackgroundSectionsResponse;
    SUSectionsResponse *_lastSectionsResponse;
    ISOperation *_loadSectionsOperation;
    NSString *_localStoreFrontAtLastSuspend;
    id _locationObserver;
    NSArray *_overlayConfigurations;
    BOOL _reloadForStorefrontChangeAfterAccountSetup;
    BOOL _reloadSectionsOnNextLaunch;
    NSString *_synchedStoreFrontAtLastSuspend;
    MFMailComposeViewController *_mailComposeViewController;
    NSDictionary *_storeFrontLanguages;
}

@property (retain, nonatomic) NSURL *launchURL;
@property (readonly, nonatomic) NSString *defaultPNGNameForSuspend;
@property (readonly, nonatomic, getter=isTabBarControllerLoaded) BOOL tabBarControllerLoaded;
@property (readonly, nonatomic) SUTabBarController *tabBarController;
@property (readonly, nonatomic) UINavigationController *topNavigationController;
@property (readonly, nonatomic, getter=isStoreEnabled) BOOL storeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIWindow *window;

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)a0;

- (id)init;
- (void)cancelAllOperations;
- (void)connect;
- (void)_storeFrontChangedNotification:(id)a0;
- (BOOL)application:(id)a0 handleOpenURL:(id)a1;
- (void)dealloc;
- (double)defaultImageSnapshotExpiration;
- (void)tabBarController:(id)a0 didEndCustomizingViewControllers:(id)a1 changed:(BOOL)a2;
- (void)setupUI;
- (void)prepareForSuspend;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)_restrictionsChangedNotification:(id)a0;
- (void)purchaseManager:(id)a0 didAddPurchases:(id)a1;
- (void)purchaseManager:(id)a0 failedToAddPurchases:(id)a1;
- (void)purchaseManager:(id)a0 willAddPurchases:(id)a1;
- (void)purchaseManagerDidEndUpdates:(id)a0;
- (void)purchaseManagerWillBeginUpdates:(id)a0;
- (BOOL)_isAccountViewControllerVisible;
- (id)overlayBackgroundViewController;
- (void)_accountControllerDisappearedNotification:(id)a0;
- (void)_bagDidLoadNotification:(id)a0;
- (void)_cancelLoadSectionsOperation;
- (void)_cancelSuspendAfterDialogsDismissed;
- (void)_defaultHandleApplicationURLRequestProperties:(id)a0;
- (void)_dialogDidFinishNotification:(id)a0;
- (void)_handleAccountURL:(id)a0;
- (void)_handleFinishedBackgroundLoadSectionsOperation:(id)a0;
- (void)_handleFinishedLoadSectionsOperation:(id)a0;
- (void)_handleSearchURL:(id)a0;
- (void)_handleSectionsLoadFailedWithError:(id)a0;
- (BOOL)_loadSectionsAllowingCache:(BOOL)a0 withCompletionBlock:(id /* block */)a1;
- (void)_mainThreadStoreFrontChangedNotification:(id)a0;
- (void)_presentSectionFetchUI;
- (void)_reloadForNetworkTypeChange:(id)a0;
- (BOOL)_reloadForStorefrontChange;
- (void)_reloadOverlayConfigurations;
- (void)_reloadWithSectionsResponse:(id)a0;
- (id)_resumableViewController;
- (void)_retrySectionsAfterNetworkTransition;
- (void)_saveArchivedNavigationPath;
- (void)_selectFooterSectionNotification:(id)a0;
- (BOOL)_showWildcatAccountViewController:(id)a0 animated:(BOOL)a1;
- (void)beginPurchaseBatch;
- (BOOL)client:(id)a0 openInternalURL:(id)a1;
- (BOOL)client:(id)a0 presentAccountViewController:(id)a1 animated:(BOOL)a2;
- (BOOL)client:(id)a0 presentModalViewController:(id)a1 animated:(BOOL)a2;
- (void)composeEmailByRestoringAutosavedMessage;
- (void)composeEmailWithSubject:(id)a0 body:(id)a1;
- (id)copySuspendSettings;
- (void)dismissMailComposeViewControllerAnimated:(BOOL)a0;
- (void)dismissOverlayBackgroundViewController;
- (id)downloadQueueForClient:(id)a0 downloadKinds:(id)a1;
- (void)endPurchaseBatch;
- (void)exitStoreAfterDialogsDismiss;
- (void)exitStoreWithReason:(long long)a0;
- (void)handleApplicationURL:(id)a0;
- (BOOL)isComposingEmail;
- (BOOL)libraryContainsItemIdentifier:(unsigned long long)a0;
- (BOOL)matchesClientApplication:(id)a0;
- (id)newScriptInterface;
- (id)overlayConfigurationForStorePage:(id)a0;
- (void)presentExternalURLViewController:(id)a0;
- (void)presentMailComposeViewController:(id)a0 animated:(BOOL)a1;
- (BOOL)presentOverlayBackgroundViewController:(id)a0;
- (BOOL)reloadSectionWithIdentifier:(id)a0 url:(id)a1;
- (BOOL)selectSectionWithIdentifier:(id)a0;
- (BOOL)showDialogForCapabilities:(id)a0 mismatches:(id)a1;
- (id)storeContentLanguage;
- (void)tearDownUI;
- (id)topViewControllerForClient:(id)a0;

@end