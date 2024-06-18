@interface PPNamedEntityRecordLoadingDelegate : PPRecordLoadingDelegate

@property (copy, nonatomic) id /* block */ namedEntityRecordsSetup;
@property (copy, nonatomic) id /* block */ namedEntityRecordsHandler;
@property (copy, nonatomic) id /* block */ namedEntityRecordsCompletion;
@property (copy, nonatomic) id /* block */ recentNamedEntityRecordsSetup;
@property (copy, nonatomic) id /* block */ recentNamedEntityRecordsHandler;
@property (copy, nonatomic) id /* block */ recentNamedEntityRecordsCompletion;
@property (copy, nonatomic) id /* block */ resetNamedEntityRecordData;

- (void)resetRecordData;
- (unsigned char)recordLoadingSetup;
- (unsigned char)recordLoadingHandler:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned char)recentRecordLoadingSetup;
- (void)recordLoadingCompletion;
- (unsigned char)recentRecordLoadingHandler:(id)a0;
- (void)recentRecordLoadingCompletion;
- (id)initWithName:(id)a0;

@end
