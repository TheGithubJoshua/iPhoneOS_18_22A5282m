@class NSError, NSObject, AMDSQLiteSchema;
@protocol OS_dispatch_queue;

@interface AMDSQLite : NSObject

@property (retain, nonatomic) AMDSQLiteSchema *_bootstrapSchema;
@property (nonatomic) struct sqlite3 { } *_db;
@property (retain, nonatomic) NSError *_error;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_executorQueue;
@property (nonatomic) BOOL _isEnabled;
@property (retain, nonatomic) AMDSQLiteSchema *_schema;

+ (id)loadNewData:(id)a0;
+ (id)deleteEventsWithPredicate:(id)a0 forStreams:(id)a1;
+ (id)clearUserData:(id)a0;
+ (id)getFeatureValueWithName:(id)a0 inDomain:(id)a1 withColumnName:(id)a2 skipRowset:(BOOL)a3 error:(id *)a4;
+ (id)refreshODTPForDomain:(id)a0 error:(id *)a1;
+ (id)refreshEntityTableForDomain:(id)a0 error:(id *)a1;
+ (id)truncateEvents:(id *)a0;
+ (id)getDomainsFrom:(id)a0;
+ (id)updateData:(id)a0;
+ (id)getSharedInstanceWithOption:(BOOL)a0;
+ (id)saveEvents:(id)a0 error:(id *)a1;
+ (id)deleteEventsOlderThan:(unsigned int)a0;
+ (id)getSharedInstance;
+ (id)getBootstrapSchemaDict;

- (id)saveSchema:(id)a0 error:(id *)a1;
- (BOOL)isUsable;
- (id)connectionState;
- (id)loadDb;
- (id)fetchRowsUsingSchema:(id)a0 andDescriptor:(id)a1 andPersist:(BOOL)a2 error:(id *)a3;
- (id)updateSchema:(id)a0 error:(id *)a1;
- (id)applySchema:(id)a0 error:(id *)a1;
- (id)deleteRows:(id)a0 error:(id *)a1;
- (struct sqlite3_stmt { } *)prepare:(id)a0 error:(id *)a1;
- (id)getError;
- (id)getBootSchema;
- (id)loadSchema;
- (id)getSchema;
- (id)validateRowsData:(id)a0 tableSchema:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)setEnable:(BOOL)a0;
- (id)createTable:(id)a0 usingSchema:(id)a1 error:(id *)a2;
- (id)prepareBootstrapSchema;
- (id)insertRows:(id)a0 usingSchema:(id)a1 error:(id *)a2;
- (id)bootstrapDb;
- (id)refreshAppsTable:(id *)a0;
- (id)deleteRowsInternal:(id)a0 error:(id *)a1;
- (struct sqlite3 { } *)getDb;
- (id)fetchRows:(id)a0 andPersist:(BOOL)a1 error:(id *)a2;

@end
