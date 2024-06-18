@interface PLCacheMetricsCollectorClient : NSObject

- (void)incrementImageCacheMissCount;
- (void)incrementVideoComplementCacheMissCount;
- (void)incrementVideoComplementCacheHitCount;
- (id)initWithAssetsdClient:(id)a0;
- (void)incrementImageCacheHitCount;

@end
