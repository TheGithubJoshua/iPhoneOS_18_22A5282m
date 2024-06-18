@class ATXCompletedMissedNotificationRankingStream;
@protocol ATXNotificationResolutionSourceProtocol;

@interface ATXEngagementTrackedMissedNotificationRankingBiomeStream : NSObject {
    ATXCompletedMissedNotificationRankingStream *_completedRankingStream;
    id<ATXNotificationResolutionSourceProtocol> _resolutionSource;
}

- (id)init;
- (id)publisherFromStartTime:(double)a0;
- (void).cxx_destruct;
- (id)initFromCompletedMNRBiomeStream:(id)a0;
- (id)initFromCompletedMNRBiomeStream:(id)a0 resolutionSource:(id)a1;

@end
