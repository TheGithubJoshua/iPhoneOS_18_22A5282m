@class NSString, BMStoreStream;

@interface BMAppLaunchStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMSyncableStream> {
    BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)remoteDevices;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publishersForRemoteDevices:(id)a0 startTime:(double)a1 includeLocal:(BOOL)a2 pipeline:(id /* block */)a3;
- (id)publisher;
- (id)init;
- (id)source;
- (id)publisherFromStartTime:(double)a0;
- (id)initWithConfig:(id)a0;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (void).cxx_destruct;
- (id)publishersForRemoteDevices:(id)a0 startTime:(id)a1 endTime:(id)a2 maxEvents:(id)a3 lastN:(id)a4 reversed:(BOOL)a5 includeLocal:(BOOL)a6 pipeline:(id /* block */)a7;

@end
