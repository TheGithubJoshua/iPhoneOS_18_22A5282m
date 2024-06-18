@class NSString, BMStoreStream;

@interface ATXBiomeLightweightClientModelCacheUpdateStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (id)source;
- (id)publisherFromStartTime:(double)a0;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1;
- (id)initWithStoreConfig:(id)a0;

@end
