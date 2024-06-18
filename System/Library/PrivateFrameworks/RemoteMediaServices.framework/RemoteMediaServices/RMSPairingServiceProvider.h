@class NSArray, NSMutableDictionary;

@interface RMSPairingServiceProvider : RMSBonjourServiceProvider {
    NSMutableDictionary *_unmonitoredServices;
}

@property (retain, nonatomic) NSArray *pairedNetworkNames;

- (id)init;
- (id)searchType;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)serviceDiscoverySource;
- (long long)serviceFlagsFromTXTDictionary:(id)a0;

@end
