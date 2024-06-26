@class NSString, NSCalendar;

@interface HKSleepChartDataSource : HKHealthQueryChartCacheDataSource

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSString *queryIdentifier;
@property (readonly, nonatomic) unsigned long long queryOptions;
@property (readonly, nonatomic) NSString *cacheIdentifier;

- (id)queryDescription;
- (void).cxx_destruct;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id /* block */)queryDataForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 healthStore:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)supportsChartQueryDataGeneration;
- (id /* block */)_mappingFunctionForComparisonChartWithContext:(id)a0;
- (id /* block */)_mappingFunctionForConsistencyChartWithContext:(id)a0;
- (id /* block */)_mappingFunctionForDurationChartWithContext:(id)a0;
- (id /* block */)_mappingFunctionForStagesChartWithContext:(id)a0;
- (id /* block */)_mappingFunctionForStagesDurationChartWithContext:(id)a0;
- (id)initWithHealthStore:(id)a0 representativeDisplayType:(id)a1 queryOptions:(unsigned long long)a2 cacheIdentifier:(id)a3 queryIdentifier:(id)a4 calendar:(id)a5;
- (id /* block */)mappingFunctionForContext:(id)a0;

@end
