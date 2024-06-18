@class NSArray, NSMutableArray, AMSMockURLOverride;

@interface AMSMockNetworkProxy : NSURLProtocol

@property (class, readonly, nonatomic) NSMutableArray *_executedOverrides;
@property (class, readonly, nonatomic) NSArray *registeredOverrides;
@property (class, readonly, nonatomic) NSArray *executedOverrides;

@property (retain, nonatomic) AMSMockURLOverride *currentOverride;

+ (void)clearOverrides;
+ (void)addOverride:(id)a0;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (void)removeOverride:(id)a0;
+ (void)_sync:(id /* block */)a0;
+ (id)_overrides;
+ (void)_removeAllOverrides;
+ (void)_removeOverride:(id)a0;

- (void)startLoading;
- (void)stopLoading;
- (void).cxx_destruct;
- (void)sendResponse:(id)a0;
- (void)finishWithError:(id)a0;
- (void)finishWithData:(id)a0;
- (void)performRedirectFromResponse:(id)a0;

@end
