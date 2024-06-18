@class NSCountedSet;
@protocol MSMediaStreamDaemonDelegate;

@interface MSMediaStreamDaemon : MSDaemon {
    NSCountedSet *_retainedObjects;
}

@property (nonatomic) id<MSMediaStreamDaemonDelegate> delegate;

- (void)retryOutstandingActivities;
- (id)init;
- (id)_boundSubscriberForPersonID:(id)a0;
- (void)pollForSubscriptionUpdatesForPersonID:(id)a0;
- (void)refreshServerSideConfigurationForPersonID:(id)a0;
- (void)didReceiveNewShareState:(id)a0 oldShareState:(id)a1 forPersonID:(id)a2;
- (id)subscribedStreamsForPersonID:(id)a0;
- (void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)a0;
- (void)stop;
- (id)_boundDeleterForPersonID:(id)a0;
- (void)showInvitationFailureAlertForPersonID:(id)a0 failures:(id)a1;
- (void)forgetPersonID:(id)a0;
- (void)resetSubscriberSyncForPersonID:(id)a0;
- (void)start;
- (BOOL)dequeueAssetCollectionWithGUIDs:(id)a0 personID:(id)a1 outError:(id *)a2;
- (id)nextActivityDate;
- (void)deleteAssetCollections:(id)a0 forPersonID:(id)a1;
- (void)didUnidle;
- (void)didReceivePushNotificationForPersonID:(id)a0;
- (id)_boundPublisherForPersonID:(id)a0;
- (id)ownSubscribedStreamForPersonID:(id)a0;
- (void).cxx_destruct;
- (void)abortAllActivityForPersonID:(id)a0;
- (id)serverSideConfigurationForPersonID:(id)a0;
- (BOOL)isInRetryState;
- (BOOL)enqueueAssetCollection:(id)a0 personID:(id)a1 outError:(id *)a2;
- (void)reenqueueQuarantinedActivitiesWithReason:(id)a0;
- (void)didReceiveAuthenticationSuccessForPersonID:(id)a0;
- (void)didReceiveNewServerSideConfigurationForPersonID:(id)a0;
- (void)didIdle;
- (void)didExceedPublishQuotaForPersonID:(id)a0 retryDate:(id)a1;
- (id)_boundServerSideConfigManagerForPersonID:(id)a0;
- (void)didReceiveServerSideConfigurationVersion:(id)a0 forPersonID:(id)a1;
- (void)didReceiveAuthenticationFailureForPersonID:(id)a0;
- (BOOL)mayDownloadPersonID:(id)a0;
- (void)didReceiveGlobalResetSyncForPersonID:(id)a0;
- (BOOL)personIDHasOutstandingPublications:(id)a0;
- (void)stopAllActivities;
- (BOOL)hasOutstandingActivity;
- (void)computeHashForAsset:(id)a0 personID:(id)a1;

@end
