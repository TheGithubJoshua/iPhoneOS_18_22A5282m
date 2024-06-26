@class NSMutableDictionary;

@interface HKRemoteChartDataSource : HKGraphSeriesDataSource

@property (retain, nonatomic) NSMutableDictionary *dataBlocksForTimescopes;

- (id)init;
- (void)invalidateCache;
- (void).cxx_destruct;
- (id)cachedBlockForPath:(struct { long long x0; long long x1; })a0 context:(id)a1;
- (struct { long long x0; long long x1; })blockPathForX:(id)a0 zoom:(long long)a1;
- (void)blocksRequestedFromPath:(struct { long long x0; long long x1; })a0 toPath:(struct { long long x0; long long x1; })a1 priorityDelegate:(id)a2;
- (void)setDataForTimeScope:(long long)a0 seriesData:(id)a1 dataSourceForMapping:(id)a2 seriesDataSourceContext:(id)a3;

@end
