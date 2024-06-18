@class ATXUserNotificationDigestBiomeStream;

@interface ATXCompletedDigestBiomeStream : NSObject {
    ATXUserNotificationDigestBiomeStream *_rawDigestEventStream;
}

- (id)init;
- (id)initFromDigestEventBiomeStream:(id)a0;
- (id)publisherFromStartTime:(double)a0;
- (void).cxx_destruct;

@end
