@class NSString, NSMutableDictionary, NSObject, UMUserSyncTask;
@protocol OS_dispatch_queue;

@interface BRCAccountsManager : NSObject <UMUserSyncStakeholder> {
    NSMutableDictionary *_accountHandlersByACAccountID;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _loadAccountsRequested;
    BOOL _finishedLoadingAccounts;
    UMUserSyncTask *_checkNeedsBubbleTask;
}

@property (readonly, nonatomic) BOOL isInSyncBubble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)willSwitchUser;
- (id)init;
- (void).cxx_destruct;
- (id)accountForCurrentPersona;
- (void)startedUpInSyncBubble;
- (void)uploadContent;
- (BOOL)_isDeviceUnlocked;
- (id)accountHandlerForCurrentPersona;
- (void)_createSyncBubbleTasksIfNecessary;
- (void)_garbageCollectOldDomainsWithAccounts:(id)a0;
- (id)_getFPDomainsForProviderIdentifier:(id)a0;
- (id)_getOrCreateAccountHandlerForACAccountID:(id)a0;
- (id)accountForPersona:(id)a0;
- (id)accountHandlerForACAccountID:(id)a0;
- (BOOL)cleanupAccountDataForLoggedOutAccountWithPersona:(id)a0;
- (void)createAndLoadSessionWithACAccountID:(id)a0 createBlock:(id /* block */)a1;
- (void)createSessionWithACAccountID:(id)a0 dsid:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)destroySessionWithACAccountID:(id)a0;
- (void)enumerateAccountHandlerIfFinishedLoading:(id /* block */)a0;
- (void)enumerateAccountHandlers:(id /* block */)a0;
- (id)getOrCreateAccountHandlerForACAccountID:(id)a0;
- (void)loadAccounts;
- (id)personaIdentifierForACAccountID:(id)a0;
- (BOOL)retrySyncBubbleLaterIfNeededWithError:(id)a0;
- (void)updateAccountDisplayName:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)waitForAccountLoadingSynchronouslyIfPossible:(id)a0;
- (BOOL)waitForInitialAccountLoadingSynchronouslyIfPossible;
- (void)waitUntilDeviceIsUnlocked;

@end
