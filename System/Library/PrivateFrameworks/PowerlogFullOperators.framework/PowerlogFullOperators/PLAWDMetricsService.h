@class NSMutableDictionary, NSMutableSet, AWDServerConnection;

@interface PLAWDMetricsService : PLService

@property (retain) AWDServerConnection *awdServerConn;
@property (retain) NSMutableSet *currRunningMetrics;
@property (retain) NSMutableSet *updateRunningMetrics;
@property (retain) NSMutableDictionary *classDictionary;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;

- (void)initOperatorDependancies;
- (id)init;
- (void).cxx_destruct;
- (void)auxClassWrapper:(id)a0 withAction:(long long)a1;
- (BOOL)connectToAWDServer;
- (BOOL)initAWDInterface;
- (void)threadFunc;

@end
