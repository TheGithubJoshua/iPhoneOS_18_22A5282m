@class NSDictionary, NSString, NSArray;

@interface FAFetchFamilyCircleRequest : FAFamilyCircleRequest

@property (readonly, retain) NSDictionary *serverResponse;
@property (nonatomic) long long qualityOfService;
@property (retain, nonatomic) NSString *context;
@property (copy) NSArray *expectedDSIDs;
@property (copy) NSArray *expectedAltDSIDs;
@property BOOL signedInAccountShouldBeApprover;
@property BOOL forceServerFetch;
@property unsigned long long cachePolicy;
@property BOOL doNotFetchFromServer;
@property BOOL promptUserToResolveAuthenticatonFailure;

- (id)init;
- (unsigned long long)_cachePolicy;
- (id)fetchCachedFamilyCircleWithCache:(id)a0 deviceInfo:(id)a1 error:(id *)a2;
- (id)fetchFamilyCircleWithError:(id *)a0;
- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (id)fetchCachedFamilyCircle:(id *)a0;
- (id)requestOptions;

@end
