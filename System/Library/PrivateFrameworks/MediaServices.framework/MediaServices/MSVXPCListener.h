@class NSString, NSXPCListener;

@interface MSVXPCListener : NSXPCListener {
    NSString *_registeredServiceName;
    NSXPCListener *_localProxy;
}

- (id)initWithMachServiceName:(id)a0;
- (void)suspend;
- (void)activate;
- (void)setDelegate:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)resume;
- (void)dealloc;
- (id)localProxy;

@end
