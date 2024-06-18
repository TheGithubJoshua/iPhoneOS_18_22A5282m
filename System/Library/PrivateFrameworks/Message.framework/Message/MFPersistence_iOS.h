@class EDServerMessagePersistenceFactory, EDRemoteContentManager, EMRemoteContentURLCache, EDMailboxPersistence, EDRemoteContentPersistence, NSString, EDSearchableIndexManager, EDRemoteContentCacheConfiguration, EDPersistenceDatabase, EDMessageChangeManager, EDRemindMeNotificationController, EDMessagePersistence, EDThreadPersistence, EDConversationPersistence, EDRichLinkPersistence, NSObject, EDReadLaterPersistence, EDDataDetectionPersistence, MFMailMessageLibrary, EMRemoteContentURLSession, EDAttachmentPersistenceManager, EDBIMIManager, EDSenderPersistence, EDLocalActionPersistence, EDSendLaterPersistence, EDMailboxActionPersistence;
@protocol OS_os_log, EMUserProfileProvider, EDAccountsProvider, EDRemoteSearchProvider;

@interface MFPersistence_iOS : EDPersistence <EFLoggable> {
    EDConversationPersistence *_conversationPersistence;
    EDPersistenceDatabase *_database;
    EDDataDetectionPersistence *_dataDetectionPersistence;
    EDLocalActionPersistence *_localActionPersistence;
    EDMailboxActionPersistence *_mailboxActionPersistence;
    EDMessageChangeManager *_messageChangeManager;
    EDMessagePersistence *_messagePersistence;
    id<EDRemoteSearchProvider> _remoteSearchProvider;
    EDSearchableIndexManager *_searchableIndexManager;
    EDServerMessagePersistenceFactory *_serverMessagePersistenceFactory;
    EDThreadPersistence *_threadPersistence;
    EDSenderPersistence *_senderPersistence;
    EDRemoteContentManager *_remoteContentManager;
    EDRemoteContentPersistence *_remoteContentPersistence;
    EDRichLinkPersistence *_richLinkPersistence;
    EDAttachmentPersistenceManager *_attachmentPersistenceManager;
    EDRemoteContentCacheConfiguration *_remoteContentCacheConfiguration;
    EMRemoteContentURLCache *_remoteContentURLCache;
    EMRemoteContentURLSession *_remoteContentURLSession;
    EDReadLaterPersistence *_readLaterPersistence;
    EDSendLaterPersistence *_sendLaterPersistence;
    EDBIMIManager *_bimiManager;
    EDRemindMeNotificationController *_remindMeNotificationController;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (weak, nonatomic) MFMailMessageLibrary *library;
@property (retain, nonatomic) EDMailboxPersistence *mailboxPersistence;
@property (retain, nonatomic) id<EDAccountsProvider> accountsProvider;
@property (retain, nonatomic) id<EMUserProfileProvider> userProfileProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)messagePersistence;
- (id)localActionPersistence;
- (id)threadPersistence;
- (id)database;
- (id)messageChangeManager;
- (id)senderPersistence;
- (void)setUpWithMailboxProvider:(id)a0 remoteSearchProvider:(id)a1;
- (id)bimiManager;
- (void)_configureSearchableIndexManagerIfNecessary;
- (id)remoteContentURLCache;
- (id)searchableIndexManager;
- (void)setRemoteContentURLSession:(id)a0;
- (id)dataDetectionPersistence;
- (id)conversationPersistence;
- (id)initWithPath:(id)a0 inMemoryIdentifier:(id)a1 library:(id)a2 propertyMapper:(id)a3;
- (id)remoteContentManager;
- (void).cxx_destruct;
- (void)scheduleRecurringActivity;
- (id)remoteSearchProvider;
- (void)setRemoteContentURLCache:(id)a0;
- (id)remoteContentCacheConfiguration;
- (void)_configureAttachmentPersistenceManager;
- (void)test_tearDown;
- (id)attachmentPersistenceManager;
- (id)serverMessagePersistenceFactory;
- (id)mailboxActionPersistence;
- (id)remoteContentPersistence;
- (id)richLinkPersistence;
- (id)sendLaterPersistence;
- (id)remindMeNotificationController;
- (id)readLaterPersistence;
- (id)remoteContentURLSession;
- (id)persistenceStatistics;

@end
