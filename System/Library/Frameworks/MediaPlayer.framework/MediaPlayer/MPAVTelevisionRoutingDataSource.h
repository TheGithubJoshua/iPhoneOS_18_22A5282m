@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MPAVTelevisionRoutingDataSource : MPAVRoutingDataSource {
    void *_discoveryController;
    NSMutableArray *_discoveredTelevisions;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (id)init;
- (BOOL)devicePresenceDetected;
- (id)getRoutesForCategory:(id)a0;
- (void)getPickedRouteHasVolumeControlWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_discoveredTelevisions;
- (void)_onQueue_controllerDidDiscoverTelevision:(void *)a0;
- (void)dealloc;
- (void)setDiscoveryMode:(long long)a0;
- (void)_onQueue_controllerDidRemoveTelevision:(void *)a0;

@end
