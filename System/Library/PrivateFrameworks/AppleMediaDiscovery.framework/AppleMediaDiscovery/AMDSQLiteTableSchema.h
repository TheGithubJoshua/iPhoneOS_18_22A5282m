@class NSString, NSDictionary, NSSet;

@interface AMDSQLiteTableSchema : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *columns;
@property (retain, nonatomic) NSSet *requiredColumns;

- (id)getCreateTableStatement;
- (id)getSpecForColumn:(id)a0;
- (id)initWithDict:(id)a0 withName:(id)a1 error:(id *)a2;
- (id)getColumns;
- (void).cxx_destruct;
- (id)getInsertStatement:(id)a0;
- (id)getRequiredColumns;

@end
