@class ATXCompletedDigestBiomeStream;
@protocol ATXNotificationResolutionSourceProtocol;

@interface ATXEngagementTrackedDigestBiomeStream : NSObject {
    ATXCompletedDigestBiomeStream *_completedDigestStream;
    id<ATXNotificationResolutionSourceProtocol> _resolutionSource;
}

- (id)init;
- (id)publisherFromStartTime:(double)a0;
- (void).cxx_destruct;
- (id)initFromCompletedDigestBiomeStream:(id)a0;
- (id)initFromCompletedDigestBiomeStream:(id)a0 resolutionSource:(id)a1;

@end
