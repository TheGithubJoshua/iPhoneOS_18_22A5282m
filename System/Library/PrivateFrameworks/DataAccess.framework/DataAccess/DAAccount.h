@class NSMutableDictionary, NSURL, NSMapTable, NSDate, NSObject, DATrustHandler, ACAccount, NSMutableArray, NSString, DATaskManager, NSSet, NSArray, NSData, DAStatusReport;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface DAAccount : NSObject {
    BOOL _hasInitted;
    NSMapTable *_consumers;
    struct __CFURLStorageSession { } *_storageSession;
    NSString *_clientToken;
    NSObject<OS_xpc_object> *_xpcActivity;
    int _continueCount;
    BOOL _isFetchingAutomatically;
}

@property (retain, nonatomic) NSMutableDictionary *dataclassPropertyURLsByDataclass;
@property (retain, nonatomic) DAStatusReport *statusReport;
@property (retain, nonatomic) DATrustHandler *trustHandler;
@property (nonatomic) BOOL shouldUseOpportunisticSockets;
@property (nonatomic) BOOL wasUserInitiated;
@property (retain, nonatomic) NSMutableArray *pendingQueries;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pendingQueryQueue;
@property (retain, nonatomic) NSDate *lastQueryStartedTime;
@property (readonly, nonatomic) NSString *accountID;
@property (nonatomic, setter=setDAAccountVersion:) int daAccountVersion;
@property (readonly, copy, nonatomic) NSString *persistentUUID;
@property (copy, nonatomic) NSString *accountDescription;
@property (readonly, nonatomic) NSString *publicDescription;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *user;
@property (copy, nonatomic) NSString *host;
@property (readonly, nonatomic) NSString *hostWithoutPath;
@property (nonatomic) long long port;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) BOOL useSSL;
@property (readonly, nonatomic) long long enabledDataclassesBitmask;
@property (readonly, nonatomic) BOOL isChildAccount;
@property (readonly, nonatomic) ACAccount *backingAccountInfo;
@property (readonly, nonatomic) DATaskManager *taskManager;
@property (readonly, nonatomic) NSString *changeTrackingID;
@property (readonly, nonatomic) int keychainAccessibilityType;
@property (readonly, nonatomic) NSString *scheduleIdentifier;
@property (retain, nonatomic) NSData *signingIdentityPersistentReference;
@property (retain, nonatomic) NSData *encryptionIdentityPersistentReference;
@property (nonatomic) BOOL shouldDoInitialAutodiscovery;
@property (readonly, nonatomic) BOOL shouldAutodiscoverAccountProperties;
@property (readonly, copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSURL *principalURL;
@property (copy, nonatomic) NSString *principalPath;
@property (readonly, copy, nonatomic) NSString *clientToken;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSString *preferredAddress;
@property (readonly, nonatomic) NSArray *appIdsForPasswordPrompt;
@property (readonly, nonatomic) BOOL shouldFailAllTasks;
@property (readonly, copy, nonatomic) NSData *identityPersist;
@property (nonatomic) BOOL isValidating;
@property (readonly, nonatomic) NSString *userAgentHeader;
@property (readonly, nonatomic) NSSet *serverComplianceClasses;
@property (readonly, nonatomic) NSString *serverRoot;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;

+ (id)_leafAccountTypes;
+ (id)_leafAccountTypes;
+ (id)daAccountSubclassWithBackingAccountInfo:(id)a0;
+ (id)oneshotListOfAccountIDs;
+ (void)reacquireClientRestrictions:(id)a0;
+ (BOOL)shouldCreateAccountForBackingAccountInfo:(id)a0;

- (void)reload;
- (id)dataclassProperties;
- (id)stateString;
- (void)shutdown;
- (id)protocolVersion;
- (void)tearDown;
- (id)redactedDescription;
- (void)cancelCalendarAvailabilityRequestWithID:(id)a0;
- (id)syncStoreIdentifier;
- (id)accountsProviderWithDBHelper:(id)a0;
- (BOOL)isEqualToAccount:(id)a0;
- (id)displayName;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)additionalHeaderValues;
- (BOOL)isDisabled;
- (void)cancelCalendarDirectorySearchWithID:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)objectForKeyedSubscript:(id)a0;
- (id)accountTypeIdentifier;
- (void)dealloc;
- (void)setEnabled:(BOOL)a0 forDataclass:(id)a1;
- (BOOL)isEnabledForDataclass:(id)a0;
- (id)accountPropertyForKey:(id)a0;
- (void)setAccountProperty:(id)a0 forKey:(id)a1;
- (void)cancelGrantedDelegatesListRequestWithID:(id)a0;
- (void)removeAccountPropertyForKey:(id)a0;
- (id)sentItemsFolder;
- (BOOL)accountBoolPropertyForKey:(id)a0;
- (void)cancelSearchQuery:(id)a0;
- (id)deletedItemsFolder;
- (id)draftsFolder;
- (BOOL)enabledForDADataclass:(long long)a0;
- (id)inboxFolder;
- (BOOL)isHotmailAccount;
- (id)oauth2Token;
- (void)performSearchQuery:(id)a0;
- (BOOL)reattemptInvitationLinkageForMetaData:(id)a0 inFolderWithId:(id)a1;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (id)unactionableICSRepresentationForMetaData:(id)a0 inFolderWithId:(id)a1 outSummary:(id *)a2;
- (void)accountDidChangeWithChangeInfo:(id)a0;
- (void)cancelOfficeHoursRequestWithID:(id)a0;
- (id)contactsFolders;
- (void)resumeMonitoringFoldersWithIDs:(id)a0;
- (BOOL)saveAccountPropertiesWithError:(id *)a0;
- (void)setToDosNumberOfPastDaysToSync:(int)a0;
- (BOOL)isCalDAVAccount;
- (BOOL)isGoogleAccount;
- (id)localizedInvalidPasswordMessage;
- (void)retrieveOofSettingsForConsumer:(id)a0;
- (void)saveFetchingAutomaticallyState:(BOOL)a0;
- (void)updateExistingAccountProperties;
- (void)_dequeueQuery;
- (void)_handleSignificantPropertyChanges:(id)a0;
- (BOOL)_isIdentityManagedByProfile;
- (void)_reallyCancelAllSearchQueries;
- (void)_reallyCancelPendingSearchQuery:(id)a0;
- (void)_reallyCancelSearchQuery:(id)a0;
- (void)_reallyPerformSearchQuery:(id)a0;
- (BOOL)_reallySearchQueriesRunning;
- (void)_refreshCredential;
- (void)_setPersistentUUID:(id)a0;
- (void)_webLoginRequestedAtURL:(id)a0 reasonString:(id)a1 inQueue:(id)a2 completionBlock:(id /* block */)a3;
- (BOOL)accountContainsEmailAddress:(id)a0;
- (void)accountDidChangeFromOldAccountInfo:(id)a0;
- (BOOL)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)a0;
- (BOOL)accountHasSignificantPropertyChangesWithChangeInfo:(id)a0;
- (int)accountIntPropertyForKey:(id)a0;
- (void)addToCoreDAVLoggingDelegates;
- (id)addUsernameToURL:(id)a0;
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)a0;
- (id)beginDownloadingAttachmentWithUUID:(id)a0 consumer:(id)a1;
- (BOOL)canSaveWithAccountProvider:(id /* block */)a0;
- (void)cancelAllSearchQueries;
- (void)cancelDownloadingInstance:(id)a0 error:(id)a1;
- (void)cancelShareResponseInstance:(id)a0 error:(id)a1;
- (void)cancelUpdateGrantedDelegatePermissionRequestWithID:(id)a0;
- (void)checkValidityOnAccountStore:(id)a0 withConsumer:(id)a1;
- (void)checkValidityOnAccountStore:(id)a0 withConsumer:(id)a1 inQueue:(id)a2;
- (void)cleanupAccountFiles;
- (void)clientTokenRequestedByServer;
- (id)consumerForTask:(id)a0;
- (id)containerProviderWithDBHelper:(id)a0;
- (struct __CFURLStorageSession { } *)copyStorageSession;
- (id)customConnectionProperties;
- (void)decrementXpcActivityContinueCount;
- (id)defaultContactsFolder;
- (id)defaultContainerIdentifierForDADataclass:(long long)a0;
- (id)defaultEventsFolder;
- (id)defaultNotesFolder;
- (id)defaultToDosFolder;
- (void)discoverInitialPropertiesWithConsumer:(id)a0;
- (id)domainOnly;
- (void)dropAssertionsAndRenewCredentialsInQueue:(id)a0 withHandler:(id /* block */)a1;
- (BOOL)enabledForAnyDADataclasses:(long long)a0;
- (id)eventsFolders;
- (id)exceptionsDict;
- (struct __CFData { } *)exceptionsForDigest:(id)a0;
- (id)fetchOfficeHoursWithConsumer:(id)a0 error:(id *)a1;
- (id)getAppleIDSession;
- (BOOL)getFetchingAutomaticallyState;
- (id)getPendingQueryQueue;
- (BOOL)handleCertificateError:(id)a0;
- (BOOL)handleTrustChallenge:(id)a0;
- (BOOL)handleTrustChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleValidationError:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasXpcActivity;
- (id)hostFromDataclassPropertiesForDataclass:(id)a0;
- (void)incrementXpcActivityContinueCount;
- (void)ingestBackingAccountInfoProperties;
- (id)initWithBackingAccountInfo:(id)a0;
- (BOOL)isActiveSyncAccount;
- (BOOL)isCalDAVChildAccount;
- (BOOL)isCardDAVAccount;
- (BOOL)isDelegateAccount;
- (BOOL)isLDAPAccount;
- (BOOL)isOofSupported;
- (BOOL)isSubscribedCalendarAccount;
- (id)localizedIdenticalAccountFailureMessage;
- (BOOL)monitorFolderWithID:(id)a0;
- (BOOL)monitorFoldersWithIDs:(id)a0;
- (id)notesFolders;
- (id)oauthInfoProvider;
- (id)onBehalfOfBundleIdentifier;
- (id)passwordWithExpected:(BOOL)a0;
- (id)performCalendarDirectorySearchForTerms:(id)a0 recordTypes:(id)a1 resultLimit:(unsigned long long)a2 consumer:(id)a3;
- (void)performGroupExpansionForPrincipalPath:(id)a0 consumer:(id)a1;
- (void)performUsingAccountPersona:(id /* block */)a0;
- (long long)portFromDataclassPropertiesForDataclass:(id)a0;
- (BOOL)preflightSaveWithAccountProvider:(id /* block */)a0;
- (void)removeClientCertificateData;
- (void)removeConsumerForTask:(id)a0;
- (void)removeDBSyncDataForAccountChange:(id)a0;
- (void)removeFromCoreDAVLoggingDelegates;
- (void)removeXpcActivity;
- (id)reportShareRequestAsJunkForCalendar:(id)a0 consumer:(id)a1;
- (id)requestCalendarAvailabilityForStartDate:(id)a0 endDate:(id)a1 ignoredEventID:(id)a2 addresses:(id)a3 consumer:(id)a4;
- (id)requestGrantedDelegatesListWithConsumer:(id)a0;
- (void)resetAccountID;
- (BOOL)resetCertWarnings;
- (void)resetStatusReport;
- (id)respondToShareRequestForCalendar:(id)a0 withResponse:(long long)a1 consumer:(id)a2;
- (BOOL)saveAccountProperties;
- (BOOL)saveModifiedPropertiesOnBackingAccount;
- (void)saveXpcActivity:(id)a0;
- (BOOL)searchQueriesRunning;
- (BOOL)sendEmailsForCalEvents:(id)a0 consumer:(id)a1;
- (void)setAccountBoolProperty:(BOOL)a0 forKey:(id)a1;
- (void)setAccountIntProperty:(int)a0 forKey:(id)a1;
- (void)setConsumer:(id)a0 forTask:(id)a1;
- (void)setEnabled:(BOOL)a0 forDADataclass:(long long)a1;
- (void)setExceptions:(struct __CFData { } *)a0 forDigest:(id)a1;
- (void)setIdentityCertificatePersistentID:(id)a0 managedByProfile:(BOOL)a1;
- (id)setOfficeHours:(id)a0 withConsumer:(id)a1 error:(id *)a2;
- (BOOL)shouldCancelTaskDueToOnPowerFetchMode;
- (BOOL)shouldRemoveDBSyncDataOnAccountChange;
- (id)spinnerIdentifiers;
- (void)stopMonitoringFolderWithID:(id)a0;
- (void)stopMonitoringFolders;
- (void)stopMonitoringFoldersWithIDs:(id)a0;
- (void)suspendMonitoringFoldersWithIDs:(id)a0;
- (void)synchronizeContactsFolder:(id)a0 previousTag:(id)a1 previousSyncToken:(id)a2 actions:(id)a3 highestIdContext:(id)a4 isInitialUberSync:(BOOL)a5 isResyncAfterConnectionFailed:(BOOL)a6 previousTagIsSuspect:(BOOL)a7 moreLocalChangesAvailable:(BOOL)a8 consumer:(id)a9;
- (void)synchronizeEventsFolder:(id)a0 previousTag:(id)a1 actions:(id)a2 highestIdContext:(id)a3 isInitialUberSync:(BOOL)a4 isResyncAfterConnectionFailed:(BOOL)a5 moreLocalChangesAvailable:(BOOL)a6 consumer:(id)a7;
- (void)synchronizeNotesFolder:(id)a0 noteContext:(id)a1 previousTag:(id)a2 actions:(id)a3 changeSet:(id)a4 notesToDeleteAfterSync:(id)a5 isInitialUberSync:(BOOL)a6 isResyncAfterConnectionFailed:(BOOL)a7 moreLocalChangesAvailable:(BOOL)a8 consumer:(id)a9;
- (void)synchronizeToDosFolder:(id)a0 previousTag:(id)a1 actions:(id)a2 highestIdContext:(id)a3 isInitialUberSync:(BOOL)a4 isResyncAfterConnectionFailed:(BOOL)a5 moreLocalChangesAvailable:(BOOL)a6 consumer:(id)a7;
- (id)toDosFolders;
- (int)toDosNumberOfPastDaysToSync;
- (id)updateGrantedDelegatePermission:(id)a0 consumer:(id)a1;
- (void)updateOofSettingsWithParams:(id)a0 consumer:(id)a1;
- (BOOL)upgradeAccount;
- (id)urlFromDataclassPropertiesForDataclass:(id)a0;
- (BOOL)useSSLFromDataclassPropertiesForDataclass:(id)a0;
- (id)usernameWithoutDomain;
- (void)webLoginRequestedAtURL:(id)a0 reasonString:(id)a1 inQueue:(id)a2 completionBlock:(id /* block */)a3;

@end