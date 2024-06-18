@class NSString, BMStoreStream;

@interface BMDKEventStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMStreamDeleting> {
    BMStoreStream *_storeStream;
    NSString *_identifier;
}

@property (readonly, nonatomic) NSString *identifier;

+ (id)streamNameFromDKStreamName:(id)a0;

- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publisher;
- (id)init;
- (id)initWithDKStreamIdentifier:(id)a0 contentProtection:(id)a1;
- (id)source;
- (id)publisherFromStartTime:(double)a0;
- (BOOL)pruneEventsWithError:(id *)a0 predicateBlock:(id /* block */)a1;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (void)deleteEventsWithPredicate:(id /* block */)a0;
- (void).cxx_destruct;
- (void)deleteLocalAndRemoteEventsWithReason:(unsigned long long)a0 usingPredicateBlock:(id /* block */)a1;
- (id)initWithStreamIdentifier:(id)a0 contentProtection:(id)a1;
- (void)pruneWithPredicateBlock:(id /* block */)a0;
- (void)deleteLocalAndRemoteEventsWithPredicateBlock:(id /* block */)a0;

@end
