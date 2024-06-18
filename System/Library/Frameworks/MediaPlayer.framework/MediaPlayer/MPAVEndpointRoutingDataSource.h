@class NSMutableDictionary, NSString, MRAVRoutingDiscoverySession, MRAVRoutingDiscoverySessionConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource {
    MRAVRoutingDiscoverySession *_discoverySession;
    id _callbackToken;
    unsigned int _targetSessionID;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSMutableDictionary *endpoints;
@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *discoverySessionConfiguration;
@property (copy, nonatomic) NSString *routingContextUID;

- (id)init;
- (unsigned int)targetSessionID;
- (BOOL)devicePresenceDetected;
- (id)getRoutesForCategory:(id)a0;
- (long long)discoveryMode;
- (void)setPickedRoute:(id)a0 withPassword:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithThrottlingEnabled:(BOOL)a0;
- (void)dealloc;
- (void)setTargetSessionID:(unsigned int)a0;
- (void)setDiscoveryMode:(long long)a0;
- (void)_endpointsDidChange:(id)a0;

@end
