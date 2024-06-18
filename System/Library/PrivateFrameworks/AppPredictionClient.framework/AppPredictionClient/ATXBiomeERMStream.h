@class NSString, BMStoreStream;

@interface ATXBiomeERMStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (id)source;
- (id)publisherFromStartTime:(double)a0;
- (void).cxx_destruct;
- (id)initWithStoreConfig:(id)a0;

@end
