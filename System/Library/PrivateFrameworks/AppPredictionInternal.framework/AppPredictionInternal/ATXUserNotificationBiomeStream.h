@class NSString, BMStoreStream;

@interface ATXUserNotificationBiomeStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (id)source;
- (id)publisherFromStartTime:(double)a0;
- (void)deleteAllEvents;
- (void)sendEvent:(id)a0;
- (void)sendEvent:(long long)a0 notification:(id)a1 deliveryReason:(unsigned long long)a2;
- (id)publisherFromStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (void).cxx_destruct;
- (id)initWithStoreConfig:(id)a0;

@end