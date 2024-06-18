@class NSString, BMStreamDatastoreReader, BMStreamsAccessClient, BMStoreBookmark;

@interface BPSBiomeStorePublisher : BMBookmarkablePublisher {
    double _startTime;
    double _endTime;
    unsigned long long _maxEvents;
    unsigned long long _lastEventCount;
    BOOL _reversed;
    BMStoreBookmark *_bookmark;
    BMStreamsAccessClient *_accessClient;
    BMStreamDatastoreReader *_streamDatastoreReader;
}

@property (readonly, nonatomic) NSString *streamId;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)canStorePassThroughValueInBookmark;
- (id)bookmarkableUpstreams;
- (BOOL)canStoreInternalStateInBookmark;
- (id)init;
- (void)subscribe:(id)a0;
- (id)withStartTime:(double)a0;
- (id)withBookmark:(id)a0;
- (id)reverse;
- (void).cxx_destruct;
- (id)initWithStreamId:(id)a0 storeConfig:(id)a1;
- (id)initWithStreamDatastoreReader:(id)a0 streamsAccessClient:(id)a1;
- (id)withEndTime:(double)a0;
- (id)initWithStreamId:(id)a0 storeConfig:(id)a1 streamsAccessClient:(id)a2;
- (id)withMaxEvents:(unsigned long long)a0;
- (id)withLastEvents:(unsigned long long)a0;

@end
