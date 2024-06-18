@class IMDCKDatabaseManager, APSConnection, CKRecordZone, NSString, CKRecordZoneID;

@interface IMDRecordZoneManager : NSObject <APSConnectionDelegate>

@property (retain, nonatomic) IMDCKDatabaseManager *dataBaseManager;
@property (retain, nonatomic) APSConnection *pushConnection;
@property (readonly, nonatomic) CKRecordZoneID *chatRecordZoneID;
@property (readonly, nonatomic) CKRecordZone *chatRecordZone;
@property (readonly, nonatomic) CKRecordZoneID *attachmentRecordZoneID;
@property (readonly, nonatomic) CKRecordZone *attachmentRecordZone;
@property (readonly, nonatomic) CKRecordZoneID *messageRecordZoneID;
@property (readonly, nonatomic) CKRecordZone *messageRecordZone;
@property (readonly, nonatomic) CKRecordZoneID *updateRecordZoneID;
@property (readonly, nonatomic) CKRecordZone *updateRecordZone;
@property (readonly, nonatomic) CKRecordZoneID *analyticRecordZoneID;
@property (readonly, nonatomic) CKRecordZone *analyticRecordZone;
@property (readonly, nonatomic) CKRecordZoneID *deDupeSaltZoneID;
@property (readonly, nonatomic) CKRecordZone *deDupeSaltRecordZone;
@property (readonly, nonatomic) CKRecordZoneID *metricZoneID;
@property (readonly, nonatomic) CKRecordZoneID *recoverableMessageRecordZoneID;
@property (readonly, nonatomic) CKRecordZone *recoverableMessageRecordZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)deleteMessageZone;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)createDeDupeSaltZoneIfNeededWithCompletionBlock:(id /* block */)a0;
- (void)_setUpPushConnection;
- (void)createSubscriptionIfNeededOnDeDupeZoneForSubscription:(id)a0 recordType:(id)a1 completionBlock:(id /* block */)a2;
- (long long)derivedQualityOfService;
- (void)createChatZoneIfNeededWithCompletionBlock:(id /* block */)a0;
- (void)createAttachmentZoneIfNeededWithCompletionBlock:(id /* block */)a0;
- (void)deleteAnalyticZone;
- (id)ckUtilities;
- (void)_checkRecordZoneExists:(id)a0 completionBlock:(id /* block */)a1;
- (void)_createSubscriptionIfNeededForZoneID:(id)a0 subscriptionID:(id)a1 recordType:(id)a2 completionBlock:(id /* block */)a3;
- (void)_createRecordZone:(id)a0 completionBlock:(id /* block */)a1;
- (void)_deleteZone:(id)a0;
- (void)createRecoverableMessageZoneIfNeededWithCompletionBlock:(id /* block */)a0;
- (void)createAnalyticZoneIfNeededWithCompletionBlock:(id /* block */)a0;
- (void)_handleNotificationForZoneID:(id)a0 subscriptionID:(id)a1;
- (void)_deleteAllZonesForDatabase:(id)a0;
- (id)errorAnalyzer;
- (void)_createRecordZoneIfNeeded:(id)a0 completionBlock:(id /* block */)a1;
- (void)createMessageZoneIfNeededWithCompletionBlock:(id /* block */)a0;
- (void)_createSubscriptionForZoneID:(id)a0 subscriptionID:(id)a1 recordType:(id)a2 completionBlock:(id /* block */)a3;
- (void)deleteUpdateZone;
- (void)createUpdateZoneIfNeededWithCompletionBlock:(id /* block */)a0;
- (void)deleteAllZones;
- (void)dealloc;
- (void)deleteChatZone;
- (void)fetchChatZoneToCheckManateeStatus:(id /* block */)a0;
- (void)deleteAttachmentZone;
- (void)deleteDeDupeSaltZone;
- (void)deleteRecoverableMessageZone;
- (void)_deleteZone:(id)a0 forDatabase:(id)a1;

@end
