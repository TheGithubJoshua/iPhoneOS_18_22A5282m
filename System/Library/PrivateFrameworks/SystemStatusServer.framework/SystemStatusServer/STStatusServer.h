@class NSString, STStatusDomainDataChangeLog, NSMutableDictionary, STStatusDomainPublisherXPCClientListener, BSIntegerSet, BSMutableIntegerMap, NSObject, NSMapTable, STStatusDomainXPCClientListener;
@protocol OS_dispatch_queue, STStatusServerDelegate;

@interface STStatusServer : NSObject <BSDescriptionProviding, STStatusDomainServerHandle, STStatusDomainPublisherServerHandle> {
    BSMutableIntegerMap *_clientsByDomain;
    BSMutableIntegerMap *_publisherClientsByDomain;
    NSMapTable *_changeLogKeysByPublisherClient;
    STStatusDomainDataChangeLog *_dataChangeLog;
    STStatusDomainXPCClientListener *_xpcClientListener;
    STStatusDomainPublisherXPCClientListener *_publisherXPCClientListener;
    NSMutableDictionary *_dataTransformersByDomain;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (weak, nonatomic) id<STStatusServerDelegate> delegate;
@property (readonly, nonatomic) BSIntegerSet *publishedDomains;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)publishedDataForDomain:(unsigned long long)a0;
- (void)updateDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;
- (void)updateVolatileDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;
- (void)publishVolatileData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 withChangeContext:(id)a3 completion:(id /* block */)a4;
- (id)succinctDescription;
- (void)removePublisherClient:(id)a0 forDomain:(unsigned long long)a1;
- (id)publishedVolatileDataForDomain:(unsigned long long)a0;
- (void)reportUserInteraction:(id)a0 forClient:(id)a1 domain:(unsigned long long)a2;
- (void)publishData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 withChangeContext:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)registerClient:(id)a0 forDomain:(unsigned long long)a1;
- (id)succinctDescriptionBuilder;
- (void)registerPublisherClient:(id)a0 forDomain:(unsigned long long)a1 fallbackData:(id)a2;
- (id)dataForDomain:(unsigned long long)a0;
- (void)removeClient:(id)a0 forDomain:(unsigned long long)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)modifyDataTransformer:(id)a0 forDomain:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)addDataTransformer:(id)a0 forDomain:(unsigned long long)a1;
- (void)removeDataTransformer:(id)a0 forDomain:(unsigned long long)a1;

@end
