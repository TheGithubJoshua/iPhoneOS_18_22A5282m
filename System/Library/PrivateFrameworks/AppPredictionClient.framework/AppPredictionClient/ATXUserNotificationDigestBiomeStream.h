@class NSString, BMStoreStream, BMSource;

@interface ATXUserNotificationDigestBiomeStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
    BMSource *_source;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (id)source;
- (id)publisherFromStartTime:(double)a0;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithStoreConfig:(id)a0;

@end
