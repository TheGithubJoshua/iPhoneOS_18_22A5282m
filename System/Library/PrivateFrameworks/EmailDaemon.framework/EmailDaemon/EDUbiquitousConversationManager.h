@class NSMutableDictionary, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_os_log, EDUbiquitousConversationManagerDelegate, EDConversationRemoteStorage;

@interface EDUbiquitousConversationManager : NSObject <EDConversationRemoteStorageDelegate, EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (weak, nonatomic) id<EDUbiquitousConversationManagerDelegate> delegate;
@property (retain, nonatomic) id<EDConversationRemoteStorage> cloudStorage;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *conversationIDsBySyncKey;
@property (retain, nonatomic) NSMutableSet *unmatchedKeys;
@property (nonatomic) BOOL initialized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_syncKeyForConversationID:(long long)a0;
- (BOOL)_synchronize;
- (void)_setCloudStorageValue:(id)a0 forKey:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)performDailyExportForChangedConversations:(id)a0;
- (void)setFlags:(unsigned long long)a0 forConversations:(id)a1;
- (id)syncKeyForUpdatedConversation:(long long)a0 flags:(unsigned long long)a1;
- (void)pruneDatabasePurgingOldestEntries:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)hasSubscribedConversations;
- (void)performInitialSync;
- (void)conversationRemoteStorage:(id)a0 didChangeEntries:(id)a1 reason:(long long)a2;
- (void)_mergeServerChanges:(id)a0;

@end
