@class NSString, MFMailMessageLibrary;

@interface MFMessageChangeManager_iOS : EDMessageChangeManager <EDMessageChangeManagerSubClassMethods>

@property (weak, nonatomic) MFMailMessageLibrary *library;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)messagesForRemoteIDs:(id)a0 mailboxURL:(id)a1;
- (void)applyVIPStatus:(BOOL)a0 toMessagesInDatabase:(id)a1;
- (id)addNewMessages:(id)a0 mailboxURL:(id)a1 userInitiated:(BOOL)a2;
- (id)addLabels:(id)a0 removeLabels:(id)a1 toMessagesInDatabase:(id)a2;
- (void)willStartPersistenceDidAddMessages:(id)a0;
- (BOOL)mailboxIsAllMail:(id)a0;
- (id)messagesToJournalForMessages:(id)a0 inMailbox:(id)a1;
- (id)copyMessages:(id)a0 destinationMailboxURL:(id)a1 userInitiated:(BOOL)a2;
- (void)messageWasAppended:(id)a0;
- (void)actionHasChangedAccount:(id)a0;
- (void)didReflectNewMessages:(id)a0;
- (void).cxx_destruct;
- (BOOL)persistNewMessages:(id)a0 mailboxURL:(id)a1 oldMessagesByNewMessage:(id)a2 fromSyncing:(BOOL)a3;
- (void)setRemoteID:(id)a0 onMessageWithDatabaseID:(long long)a1;
- (BOOL)haveCompleteMIMEForMessage:(id)a0;
- (void)deletePersistedMessages:(id)a0;
- (id)initWithLibrary:(id)a0 database:(id)a1 localActionPersistence:(id)a2 messagePersistence:(id)a3 serverMessagePersistenceFactory:(id)a4 readLaterPersistence:(id)a5 bimiManager:(id)a6 hookResponder:(id)a7 hookRegistry:(id)a8;
- (void)displayErrorForTransferAction:(id)a0 withResults:(id)a1;
- (BOOL)mailboxPartOfAllMail:(id)a0;
- (id)messageForDatabaseID:(long long)a0;
- (id)moveMessages:(id)a0 destinationMailboxURL:(id)a1 userInitiated:(BOOL)a2;
- (void)didFinishPersistenceDidAddMessages:(id)a0;
- (id)accountForMailboxURL:(id)a0;
- (void)checkForNewActionsInMailboxID:(long long)a0;
- (id)applyFlagChange:(id)a0 toMessagesInDatabase:(id)a1;
- (void)setData:(id)a0 onMessage:(id)a1;
- (id)iterateMessagesInMailboxURLs:(id)a0 excludingMessages:(id)a1 batchSize:(unsigned long long)a2 returnMessagesForFlagChange:(id)a3 handler:(id /* block */)a4;
- (long long)mailboxDatabaseIDForURL:(id)a0;
- (void)resetStatusCountsForMailboxWithURL:(id)a0;

@end
