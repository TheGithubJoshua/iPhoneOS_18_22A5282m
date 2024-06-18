@interface NSPFallbackProxyPath : NSPProxyPath

- (BOOL)proxyPathIsValid:(id)a0 proxyPathList:(id)a1;
- (void)resetMultiHopProxyAgent;
- (void)setupSingleHopProxyRegistrations;
- (void)resetObliviousHopProxyAgents;
- (void)setupMultiHopProxyRegistrations;
- (void)resetSingleHopProxyAgent;

@end
