@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface PLSQLStatement : NSObject

@property (retain) NSObject<OS_dispatch_semaphore> *dbSem;
@property struct sqlite3 { } *dbConnection;
@property struct sqlite3_stmt { } *statement;
@property (retain) NSString *sqlQuery;
@property (readonly) BOOL isInsert;
@property (readonly) BOOL isDelete;

- (int)bindValue:(id)a0 withFormater:(short)a1 atPosition:(int)a2;
- (id)initWithSQLQuery:(id)a0 forDatabase:(struct sqlite3 { } *)a1 withDBSem:(id)a2 result:(int *)a3;
- (void)finalize;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)perform;
- (void)reset;

@end
