@class NSString, NSSet, NSMutableDictionary, ASBulletinStore, ASOnWristMonitor, HDProfile, NSObject, UNUserNotificationCenter;
@protocol ASBulletinPostingManagerDelegate, OS_dispatch_queue;

@interface ASGizmoBulletinPostingManager : NSObject <ASOnWristMonitorDelegate, HDNanoAlertSuppressionObserver, HDDatabaseProtectedDataObserver, UNUserNotificationCenterDelegate, ASBulletinPostingManager, ASActivitySharingManagerReadyObserver> {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    ASBulletinStore *_notificationStore;
    NSSet *_notificationRequests;
    HDProfile *_profile;
    ASOnWristMonitor *_onWristMonitor;
    double _deferredBulletinTimestamp;
    NSMutableDictionary *_friendUUIDToCompetitionRequestNotificationRequestRecordMap;
    UNUserNotificationCenter *_userNotificationCenter;
}

@property (weak, nonatomic) id<ASBulletinPostingManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)postNotificationRequest:(id)a0;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (id)topicIdentifiers;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void)activitySharingManagerReady:(id)a0;
- (void)_withdrawNotificationRequestsWithIdentifiers:(id)a0;
- (void).cxx_destruct;
- (void)removeNotificationWithIdentifier:(id)a0;
- (BOOL)_isPostingAllowed;
- (void)_postNotificationRequest:(id)a0;
- (void)postFakeBulletins:(id)a0;
- (void)removeCompetitionNotificationsForFriendUUID:(id)a0;
- (void)dealloc;
- (void)registerNotificationCategories:(id)a0;
- (void)enqueueBulletins:(id)a0 withPostingSyle:(long long)a1;
- (void)handleNotificationResponse:(id)a0 completion:(id /* block */)a1;
- (id)_batchedNotificationRequestsFromCodableBulletins:(id)a0 withAdditions:(id)a1;
- (id)_batchedNotificationRequestsFromCodableBulletins:(id)a0;
- (id)_notificationRequestFromCodableBulletin:(id)a0;
- (id)_notificationRequestFromCodableBulletin:(id)a0 withAdditions:(id)a1;
- (void)_postQueuedNotificationRequestsIfPossible;
- (void)_queue_postNotificationRequests:(id)a0;
- (void)alertSuppressionInvalidatedForSuppressionId:(id)a0 reason:(long long)a1;
- (void)onWristMonitorUpdatedOnWristState;
- (id)recordIDForFriendUUID:(id)a0;
- (void)removeRecordIDForFriendUUID:(id)a0;

@end
