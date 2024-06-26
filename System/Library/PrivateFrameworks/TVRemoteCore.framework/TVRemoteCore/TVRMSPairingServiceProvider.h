@class NSArray, NSMutableDictionary;

@interface TVRMSPairingServiceProvider : TVRMSBonjourServiceProvider {
    NSMutableDictionary *_unmonitoredServices;
    NSMutableDictionary *_monitoredServices;
}

@property (retain, nonatomic) NSArray *pairedNetworkNames;

- (id)init;
- (id)searchType;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)serviceDiscoverySource;
- (long long)serviceLegacyFlagsFromTXTDictionary:(id)a0;

@end
