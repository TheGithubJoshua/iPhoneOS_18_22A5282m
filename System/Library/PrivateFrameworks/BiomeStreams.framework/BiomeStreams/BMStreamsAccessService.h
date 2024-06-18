@class NSString, NSXPCListener;

@interface BMStreamsAccessService : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    unsigned long long _domain;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDomain:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initLegacy;
- (id)initWithMachServiceName:(id)a0 domain:(unsigned long long)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;

@end
