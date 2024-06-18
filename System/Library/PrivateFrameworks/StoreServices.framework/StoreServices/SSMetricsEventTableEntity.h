@class NSDictionary;

@interface SSMetricsEventTableEntity : SSSQLiteEntity {
    NSDictionary *_reportingDictionary;
}

+ (id)databaseTable;

- (void).cxx_destruct;
- (id)reportingJSON;
- (void)dealloc;
- (id)reportingCanaryIdentifier;
- (id)reportingDictionary;

@end
