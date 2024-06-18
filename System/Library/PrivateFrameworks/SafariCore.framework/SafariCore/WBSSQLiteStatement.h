@class NSArray, NSDictionary, WBSSQLiteDatabase;

@interface WBSSQLiteStatement : NSObject {
    NSDictionary *_columnNamesToIndexes;
    NSArray *_columnNames;
}

@property (readonly, nonatomic) NSArray *columnNames;
@property (readonly, nonatomic) NSDictionary *columnNamesToIndexes;
@property (readonly, nonatomic) struct sqlite3_stmt { } *handle;
@property (readonly, nonatomic) WBSSQLiteDatabase *database;

- (id)init;
- (BOOL)execute:(id *)a0;
- (BOOL)_isValid;
- (id)initWithDatabase:(id)a0 query:(id)a1;
- (void)bindString:(id)a0 atParameterIndex:(unsigned long long)a1;
- (void)bindNullAtParameterIndex:(unsigned long long)a0;
- (BOOL)fetchWithEnumerationBlock:(id /* block */)a0 error:(id *)a1;
- (int)execute;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0 query:(id)a1 error:(id *)a2;
- (void)bindData:(id)a0 atParameterIndex:(unsigned long long)a1;
- (id)fetch;
- (void)bindInt64:(long long)a0 atParameterIndex:(unsigned long long)a1;
- (void)bindInt:(int)a0 atParameterIndex:(unsigned long long)a1;
- (void)dealloc;
- (void)reset;
- (void)bindDouble:(double)a0 atParameterIndex:(unsigned long long)a1;

@end
