@class NSUUID, HKTaskServerProxyProvider, NSString;

@interface ACHDatabaseAssertionClient : NSObject <_HKXPCExportable>

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)acquireDatabaseAssertionWithIdentifier:(id)a0 duration:(double)a1 error:(id *)a2;
- (id)acquireDatabaseAssertionWithIdentifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)invalidateAssertionWithToken:(id)a0 error:(id *)a1;
- (id)exportedInterface;

@end
