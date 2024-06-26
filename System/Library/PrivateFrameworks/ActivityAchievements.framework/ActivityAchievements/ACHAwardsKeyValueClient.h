@class NSUUID, HKTaskServerProxyProvider, NSString, NSObject;
@protocol OS_dispatch_queue, ACHAwardsKeyValueServerInterface;

@interface ACHAwardsKeyValueClient : NSObject <_HKXPCExportable, ACHAwardsKeyValueClientInterface>

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) id<ACHAwardsKeyValueServerInterface> serverProxy;
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (copy, nonatomic) id /* block */ injectedErrorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHealthStore:(id)a0;
- (BOOL)protectedDataAvailable;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (BOOL)setValuesWithDictionary:(id)a0 domain:(id)a1 error:(id *)a2;
- (id)valuesForKeys:(id)a0 domain:(id)a1 error:(id *)a2;
- (BOOL)setLegacyValuesWithDictionary:(id)a0 error:(id *)a1;
- (id)valueForKey:(id)a0 domain:(id)a1 error:(id *)a2;
- (BOOL)setValuesWithDomainDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)removeValuesForKeysInDomains:(id)a0 error:(id *)a1;
- (id)exportedInterface;
- (BOOL)setValue:(id)a0 forKey:(id)a1 domain:(id)a2 error:(id *)a3;
- (BOOL)removeValuesForKeys:(id)a0 domain:(id)a1 error:(id *)a2;

@end
