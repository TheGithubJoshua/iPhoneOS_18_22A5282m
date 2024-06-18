@interface SPZKWQueryTask : SPQueryTask

+ (void)initialize;
+ (int)maxSuggestedApps;

- (id)unsafeSessionEntityString;
- (void)start;
- (id)unsafeSections;
- (void)addApplicationResultsFromPredictionResponse:(id)a0 toSection:(id)a1 queryIdent:(unsigned long long)a2;

@end
