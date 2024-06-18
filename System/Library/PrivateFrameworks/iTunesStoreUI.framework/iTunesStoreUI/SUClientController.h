@class SUClientInterface, NSString, ISURLOperationPool, MFMailComposeViewController, SUImageCache, NSArray, NSMutableDictionary, NSObject, UIViewController, SUScriptExecutionContext;
@protocol OS_dispatch_queue;

@interface SUClientController : NSObject <SUClientInterfaceDelegate, MFMailComposeViewControllerDelegate, SUPurchaseManagerDelegate> {
    SUClientInterface *_clientInterface;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_localStoreFrontAtLastSuspend;
    MFMailComposeViewController *_mailComposeViewController;
    struct __CFArray { } *_offeredAssetTypes;
    NSArray *_overlayConfigurations;
    NSString *_synchedStoreFrontAtLastSuspend;
    NSMutableDictionary *_urlBagKeys;
}

@property (retain, nonatomic) SUImageCache *imageCache;
@property (retain, nonatomic) ISURLOperationPool *imageOperationPool;
@property (readonly, nonatomic) SUScriptExecutionContext *scriptExecutionContext;
@property (readonly, nonatomic) NSString *storeContentLanguage;
@property (readonly, nonatomic) BOOL storeFrontDidChangeSinceLastSuspend;
@property (copy) SUClientInterface *clientInterface;
@property (readonly, nonatomic, getter=isStoreEnabled) BOOL storeEnabled;
@property (retain, nonatomic) UIViewController *rootViewController;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;
+ (void)setSharedController:(id)a0;

- (void)setUserAgent:(id)a0;
- (id)userAgent;
- (id)init;
- (void)_applicationDidEnterBackgroundNotification:(id)a0;
- (id)clientIdentifier;
- (id)initWithClientIdentifier:(id)a0;
- (BOOL)openURL:(id)a0;
- (void)cancelAllOperations;
- (void)_presentDialog:(id)a0;
- (void)resignActive;
- (void)dealloc;
- (void)becomeActive;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (id)viewControllerFactory;
- (void)_memoryWarningNotification:(id)a0;
- (void)clientInterface:(id)a0 exitStoreWithReason:(long long)a1;
- (void)clientInterface:(id)a0 presentDialog:(id)a1;
- (void)clientInterface:(id)a0 setStatusBarHidden:(BOOL)a1 withAnimation:(long long)a2;
- (void)clientInterface:(id)a0 setStatusBarStyle:(long long)a1 animated:(BOOL)a2;
- (void)purchaseManager:(id)a0 didAddPurchases:(id)a1;
- (void)purchaseManager:(id)a0 failedToAddPurchases:(id)a1;
- (void)purchaseManager:(id)a0 willAddPurchases:(id)a1;
- (void)purchaseManagerDidEndUpdates:(id)a0;
- (void)purchaseManagerWillBeginUpdates:(id)a0;
- (id)scriptInterfaceForClientInterface:(id)a0;
- (void)setViewControllerFactory:(id)a0;
- (BOOL)openURL:(id)a0 inClientWithIdentifier:(id)a1;
- (id)overlayBackgroundViewController;
- (id)URLBagKeyForIdentifier:(id)a0;
- (void)_dialogNotification:(id)a0;
- (id)_newAccountViewControllerForButtonAction:(id)a0;
- (id)_newComposeReviewViewControllerForButtonAction:(id)a0;
- (void)_purgeCaches;
- (void)_reloadOverlayConfigurationsFromURLBag;
- (void)_reloadScriptExecutionContextFromURLBag;
- (void)_reloadUserDefaultsFromURLBag;
- (void)autosaveMessageWithCompletionBlock:(id /* block */)a0;
- (void)bagDidLoadNotification:(id)a0;
- (void)composeEmailByRestoringAutosavedMessage;
- (void)composeEmailWithSubject:(id)a0 body:(id)a1;
- (void)composeEmailWithSubject:(id)a0 body:(id)a1 animated:(BOOL)a2;
- (BOOL)composeReviewWithViewController:(id)a0 animated:(BOOL)a1;
- (void)dismissMailComposeViewControllerAnimated:(BOOL)a0;
- (void)dismissOverlayBackgroundViewController;
- (BOOL)dismissTopViewControllerAnimated:(BOOL)a0;
- (BOOL)displayClientURL:(id)a0;
- (BOOL)displayClientURL:(id)a0 withSourceApplication:(id)a1 sourceURLString:(id)a2;
- (void)exitStoreWithReason:(long long)a0;
- (BOOL)ignoresExpectedClientsProtocol;
- (id)initWithClientInterface:(id)a0;
- (BOOL)isComposingEmail;
- (BOOL)libraryContainsItemIdentifier:(unsigned long long)a0;
- (id)newScriptInterface;
- (struct __CFArray { } *)offeredAssetTypes;
- (BOOL)openClientURL:(id)a0;
- (BOOL)openClientURL:(id)a0 withSourceApplication:(id)a1 sourceURLString:(id)a2;
- (id)overlayConfigurationForStorePage:(id)a0;
- (BOOL)performActionForDialog:(id)a0 button:(id)a1;
- (BOOL)presentAccountViewController:(id)a0 animated:(BOOL)a1;
- (BOOL)presentAccountViewController:(id)a0 showNavigationBar:(BOOL)a1 animated:(BOOL)a2;
- (void)presentExternalURLViewController:(id)a0;
- (void)presentMailComposeViewController:(id)a0 animated:(BOOL)a1;
- (BOOL)presentOverlayBackgroundViewController:(id)a0;
- (void)setIgnoresExpectedClientsProtocol:(BOOL)a0;
- (void)setOfferedAssetTypes:(struct __CFArray { } *)a0;
- (void)setURLBagKey:(id)a0 forIdentifier:(id)a1;

@end