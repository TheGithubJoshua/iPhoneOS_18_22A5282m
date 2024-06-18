@class NSString, NSArray, NSPredicate, CKSQLiteDatabase, NSMutableDictionary, NSMutableString, NSDictionary, NSMutableArray, CKSQLiteTable, NSNumber;

@interface CKSQLiteCompiledStatement : NSObject {
    CKSQLiteDatabase *_db;
    struct sqlite3_stmt { } *_handle;
    NSMutableString *_sql;
    NSArray *_resultColumns;
    NSArray *_resultColumnTypes;
    NSPredicate *_wherePredicate;
    Class _tableClass;
    NSMutableDictionary *_bindingTypesByVariable;
    NSDictionary *_searchValues;
    BOOL _needsSearchBinding;
    BOOL _sqlLoggingEnabled;
    NSMutableString *_orderBySQL;
    NSMutableArray *_boundObjects;
    NSArray *_updatedColumns;
}

@property (copy, nonatomic) NSString *label;
@property (weak, nonatomic) CKSQLiteTable *cachingTable;
@property (retain, nonatomic) NSArray *searchProperties;
@property (retain, nonatomic) NSNumber *limit;
@property (retain, nonatomic) NSNumber *offset;

+ (id)statementForCountingRowsInTable:(id)a0;
+ (id)statementForSummingColumn:(id)a0 inTable:(id)a1;
+ (id)statementForFetchingMinimumValueForColumn:(id)a0 inTable:(id)a1 error:(id *)a2;
+ (id)statementForFetchingColumns:(id)a0 inTable:(id)a1 error:(id *)a2;
+ (id)statementForFetchingMaximumValueForColumn:(id)a0 inTable:(id)a1 error:(id *)a2;
+ (id)statementForInserting:(id)a0 orUpdating:(id)a1 inTable:(id)a2;
+ (id)statementForEmptyCheckInTable:(id)a0;
+ (id)statementForDeletingInTable:(id)a0;
+ (id)_statementForFetchingMinMax:(id)a0 forColumn:(id)a1 inTable:(id)a2 error:(id *)a3;
+ (id)statementForInserting:(id)a0 inTable:(id)a1;
+ (id)statementForSizingColumn:(id)a0 inTable:(id)a1;
+ (id)statementForFetchingAllTableNamesInDatabase:(id)a0;
+ (id)statementForUpdatingColumns:(id)a0 inTable:(id)a1 error:(id *)a2;

- (id)updatedColumns;
- (id)initWithDatabase:(id)a0;
- (id)fetchedColumns;
- (id)searchBindingsDescription;
- (id)addBindingVariable:(id)a0 withAssociatedProperty:(id)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithTable:(id)a0;
- (id)description;
- (BOOL)step:(id *)a0;
- (id)boundObjects;
- (void)resetAndClearBindings;
- (id)bindSearchValues:(id)a0;
- (id)cksqlcs_appendSQLConstantValueToString:(id)a0;
- (id)compile;
- (id)bindValueColumn:(id)a0 type:(unsigned int)a1 value:(id)a2;
- (void)enumerateResultColumnsWithBlock:(id /* block */)a0;
- (void)dealloc;
- (id)doSearchValueBinding;
- (id)sqlValueForVariable:(id)a0;
- (id)setSearchPredicate:(id)a0 forProperties:(id)a1 tableClass:(Class)a2;
- (void)orderByProperty:(id)a0 ascending:(BOOL)a1;
- (id)bindValue:(id)a0 ofType:(unsigned int)a1 atIndex:(int)a2;

@end
