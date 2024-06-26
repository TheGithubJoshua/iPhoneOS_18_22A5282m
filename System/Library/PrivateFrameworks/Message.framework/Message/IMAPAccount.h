@class NSLock, NSString, NSRecursiveLock, NSArray, NSSet, NSMutableDictionary, MFIMAPOperationCache, NSObject, NSNumber;
@protocol OS_os_log, MFTaskManager;

@interface IMAPAccount : MailAccount <MFIMAPConnectionDelegate, EFLoggable, MFIMAPMailboxListFilter> {
    NSString *_separatorChar;
    NSString *_serverNamespace;
    struct __CFArray { } *_cachedConnections;
    MFIMAPOperationCache *_offlineCache;
    double _timeLastFetchedMailboxList;
    NSRecursiveLock *_connectionLock;
    int _nextConnectionTag;
    id _packetContextAssertion;
    NSArray *_lockOrderingArray;
    unsigned int _readBufferSize;
    id /* block */ _offlineCacheFlushHandler;
    _Atomic BOOL _fetchedMailboxList;
    _Atomic BOOL _isOffline;
    NSArray *_lastKnownCapabilities;
    NSLock *_eSearchSupportedLock;
    NSNumber *_eSearchSupported;
    double _lastPushRegistration;
    NSString *_apsTopic;
    NSSet *_pushedMailboxUids;
    NSMutableDictionary *_pushRegisteredMailboxes;
    int _supportedPushServiceLevel;
    id<MFTaskManager> _taskManager;
    unsigned char _observingPushedFoldersPrefsChanged : 1;
    unsigned char _mustRegisterForPushOnNextConnection : 1;
    unsigned char _didRequestPushRegistration : 1;
    unsigned char _listeningForDeviceTokenChanges : 1;
    unsigned char _didUpdateSeparatorAndNamespace : 1;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (copy, nonatomic) NSString *apsSenderArgument;
@property (nonatomic) int apsVersion;
@property (readonly, nonatomic) BOOL supportsAppleRemoteLinks;
@property (readonly) BOOL isOffline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)defaultPortNumber;
+ (unsigned int)defaultSecurePortNumber;
+ (id)accountTypeIdentifier;
+ (id)accountTypeString;
+ (id)saslProfileName;
+ (void)_deleteQueuedMailboxes:(id)a0;
+ (id)csAccountTypeString;
+ (void *)legacyKeychainProtocol;

- (BOOL)requiresAuthentication;
- (id)clientToken;
- (void)setIsOffline:(BOOL)a0;
- (void)_setCapabilities:(id)a0;
- (void)startListeningForNotifications;
- (id)offlineCache;
- (void)setDisplayName:(id)a0;
- (void)connectionDidDisconnect:(id)a0;
- (id)offlineCacheIfOffline;
- (id)serviceName;
- (BOOL)connection:(id)a0 shouldHandleUntaggedResponse:(id)a1 forCommand:(id)a2;
- (void)saveState;
- (void)checkInConnection:(id)a0;
- (void).cxx_destruct;
- (id)copyDiagnosticInformation;
- (void)connection:(id)a0 didReceiveResponse:(id)a1 forCommand:(id)a2;
- (id)stateCaptureTitle;
- (void)dealloc;
- (id)taskManager;
- (id)replayAction:(id)a0;
- (Class)connectionClass;
- (id)specialUseAttributesForMailbox:(id)a0;
- (BOOL)_deleteMailbox:(id)a0 reflectToServer:(BOOL)a1;
- (void)_writeCustomInfoToMailboxCache:(id)a0;
- (id)mailboxNamesForPushRegistration;
- (id)mf_lockOrdering;
- (void)setHandlerForOfflineCacheFlush:(id /* block */)a0;
- (id)_URLScheme;
- (void)_apsDeviceTokenChanged:(id)a0;
- (id)_copyMailboxListForNames:(id)a0;
- (id)_copyMailboxListPreferenceForKey:(id)a0;
- (id)_copyMailboxUidWithParent:(id)a0 name:(id)a1 attributes:(unsigned long long)a2 existingMailboxUid:(id)a3 dictionary:(id)a4;
- (id)_copyPushedMailboxesForPrefix:(id)a0;
- (id)_copyUserPushedMailboxes;
- (id)_dataForTemporaryUid:(unsigned int)a0;
- (id)_externalMailboxUids;
- (id)_fileSystemServerPathPrefix;
- (void)_flushOfflineCache;
- (id)_infoForMatchingURL:(id)a0;
- (void)_invokeBlock:(id /* block */)a0;
- (id)_listingForMailboxUid:(id)a0 listAllChildren:(BOOL)a1;
- (id)_listingForMailboxUid:(id)a0 listAllChildren:(BOOL)a1 onlySubscribed:(BOOL)a2;
- (id)_listingForMailboxUid:(id)a0 listAllChildren:(BOOL)a1 onlySubscribed:(BOOL)a2 statusDataItems:(id)a3 withConnection:(id)a4 statusEntriesByMailbox:(id *)a5;
- (void)_mailboxListingChanged;
- (id)_mailboxPathPrefix;
- (void)_mailboxesWereRemovedFromTree:(id)a0 withFileSystemPaths:(id)a1;
- (id)_nameForMailboxUid:(id)a0;
- (id)_newMailboxWithParent:(id)a0 name:(id)a1 attributes:(unsigned int)a2 dictionary:(id)a3 withCreationOption:(int)a4;
- (id)_notesPrefix;
- (id)_notificationNameForMailbox:(id)a0 withPrefix:(id)a1;
- (id)_pathComponentForUidName:(id)a0;
- (void)_readCustomInfoFromMailboxCache:(id)a0;
- (void)_registerForDeviceTokenChanges;
- (BOOL)_registerPushNotificationPrefix:(id)a0 forMailboxNames:(id)a1;
- (void)_releaseAllConnectionsAndCallSuper:(BOOL)a0;
- (void)_releaseAllConnectionsAndCallSuper:(BOOL)a0 synchronously:(BOOL)a1 edgeForcedOnly:(BOOL)a2 saveOfflineCache:(BOOL)a3;
- (void)_renameLocalSpecialMailboxesToName:(id)a0;
- (void)_replayMailboxActionsWithConnection:(id)a0;
- (void)_schedulePushRegistrationConnection;
- (void)_setSpecialMailbox:(id)a0 forType:(int)a1;
- (id)_specialMailboxUidWithType:(int)a0 create:(BOOL)a1;
- (void)_synchronouslyLoadListingForParent:(id)a0;
- (id)_uidNameForPathComponent:(id)a0;
- (void)_unregisterForDeviceTokenChanges;
- (void)_updatePushedMailboxesAndNotify:(BOOL)a0;
- (void)_updateSeparatorAndNamespaceWithConnection:(id)a0;
- (BOOL)_useNewIMAPStack;
- (void)_waitForMailboxListingLoadToComplete;
- (void)acquireNetworkAssertion;
- (id)allMailMailboxUid;
- (BOOL)allowsPartialDownloads;
- (id)apsTopic;
- (BOOL)canAttemptPushRegistration;
- (BOOL)canFetch;
- (BOOL)canGoOffline;
- (BOOL)canMailboxBeDeleted:(id)a0;
- (BOOL)canReceiveNewMailNotifications;
- (id)certUIService;
- (void)changePushedMailboxUidsAdded:(id)a0 deleted:(id)a1;
- (void)checkInConnection:(id)a0 destroy:(BOOL)a1;
- (void)checkInConnectionsForStore:(id)a0;
- (BOOL)connectAndAuthenticate:(id)a0;
- (id)connectionForMailbox:(id)a0 delegate:(id)a1 options:(int)a2 failedToSelectMailbox:(BOOL *)a3;
- (BOOL)deleteInPlaceForAllMailboxes;
- (BOOL)deleteInPlaceForMailbox:(id)a0;
- (void)deleteMessagesFromMailboxUid:(id)a0 olderThanNumberOfDays:(unsigned int)a1;
- (id)errorForResponse:(id)a0;
- (id)fetchLimits;
- (void)fetchMailboxList;
- (void)filterMailboxList:(id)a0 forMailbox:(id)a1 options:(int)a2;
- (void)flushOfflineCache;
- (BOOL)getMailboxListWithConnection:(id)a0 statusDataItems:(id)a1 statusEntriesByMailbox:(id *)a2;
- (void)handleAlertResponse:(id)a0;
- (void)handleOverQuotaResponse:(id)a0;
- (void)handlePushNotificationOnMailboxes:(id)a0 missedNotifications:(BOOL)a1;
- (BOOL)hasPendingOfflineOperations;
- (id)initWithLibrary:(id)a0 persistentAccount:(id)a1;
- (BOOL)isMailboxLocalForType:(int)a0;
- (BOOL)isSpecialMailbox:(id)a0;
- (id)lastKnownCapabilities;
- (double)lastPushRegistration;
- (id)mailboxPathExtension;
- (id)mailboxUidForName:(id)a0;
- (id)mailboxUidForRelativePath:(id)a0 create:(BOOL)a1;
- (id)mailboxesRegisteredForPushByHash;
- (id)messageActionsAfterActionID:(long long)a0;
- (unsigned long long)minID;
- (BOOL)moveSupported;
- (BOOL)mustRegisterForPushOnNextConnection;
- (id)nameForMailboxUid:(id)a0;
- (void)networkChanged;
- (BOOL)newMailboxNameIsAcceptable:(id)a0 reasonForFailure:(id *)a1;
- (id)notificationNamesForPrefix:(id)a0 mailboxUids:(id)a1;
- (id)offlineCacheDirectoryPath;
- (id)offlineCacheIfExists;
- (id)pushedMailboxUids;
- (unsigned int)readBufferSize;
- (void)releaseAllConnections;
- (void)releaseAllConnectionsSynchronously;
- (void)releaseAllForcedConnections;
- (void)releaseNetworkAssertion;
- (BOOL)renameMailbox:(id)a0 newName:(id)a1 parent:(id)a2;
- (void)resetMailboxTimer;
- (id)secureServiceName;
- (id)separatorChar;
- (id)serverPathPrefix;
- (id)serverPathPrefixAccountValue;
- (void)serverRegisteredMailboxes:(id)a0 withTopic:(id)a1 version:(int)a2;
- (void)setAPSTopic:(id)a0;
- (void)setAllowsPartialDownloads:(BOOL)a0;
- (void)setLastPushRegistration:(double)a0;
- (void)setMustRegisterForPushOnNextConnection:(BOOL)a0;
- (void)setReadBufferSize:(unsigned int)a0;
- (void)setServerPathPrefix:(id)a0;
- (void)setStoreMailboxType:(int)a0 onServer:(BOOL)a1;
- (void)setSupportedPushServiceLevel:(int)a0;
- (BOOL)shouldRegisterForPush;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (id)specialUseAttributeForType:(int)a0;
- (id)statisticsKind;
- (void)stopListeningForNotifications;
- (Class)storeClass;
- (BOOL)storeMailboxTypeOnServer:(int)a0;
- (int)supportedPushServiceLevel;
- (BOOL)supportsAppend;
- (BOOL)supportsMailboxEditing;
- (BOOL)supportsRemoteAppend;
- (BOOL)supportsUserPushedMailboxes;
- (void)test_setTaskManager:(id)a0;
- (void)throttledGetMailboxListWithConnection:(id)a0;
- (void)transferNotificationSessionToAccount:(id)a0;
- (void)unselectMailbox:(id)a0;
- (void)updatePushRegisteredMailboxes:(id)a0;
- (BOOL)verifyESearchSupportWithBlock:(id /* block */)a0;
- (BOOL)xListSupportedOnConnection:(id)a0;

@end
