@class NSString, BMStoreStream;

@interface ATXDigestOnboardingLoggingBiomeStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (id)source;
- (id)publisherFromStartTime:(double)a0;
- (void)deleteAllEvents;
- (void).cxx_destruct;
- (id)initWithStoreConfig:(id)a0;

@end
