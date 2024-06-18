@class NSArray, NSDictionary, FCHeldRecords;
@protocol FCContentContext;

@interface FCWidgetConfigDataOperation : FCOperation

@property (retain, nonatomic) NSArray *recordSources;
@property (retain, nonatomic) NSDictionary *recordSourcesByRecordType;
@property (retain, nonatomic) FCHeldRecords *cachedRecords;
@property (retain, nonatomic) NSDictionary *resultDefaultConfigurationDictionary;
@property (retain, nonatomic) NSDictionary *resultSingleTagConfigurationDictionary;
@property (retain, nonatomic) NSArray *resultArticleIDs;
@property (retain, nonatomic) NSArray *resultArticleListIDs;
@property (retain, nonatomic) NSDictionary *resultHeldRecordsByType;
@property (retain, nonatomic) id<FCContentContext> context;
@property (copy, nonatomic) NSDictionary *widgetConfiguration;
@property (copy, nonatomic) id /* block */ widgetConfigDataCompletionHandler;

- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (void)_collectRecordsFromWidgetConfigDictionary:(id)a0;
- (void)performOperation;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (void)_finalizeResultFromCachedRecords;
- (id)_recordSourceForRecordType:(id)a0;

@end
