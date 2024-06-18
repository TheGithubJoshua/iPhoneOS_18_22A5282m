@class ATXMissedNotificationRankingBiomeStream;

@interface ATXCompletedMissedNotificationRankingStream : NSObject {
    ATXMissedNotificationRankingBiomeStream *_rawMNREventStream;
}

- (id)init;
- (id)publisherFromStartTime:(double)a0;
- (void).cxx_destruct;
- (id)initFromMissedNotificationRankingEventBiomeStream:(id)a0;

@end
