@class RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue, WFTrafficEngDelegate;

@interface WFTrafficEngManager : NSObject {
    NSObject<OS_dispatch_queue> *_traffic_engr_queue;
    RPCompanionLinkClient *_discoveryClient;
    BOOL _configured;
}

@property (nonatomic) id<WFTrafficEngDelegate> trafficEngDelegate;

- (void)__registerCallbacksAndActivate;
- (void)cleanup;
- (void)__sendEventToPeers;
- (void)__invalidateDiscovery;
- (void)__configureRapportSessionClient:(id)a0;
- (BOOL)__configureRapportDiscoveryClient;
- (void)__activateDiscovery;
- (void)__requestCriticalAppInfo:(id)a0 completionBlock:(id /* block */)a1;
- (void)__sendKeepAliveEvent:(id)a0 dictionary:(id)a1;
- (void).cxx_destruct;
- (void)__invalidateSession;
- (void)dealloc;
- (void)__sendPeriodicEvent:(id)a0;
- (id)__collectCriticalAppInfo;
- (void)__registerRequestHandler;
- (id)initWithTrafficEngDelegate:(id)a0;
- (void)__tearDownRapportDataSession;

@end
