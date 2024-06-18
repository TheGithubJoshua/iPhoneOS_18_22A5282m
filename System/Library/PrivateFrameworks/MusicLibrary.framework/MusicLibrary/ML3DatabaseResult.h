@class NSString, NSDictionary, ML3DatabaseStatement, ML3DatabaseConnection;

@interface ML3DatabaseResult : NSObject {
    ML3DatabaseStatement *_statement;
    ML3DatabaseConnection *_connection;
    NSDictionary *_columnNameIndexMap;
    unsigned long long _limitIndex;
}

@property (copy, nonatomic) NSString *limitProperty;
@property (nonatomic) long long limitValue;

- (void)setLimitProperty:(id)a0 limitValue:(long long)a1;
- (id)rows;
- (id)objectsInColumn:(unsigned long long)a0;
- (unsigned long long)indexForColumnName:(id)a0;
- (id)objectForFirstRowAndColumn;
- (id)_statement;
- (id)init;
- (id)initWithStatement:(id)a0 connection:(id)a1;
- (void)enumerateRowsWithBlock:(id /* block */)a0;
- (BOOL)hasAtLeastOneRow;
- (void).cxx_destruct;
- (id)columnNameIndexMap;
- (id)stringValueForFirstRowAndColumn;
- (long long)int64ValueForFirstRowAndColumn;

@end
