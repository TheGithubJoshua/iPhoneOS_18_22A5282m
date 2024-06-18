@class NSString, BMStoreStream;

@interface BMRestrictedStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMSyncableStream> {
    BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)remoteDevices;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publishersForRemoteDevices:(id)a0 startTime:(double)a1 includeLocal:(BOOL)a2 pipeline:(id /* block */)a3;
- (id)init;
- (id)initWithIdentifier:(id)a0;
- (id)source;
- (id)publisherFromStartTime:(double)a0;
- (id)initWithIdentifier:(id)a0 segmentSize:(unsigned long long)a1;
- (void)pruneLocalAndRemoteEventsWithReason:(unsigned long long)a0 usingPredicateBlock:(id /* block */)a1;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)initWithIdentifier:(id)a0 segmentSize:(unsigned long long)a1 pruningPolicy:(id)a2;
- (void).cxx_destruct;
- (void)pruneLocalAndRemoteEventsWithPredicateBlock:(id /* block */)a0;
- (void)pruneWithPredicateBlock:(id /* block */)a0;

@end
