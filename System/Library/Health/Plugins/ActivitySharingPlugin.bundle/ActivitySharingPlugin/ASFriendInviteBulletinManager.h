@class NSString, NSMutableDictionary, NSObject;
@protocol ASFriendInviteBulletinManagerDelegate, OS_dispatch_queue, ASBulletinPostingManager;

@interface ASFriendInviteBulletinManager : NSObject <ASBulletinPostingManagerDelegate, ASActivitySharingManagerReadyObserver> {
    id<ASBulletinPostingManager> _bulletinPostingManager;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableDictionary *_postedFriendInviteIdentifiersForContactUUID;
}

@property (weak, nonatomic) id<ASFriendInviteBulletinManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showInviteAcceptResponseFrom:(id)a0;
- (id)init;
- (void)activitySharingManagerReady:(id)a0;
- (id)_newPrepolulatedUserInfoForInvitationFromContactUUID:(id)a0 categoryIdentifier:(id)a1 notificationContent:(id)a2 title:(id)a3 message:(id)a4;
- (void)showInviteAttemptNeedToSignInFrom:(id)a0;
- (BOOL)_isSharingSetup;
- (id)_userInfoForInvitationResponseFromContact:(id)a0 notificationContent:(id)a1 message:(id)a2;
- (id)_notificationRequestForInvitationFromContactUUID:(id)a0 categoryIdentifier:(id)a1 requestIdentifier:(id)a2 title:(id)a3 message:(id)a4;
- (void)showInviteAttemptNeedsSetupFromContact:(id)a0;
- (void)_submitNotificationRequest:(id)a0 forContact:(id)a1;
- (void)showMaxNumberOfFriendsError;
- (void)showVersionTooLowForIncomingInviteFrom:(id)a0;
- (id)_inviteNotificationCategories;
- (void).cxx_destruct;
- (void)_showIncompatibleVersionForContact:(id)a0 title:(id)a1 formatString:(id)a2;
- (void)showInviteAttemptNeedToUpgradeFrom:(id)a0;
- (void)withdrawInviteNotificationsForContact:(id)a0;
- (void)showVersionTooLowForOutgoingInviteTo:(id)a0;
- (void)showInviteRequestFromContact:(id)a0 withPostingStyle:(long long)a1;
- (void)_newPrepopulatedNotificationContentForNotificationContent:(id)a0 title:(id)a1 message:(id)a2;
- (void)bulletinPostingManager:(id)a0 didReceiveNotificationResponse:(id)a1;
- (id)_notificationRequestForInvitationFromContact:(id)a0 requestIdentifier:(id)a1;
- (void)showErrorAcceptingInviteFrom:(id)a0;
- (id)_notificationRequestForInvitationFromContact:(id)a0 categoryIdentifier:(id)a1 requestIdentifier:(id)a2 title:(id)a3 formatString:(id)a4;
- (void)showVersionTooHighForOutgoingInviteTo:(id)a0;

@end
