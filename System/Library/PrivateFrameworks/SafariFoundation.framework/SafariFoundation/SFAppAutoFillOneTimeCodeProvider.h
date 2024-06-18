@class NSHashTable, NSMapTable, NSTimer, WBSAutoFillAssociatedDomainsManager, SFAutoFillOneTimeCode, NSObject, IMOneTimeCodeAccelerator;
@protocol OS_dispatch_queue, SFAppAutoFillOneTimeCodeProviderDelegate;

@interface SFAppAutoFillOneTimeCodeProvider : NSObject {
    IMOneTimeCodeAccelerator *_messagesOneTimeCodeAccelerator;
    NSObject<OS_dispatch_queue> *_internalQueue;
    SFAutoFillOneTimeCode *_currentReceivedOneTimeCode;
    NSHashTable *_observers;
    NSMapTable *_generatorObservers;
    NSTimer *_generatorTimer;
}

@property (weak, nonatomic) id<SFAppAutoFillOneTimeCodeProviderDelegate> delegate;
@property (retain, nonatomic) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;

- (void)removeObserver:(id)a0;
- (id)_sortedOneTimeCodesFromSavedAccounts:(id)a0;
- (id)init;
- (BOOL)_appWithAppIdentifierIsWebBrowser:(id)a0;
- (BOOL)_validateURL:(id)a0 withURLFromOriginBoundCode:(id)a1;
- (void)addObserver:(id)a0 forOneTimeCode:(id)a1;
- (id)currentOneTimeCodesWithAppIdentifier:(id)a0 website:(id)a1 usernameHint:(id)a2 fieldClassification:(long long)a3;
- (void)consumeMessagesOneTimeCodeWithGUID:(id)a0;
- (void)_startGeneratorTimer;
- (id)initWithMessagesOneTimeCodeSupport:(BOOL)a0;
- (void)_notifyOneTimeCodeObserver;
- (id)currentOneTimeCodesForWebBrowserWithWebsiteFrameURLs:(id)a0 fieldClassification:(long long)a1;
- (void).cxx_destruct;
- (id)_secureURLWithDomain:(id)a0;
- (void)removeObserverForOneTimeCode:(id)a0;
- (BOOL)hasOneTimeCodeForAppWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)_savedAccountsWithPasswordsForURL:(id)a0;
- (void)_stopGeneratorTimer;
- (void)didFocusOneTimeCodeField;
- (void)_validateCurrentOneTimeCode;
- (void)_processOneTimeCodeFromMessages:(id)a0;
- (id)currentOneTimeCodesWithAuditToken:(struct { unsigned int x0[8]; })a0 website:(id)a1 usernameHint:(id)a2 fieldClassification:(long long)a3;
- (void)consumeOneTimeCode:(id)a0;
- (void)addObserver:(id)a0;
- (void)consumeCurrentOneTimeCode;
- (id)_associatedDomainEntriesForAppWithIdentifier:(id)a0;

@end
