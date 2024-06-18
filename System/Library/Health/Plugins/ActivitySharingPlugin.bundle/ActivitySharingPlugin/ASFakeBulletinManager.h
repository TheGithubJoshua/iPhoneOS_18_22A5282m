@class ASActivityDataBulletinManager, NSString, ASFakingManager, ASCompetitionBulletinManager, ASFriendInviteBulletinManager;
@protocol ASBulletinPostingManager;

@interface ASFakeBulletinManager : NSObject <ASActivitySharingManagerReadyObserver> {
    ASActivityDataBulletinManager *_activityDataBulletinManager;
    ASCompetitionBulletinManager *_competitionBulletinManager;
    ASFakingManager *_fakingManager;
    ASFriendInviteBulletinManager *_friendInviteBulletinManager;
    id<ASBulletinPostingManager> _bulletinPostingManager;
    int notifyGoalCompletionDuringCompetitionToken;
    int notifyCompetitionRequestToken;
    int notifyCompetitionAcceptToken;
    int notifyCompetitionEndWinnerToken;
    int notifyCompetitionEndLoserToken;
    int notifyCompetitionEndTieToken;
    int notifyCompetitionScoreCapCelebrationToken;
    int notifyGoalCompletionToken;
    int notifyAchievementToken;
    int notifyWorkoutToken;
    int notifyVideoWorkoutToken;
    int notifyGuidedRunWorkoutToken;
    int notifyGuidedWalkWorkoutToken;
    int notifyBatchToken;
    int notifyInviteRequestToken;
    int notifyInviteResponseToken;
    int notifyOfFakeInviteNeedsSetupToken;
    int notifyOfFakeSignInToken;
    int notifyOfFakeUpgradeToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_showFakeCompetitionEndedWinnerNotification;
- (void)activitySharingManagerReady:(id)a0;
- (void)_showFakeNeedToUpgrade;
- (void)_showFakeGuidedWalkWorkoutNotification;
- (void)registerBulletins;
- (void)_showFakeCompetitionEndedLoserNotification;
- (void)_showFakeGoalCompletionNotification;
- (void)_showFakeInviteAttemptNeedsSetup;
- (void)_showFakeCompetitionEndedTieNotification;
- (void)_showFakeInvitationResponse;
- (void)_showFakeGoalCompletionDuringCompetitionNotification;
- (id)_fakeContact;
- (void).cxx_destruct;
- (void)_showFakeBatchNotification;
- (void)_showFakeWorkoutNotificationWithWorkout:(id)a0;
- (void)_showFakeAchievementNotification;
- (void)_showFakeInvitationRequest;
- (void)_showFakeVideoWorkoutNotification;
- (void)_showFakeCompetitionScoreCapCelebrationNotification;
- (void)dealloc;
- (void)deregisterBulletins;
- (void)_showFakeNeedToSignIn;
- (void)_showFakeCompetitionAcceptedNotification;
- (void)_showFakeGuidedRunWorkoutNotification;
- (void)_showFakeWorkoutNotification;
- (void)_showFakeCompetitionRequestNotification;

@end
