@class NSOperationQueue, NSXPCConnection;

@interface MSVArtworkService : NSObject

@property (retain, nonatomic) NSOperationQueue *serviceThrottlingOperationQueue;
@property (retain, nonatomic) NSOperationQueue *serviceColorAnalysisOperationQueue;
@property (retain, nonatomic) NSXPCConnection *serverConnection;

+ (id)sharedService;

- (id)init;
- (void)sendRequest:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sendRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
