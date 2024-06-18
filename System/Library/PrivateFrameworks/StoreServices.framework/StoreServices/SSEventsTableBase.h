@class SSSQLiteDatabase;

@interface SSEventsTableBase : NSObject {
    SSSQLiteDatabase *_database;
}

+ (id)databasePath;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_setupDatabase;
- (void)performTransactionWithBlock:(id /* block */)a0;

@end
