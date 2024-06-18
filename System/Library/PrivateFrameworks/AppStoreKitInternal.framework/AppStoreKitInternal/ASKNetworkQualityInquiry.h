@class NSMutableArray, NSMutableSet, NSObject, NWNetworkOfInterestManager;
@protocol OS_dispatch_queue;

@interface ASKNetworkQualityInquiry : NSObject <NWNetworkOfInterestManagerDelegate>

@property (readonly, nonatomic) NWNetworkOfInterestManager *manager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableSet *knownNetworks;
@property (retain, nonatomic) NSMutableArray *knownNetworksReadyHandlers;

- (void)drainKnownNetworksReadyHandlers;
- (id)init;
- (void)performWhenKnownNetworksReady:(id /* block */)a0;
- (void)didStopTrackingNOI:(id)a0;
- (void)investigateNetworksWithCompletionBlock:(id /* block */)a0;
- (void)didStartTrackingNOI:(id)a0;
- (void).cxx_destruct;
- (BOOL)areKnownNetworksReady;
- (void)didStopTrackingAllNOIs:(id)a0;
- (void)dealloc;

@end
