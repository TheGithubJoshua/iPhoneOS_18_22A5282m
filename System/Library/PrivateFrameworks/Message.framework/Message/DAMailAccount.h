@class MFMailboxUid, NSString, NSArray, MFDAMailbox, NSLock, NSMutableDictionary, DAAccount, NSSet, NSObject;
@protocol ASAccountActorMessages;

@interface DAMailAccount : MailAccount <ECLocalActionReplayerDelegate> {
    NSObject<ASAccountActorMessages> *_accountConduit;
    DAAccount *_daAccount;
    BOOL _isNetworkReachable;
    NSString *_cachedAccountID;
    NSString *_cachedAccountPersistentUUID;
    NSString *_cachedDisplayName;
    NSString *_cachedEmailAddress;
    NSArray *_cachedEmailAddresses;
    NSString *_cachedIconString;
    BOOL _cachedIsActive;
    BOOL _cachedIsHotmailAccount;
    BOOL _cachedCalendarEnabled;
    BOOL _cachedPerMessageEncryptionEnabled;
    BOOL _cachedSecureMIMEShouldSign;
    BOOL _cachedSecureMIMEShouldEncrypt;
    BOOL _cachedRestrictMessageTransfersToOtherAccounts;
    BOOL _cachedRestrictSendingFromExternalProcesses;
    BOOL _cachedRestrictSyncingRecents;
    BOOL _cachedIsManaged;
    BOOL _cachedSupportsMailDrop;
    BOOL _cachedArchiveByDefault;
    BOOL _cachedSourceIsManaged;
    BOOL _cachedStoreDraftsOnServer;
    NSString *_cachedInboxFolderID;
    NSString *_cachedSentMessagesFolderID;
    NSString *_cachedTrashFolderID;
    NSString *_cachedJunkFolderID;
    NSString *_cachedDraftsFolderID;
    MFDAMailbox *_temporaryInbox;
    BOOL _loadedInitialMailboxList;
    BOOL _receivedInitialMailboxUpdate;
    BOOL _doneInitialInboxCheck;
    BOOL _observingPushedFoldersPrefsChanged;
    int _supportsServerSearch;
    int _supportsMessageFlagging;
    int _supportsConversations;
    int _supportsServerDrafts;
    int _supportsUniqueServerId;
    unsigned int _daysToSync;
    NSMutableDictionary *_requestQueuesByFolderID;
    NSLock *_watchedFolderIdsLock;
    NSSet *_watchedFolderIds;
    NSString *_folderTag;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _supportsUniqueServerIdLock;
}

@property (retain, nonatomic) MFMailboxUid *virtualAllSearchMailbox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accountTypeString;
+ (id)displayedShortAccountTypeString;
+ (id)_URLScheme;
+ (Class)_accountConduitClass;
+ (id)accountIDForDirectoryName:(id)a0 isAccountDirectory:(BOOL *)a1;
+ (id)csAccountTypeString;
+ (id)displayedAccountTypeString;
+ (id)legacyPathForAccountIdentifier:(id)a0 withHostname:(id)a1 username:(id)a2;

- (void)_reachabilityChanged:(id)a0;
- (BOOL)isManaged;
- (id)hostname;
- (void)startListeningForNotifications;
- (id)messageDataForMessage:(id)a0;
- (id)uniqueID;
- (id)displayName;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)identifier;
- (id)replayAction:(id)a0;
- (id)username;
- (BOOL)moveSupportedFromMailboxURL:(id)a0 toURL:(id)a1;
- (BOOL)isEnabledForDataclass:(id)a0;
- (id)accountPropertyForKey:(id)a0;
- (BOOL)isActive;
- (BOOL)sourceIsManaged;
- (BOOL)_isUnitTesting;
- (void)_loadChildrenForParent:(id)a0 fromMap:(id)a1 intoArray:(id)a2 replacingInbox:(id)a3 withID:(id)a4;
- (id)deliveryAccount;
- (BOOL)restrictedFromSendingExternally;
- (id)uniqueIdForPersistentConnection;
- (BOOL)_deleteMailbox:(id)a0 reflectToServer:(BOOL)a1;
- (id)URLStringFromLegacyURLString:(id)a0;
- (id)_URLScheme;
- (id)_copyMailboxUidWithParent:(id)a0 name:(id)a1 attributes:(unsigned long long)a2 existingMailboxUid:(id)a3 dictionary:(id)a4;
- (id)_copyMailboxWithParent:(id)a0 name:(id)a1 attributes:(unsigned long long)a2 dictionary:(id)a3;
- (void)_ensureWeHaveLoadedInitialMailboxList;
- (id)_folderIdsForMailboxUids:(id)a0;
- (id)_inboxFolderID;
- (id)_infoForMatchingURL:(id)a0;
- (id)_newMailboxWithParent:(id)a0 name:(id)a1 attributes:(unsigned int)a2 dictionary:(id)a3 withCreationOption:(int)a4;
- (void)_performFolderChange:(id)a0 completion:(id /* block */)a1;
- (id)_relativePathForType:(int)a0;
- (id)_relativePathSpecialMailboxUidWithType:(int)a0 create:(BOOL)a1;
- (id)_remoteIDsForFlagChangeAction:(id)a0;
- (id)_specialMailboxUidWithType:(int)a0 create:(BOOL)a1;
- (void)_synchronouslyLoadListingForParent:(id)a0;
- (id)_updateWatchedFolderIdsAndNotify:(BOOL)a0;
- (id)_watchedFolderIds;
- (id)accountConduit;
- (id)accountForRenewingCredentials;
- (void)accountHierarchyChanged:(id)a0;
- (BOOL)addRequest:(id)a0 consumer:(id)a1 mailbox:(id)a2;
- (BOOL)addRequests:(id)a0 mailbox:(id)a1;
- (BOOL)addRequests:(id)a0 mailbox:(id)a1 combine:(BOOL)a2;
- (id)allMailMailboxUid;
- (id)allMailboxUids;
- (BOOL)canArchiveSentMessages;
- (BOOL)canGoOffline;
- (BOOL)canReceiveNewMailNotifications;
- (void)cancelSearchQuery:(id)a0;
- (void)changePushedMailboxUidsAdded:(id)a0 deleted:(id)a1;
- (id)copyDataForRemoteEncryptionCertificatesForAddress:(id)a0 error:(id *)a1;
- (id)copyDataForRemoteEncryptionCertificatesForAddresses:(id)a0 errors:(id *)a1;
- (unsigned int)daysToSync;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (int)emptyFrequencyForMailboxType:(int)a0;
- (id)encryptionIdentityPersistentReferenceForAddress:(id)a0;
- (id)fetchLimits;
- (void)fetchMailboxList;
- (BOOL)finishedInitialMailboxListLoad;
- (id)folderIDForMailbox:(id)a0;
- (void)foldersContentsChanged:(id)a0;
- (id)iconString;
- (id)initWithDAAccount:(id)a0;
- (id)initWithLibrary:(id)a0 persistentAccount:(id)a1;
- (BOOL)isMailboxLocalForType:(int)a0;
- (BOOL)isRunningInDisallowedBundle;
- (id)mailboxForFolderID:(id)a0;
- (id)mailboxPathExtension;
- (id)mailboxUidForInfo:(id)a0;
- (id)meetingStorePersistentID;
- (BOOL)moveSupported;
- (BOOL)mustArchiveSentMessages;
- (BOOL)newMailboxNameIsAcceptable:(id)a0 reasonForFailure:(id *)a1;
- (BOOL)perMessageEncryptionEnabledForAddress:(id)a0;
- (BOOL)performRequests:(id)a0 mailbox:(id)a1;
- (void)performSearchQuery:(id)a0;
- (id)primaryMailboxUid;
- (BOOL)processRequests:(id)a0 mailbox:(id)a1;
- (void)pushedFoldersPrefsChanged:(id)a0;
- (id)pushedMailboxUids;
- (BOOL)reconstituteOrphanedMeetingInMessage:(id)a0;
- (BOOL)renameMailbox:(id)a0 newName:(id)a1 parent:(id)a2;
- (void)resetSpecialMailboxes;
- (BOOL)restrictedFromSyncingRecents;
- (BOOL)restrictedFromTransferingMessagesToOtherAccounts;
- (int)secureCompositionEncryptionPolicyForAddress:(id)a0;
- (int)secureCompositionSigningPolicyForAddress:(id)a0;
- (void)setDAAccount:(id)a0;
- (void)setEncryptionIdentityPersistentReference:(id)a0 forAddress:(id)a1;
- (void)setSigningIdentityPersistentReference:(id)a0 forAddress:(id)a1;
- (void)setSyncAnchor:(id)a0 forFolderID:(id)a1 mailbox:(id *)a2;
- (BOOL)shouldArchiveByDefault;
- (BOOL)shouldDisplayHostnameInErrorMessages;
- (BOOL)shouldFetchAgainWithError:(id)a0 foregroundRequest:(BOOL)a1;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (id)signingIdentityPersistentReferenceForAddress:(id)a0;
- (id)statisticsKind;
- (void)stopListeningForNotifications;
- (Class)storeClass;
- (BOOL)supportsMailDrop;
- (BOOL)supportsMailboxEditing;
- (BOOL)supportsMessageFlagging;
- (BOOL)supportsRemoteAppend;
- (BOOL)supportsServerDrafts;
- (int)supportsServerSearch;
- (BOOL)supportsThreadOperations;
- (BOOL)supportsUniqueServerId;
- (BOOL)supportsUserPushedMailboxes;
- (id)syncAnchorForFolderID:(id)a0 mailbox:(id *)a1;
- (id)syncAnchorForMailbox:(id)a0;
- (id)unactionableInvitationICSRepresentationInMessage:(id)a0 summary:(id *)a1;
- (id)uniqueServerIdForMessage:(id)a0;
- (id)unsupportedHandoffTypes;

@end