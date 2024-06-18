@class HKProxyProvider, NSString;

@interface HKVerifiableHealthRecordsParsingService : NSObject <_HKXPCExportable>

@property (retain, nonatomic) HKProxyProvider *proxyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)_fetchProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)parseDataSource:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;

@end
