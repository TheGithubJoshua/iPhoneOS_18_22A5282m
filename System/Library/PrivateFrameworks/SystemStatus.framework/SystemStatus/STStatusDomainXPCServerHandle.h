@class NSString, NSXPCConnection, BSMutableIntegerMap, NSObject;
@protocol OS_dispatch_queue;

@interface STStatusDomainXPCServerHandle : NSObject <STStatusDomainXPCClient, BSDescriptionProviding, STStatusDomainServerHandle> {
    BSMutableIntegerMap *_dataByDomain;
    BSMutableIntegerMap *_clientsByDomain;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSXPCConnection *_serverXPCConnection;
    id /* block */ _xpcConnectionProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMachServiceServerHandle;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)initWithXPCConnectionProvider:(id /* block */)a0;
- (void)reportUserInteraction:(id)a0 forClient:(id)a1 domain:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)registerClient:(id)a0 forDomain:(unsigned long long)a1;
- (id)succinctDescriptionBuilder;
- (id)dataForDomain:(unsigned long long)a0;
- (void)removeClient:(id)a0 forDomain:(unsigned long long)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)observeData:(id)a0 forDomain:(unsigned long long)a1 withChangeContext:(id)a2;
- (void)observeDiff:(id)a0 forDomain:(unsigned long long)a1 withChangeContext:(id)a2;
- (id)serverDataForDomains:(id)a0;

@end
