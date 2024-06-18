@class NSMutableDictionary, MSPGroupSessionStorage;
@protocol MSPSharedTripStorageDelegate;

@interface MSPSharedTripStorageController : NSObject

@property (retain, nonatomic) NSMutableDictionary *sharedTripGroupSessionInfo;
@property (retain, nonatomic) NSMutableDictionary *receiverRules;
@property (retain, nonatomic) NSMutableDictionary *senderRules;
@property (weak, nonatomic) id<MSPSharedTripStorageDelegate> delegate;
@property (retain, nonatomic) MSPGroupSessionStorage *senderSessionStorage;

+ (id)_receivedNotificationRulesPath;
+ (id)_receivedSessionsPath;
+ (id)_senderSessionStoragePath;
+ (id)_sentNotificationRulesPath;
+ (void)removeFilesFromBackupsIfNeeded;

- (id)init;
- (void)sendingRulesTouched;
- (id)receivingRulesForIdentifier:(id)a0;
- (void)_saveSenderSession;
- (void)updateGroupSessionStorageWithState:(id)a0;
- (void)removeSession:(id)a0;
- (void).cxx_destruct;
- (id)groupSessionInfoForKey:(id)a0;
- (void)_saveReceivingRules;
- (void)receivingRulesTouched;
- (void)_saveStoredSessions;
- (void)_saveSendingRules;
- (void)dealloc;
- (void)_loadSenderSession;
- (id)sendingRulesForIdentifier:(id)a0;
- (void)_loadStoredSessions;
- (void)addNewSession:(id)a0 originator:(id)a1 receivingHandle:(id)a2 receivingAccountIdentifier:(id)a3;

@end
