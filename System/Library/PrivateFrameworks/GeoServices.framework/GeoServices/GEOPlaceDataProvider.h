@interface GEOPlaceDataProvider : NSObject

@property (nonatomic) BOOL isLoading;
@property (copy, nonatomic) id /* block */ finishedHandler;
@property (copy, nonatomic) id /* block */ errorHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelRequest;
- (void)cancelProviderRequest;
- (void)providerDidCancel;
- (void)providerReceivedErrorCode:(long long)a0 userInfo:(id)a1;
- (void)providerReceivedResponse:(id)a0 userInfo:(id)a1;
- (void)requestCompleted;
- (void)startProviderWithRequest:(id)a0 appIdentifier:(id)a1;
- (void)startRequest:(id)a0 appIdentifier:(id)a1 finished:(id /* block */)a2 error:(id /* block */)a3;

@end
