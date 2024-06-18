@class HDProfile;

@interface HDCloudSyncSharedSummaryManager : NSObject {
    HDProfile *_profile;
}

+ (void)unitTesting_setUrgentLatency:(double)a0;

- (id)initWithProfile:(id)a0;
- (id)push:(id /* block */)a0;
- (id)pull:(id /* block */)a0;
- (void)scheduleBackgroundPush;
- (id)setupSharingWithOutgoingSummarySharingEntry:(id)a0 sharingAuthorizations:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)revokeParticipantWithOutgoingSummarySharingEntry:(id)a0 completion:(id /* block */)a1;
- (void)scheduleUrgentPush;
- (id)synchronizeWithCompletion:(id /* block */)a0;

@end
