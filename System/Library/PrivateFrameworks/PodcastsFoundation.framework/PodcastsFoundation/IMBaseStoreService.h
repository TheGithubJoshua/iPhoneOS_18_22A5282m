@class NSURLSessionConfiguration, IMURLSession;
@protocol IMRequestEncoding;

@interface IMBaseStoreService : NSObject

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) id<IMRequestEncoding> requestEncoder;
@property (retain, nonatomic) NSURLSessionConfiguration *configuration;
@property (retain, nonatomic) IMURLSession *amsUrlSession;
@property (nonatomic) BOOL wantsJSSignature;
@property (nonatomic) BOOL personalizeRequests;

+ (BOOL)isValidResponseJson:(id)a0 response:(id)a1 error:(id)a2;
+ (BOOL)shouldFollowRedirects;
+ (id)signatureQueryParams;

- (id)bag;
- (void)cancelAllRequests;
- (id)init;
- (void)signRequest:(id)a0;
- (void).cxx_destruct;
- (void)performRequest:(id /* block */)a0;
- (id)initWithConcurrentOperationCount:(long long)a0 requestEncodingType:(unsigned long long)a1;
- (void)performDataRequest:(id)a0 account:(id)a1 callback:(id /* block */)a2;
- (void)performDataRequest:(id)a0 callback:(id /* block */)a1;
- (void)performUrlRequest:(id)a0 callback:(id /* block */)a1;
- (void)setURLProtocolDelegate:(id)a0;

@end
