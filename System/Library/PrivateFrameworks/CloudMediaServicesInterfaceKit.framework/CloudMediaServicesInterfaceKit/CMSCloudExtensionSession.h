@class NSError, NSString, NSURLSession, NSMutableDictionary, CMSPlayerContext, CMSCloudExtensionConfiguration, NSMutableArray, NSObject, NSURLRequest, NSURLSessionDataTask;
@protocol OS_dispatch_queue, CMSCloudExtensionAuthProviderDelegate;

@interface CMSCloudExtensionSession : NSObject <NSURLSessionDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _requestQueueLock;
    NSObject<OS_dispatch_queue> *_requestDispatch;
    BOOL _connected;
    BOOL _waiting;
    NSURLRequest *_lastRequest;
    NSURLSessionDataTask *_dataTask;
    NSError *_closeError;
    id<CMSCloudExtensionAuthProviderDelegate> _authProvider;
    id /* block */ _closeCompletion;
}

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSMutableDictionary *results;
@property (retain, nonatomic) NSMutableDictionary *exceptions;
@property (retain, nonatomic) NSMutableArray *requestQueue;
@property (retain, nonatomic) NSMutableDictionary *completions;
@property (retain, nonatomic) NSMutableDictionary *durations;
@property (nonatomic) double totalDuration;
@property (retain, nonatomic) CMSCloudExtensionConfiguration *config;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (copy, nonatomic) NSString *authHeader;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) unsigned int qosClass;
@property (nonatomic) BOOL updateUserTasteProfile;
@property (nonatomic) BOOL allowExplicitContent;
@property (nonatomic) BOOL shuffledPlayback;
@property (copy, nonatomic) CMSPlayerContext *intentPlayerContext;
@property (nonatomic) id /* block */ prepareRequestHook;
@property (copy, nonatomic) NSString *endpointIdentifier;
@property (copy, nonatomic) NSString *requesterHomeUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)_connectSession;
- (void)closeWithForce:(BOOL)a0;
- (id)_constraintsDefinition;
- (void)_handleURLResponse:(id)a0 before:(id)a1 networkActivity:(id)a2 request:(id)a3 data:(id)a4 error:(id)a5;
- (BOOL)_handleURLResponseCode:(long long)a0 error:(id)a1 before:(id)a2 request:(id)a3 networkActivity:(id)a4 retryHandler:(id /* block */)a5;
- (id)_parsedObjectFromData:(id)a0 inResponse:(id)a1 error:(id *)a2;
- (void)_performActivityUpdate:(id)a0 completion:(id /* block */)a1;
- (id)_queuePlayMediaForActivity:(id)a0;
- (id)_requestForMethods:(id)a0 before:(id)a1 error:(id *)a2;
- (id)_resultsFromData:(id)a0 inResponse:(id)a1 error:(id *)a2;
- (void)_retryRequest:(id)a0 before:(id)a1 networkActivity:(id)a2 completionHandler:(id /* block */)a3;
- (void)_retryRequestAfterAuthTokenRenewal:(id)a0 parentNetworkActivity:(id)a1 before:(id)a2 completionHandler:(id /* block */)a3;
- (id)_sessionDescriptionWithDeadline:(id)a0;
- (BOOL)_updateDynamicHeadersOnRequest:(id)a0 withDeadline:(id)a1;
- (double)durationForMethod:(id)a0;
- (void)getAlbumArtDataFromURL:(id)a0 networkActivity:(id)a1 completionHandler:(id /* block */)a2;
- (void)getContentProtectionKeyForAssetIdentifier:(id)a0 usingKeySystem:(id)a1 andKeyRequest:(id)a2 playerContext:(id)a3 userActivityDictionary:(id)a4 networkActivity:(id)a5 completionHandler:(id /* block */)a6;
- (void)getFairplayCertificateUsingNetworkActivity:(id)a0 completionHandler:(id /* block */)a1;
- (void)getQueueSegmentFromURL:(id)a0 referrer:(id)a1 networkActivity:(id)a2 completion:(id /* block */)a3;
- (id)initWithConfiguration:(id)a0 authProviderDelegate:(id)a1;
- (id)peekResponseForMethod:(id)a0 exception:(id *)a1;
- (void)performMethod:(id)a0 withParams:(id)a1 networkActivity:(id)a2 completion:(id /* block */)a3;
- (void)publishContentFailure:(id)a0 forActivity:(id)a1 whilePlaying:(id)a2 previousContentURL:(id)a3 nextContentURL:(id)a4 networkActivity:(id)a5 completion:(id /* block */)a6;
- (void)report:(unsigned long long)a0 forActivity:(id)a1 nowPlaying:(id)a2 previous:(id)a3 timestamp:(id)a4 completion:(id /* block */)a5;
- (void)reportContentFailure:(id)a0 forActivity:(id)a1 whilePlaying:(id)a2 timestamp:(id)a3 completion:(id /* block */)a4;
- (void)requestQueueForActivity:(id)a0 networkActivity:(id)a1 completion:(id /* block */)a2;
- (void)setCloseCompletion:(id /* block */)a0;

@end
