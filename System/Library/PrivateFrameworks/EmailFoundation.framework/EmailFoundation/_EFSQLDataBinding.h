@class NSData;

@interface _EFSQLDataBinding : EFSQLBinding

@property (readonly, copy, nonatomic) NSData *dataValue;

- (void).cxx_destruct;
- (void)bindTo:(struct sqlite3_stmt { } *)a0 withSQLIndex:(int)a1;
- (id)initWithData:(id)a0;

@end
