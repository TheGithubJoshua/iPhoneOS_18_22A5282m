@protocol NSPQUICProxyPathDelegate;

@interface NSPQuicProxyPath : NSPProxyPath

@property (weak) id<NSPQUICProxyPathDelegate> quicProxyPathDelegate;

- (BOOL)proxyPathIsValid:(id)a0 proxyPathList:(id)a1;
- (id)initWithDelegate:(id)a0 ingressProxy:(id)a1 egressProxy:(id)a2 proxyPathWeight:(unsigned long long)a3 obliviousConfigs:(id)a4 allowFallback:(BOOL)a5 fallbackToQUIC:(BOOL)a6 forceFallback:(BOOL)a7 allowFailOpen:(BOOL)a8 geohashSharingEnabled:(BOOL)a9 configEpoch:(id)a10 networkCharacteristics:(id)a11;
- (void)resetMultiHopProxyAgent;
- (void).cxx_destruct;
- (void)enableFallback:(BOOL)a0;
- (void)setupSingleHopProxyRegistrations;
- (void)resetObliviousHopProxyAgents;
- (void)setupMultiHopProxyRegistrations;
- (void)resetSingleHopProxyAgent;

@end
