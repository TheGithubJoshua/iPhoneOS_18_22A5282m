@class NSArray, NSDictionary;

@interface EFSQLSchema : NSObject {
    NSDictionary *_tablesByName;
}

@property (readonly, copy, nonatomic) NSArray *tables;

- (id)indexDefinitionsWithDatabaseName:(id)a0;
- (id)tableForName:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)definitionWithDatabaseName:(id)a0 includeIndexes:(BOOL)a1;
- (id)definitionWithDatabaseName:(id)a0;
- (id)initWithTables:(id)a0;

@end
