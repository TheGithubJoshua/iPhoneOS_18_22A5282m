@class NSString, BMStoreStream;

@interface ATXBiomeSuggestedHomePageStream : NSObject <BMStream, BMSourceStream>

@property (retain, nonatomic) BMStoreStream *inner;
@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (id)source;
- (id)publisherFromStartTime:(double)a0;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithStoreConfig:(id)a0;

@end
