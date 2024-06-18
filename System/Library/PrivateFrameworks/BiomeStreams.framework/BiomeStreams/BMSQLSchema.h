@class NSString, NSArray;

@interface BMSQLSchema : NSObject

@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) NSArray *columns;

+ (id)new;

- (id)init;
- (id)createTableSQL;
- (unsigned long long)hash;
- (id)initWithTableName:(id)a0 columns:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
