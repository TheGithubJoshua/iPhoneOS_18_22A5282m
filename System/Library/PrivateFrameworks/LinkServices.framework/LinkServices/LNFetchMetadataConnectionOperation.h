@class LNBundleMetadata;

@interface LNFetchMetadataConnectionOperation : LNInterfaceConnectionOperation

@property (retain, nonatomic) LNBundleMetadata *metadata;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)start;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 completionHandler:(id /* block */)a1;

@end
