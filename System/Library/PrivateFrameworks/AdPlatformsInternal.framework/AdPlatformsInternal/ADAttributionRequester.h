@class NSString, NSNumber, NSXPCConnection;

@interface ADAttributionRequester : NSObject <ADAttribution_XPC>

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSNumber *transactionToken;

- (void)setServerToTest:(long long)a0;
- (id)currentRecord:(id *)a0;
- (void)requestAttributionDetails:(id /* block */)a0;
- (void)requestAttributionDetailsWithBlock:(id /* block */)a0;
- (BOOL)_isAppTrackingAuthorized;
- (void)beginAttributionRequest:(id)a0 reason:(id)a1 completionHandler:(id /* block */)a2;
- (void)overrideAttributionData:(id)a0;
- (void)attachSearchMetadataTo:(id)a0 forAdamID:(id)a1;
- (void)makeAttributionRequestWithObject:(id)a0 andHandler:(id /* block */)a1;
- (int)appRunState;
- (void)_clearDownloadDataFromRequest:(id)a0;
- (id)initWithConnection:(id)a0 bundleID:(id)a1 transactionID:(id)a2;
- (void).cxx_destruct;
- (void)attachDownloadDataTo:(id)a0 forAdamID:(id)a1;
- (void)setStocksAdEnabled:(BOOL)a0;
- (BOOL)productionClient;

@end
