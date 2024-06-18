@class NSMutableArray;

@interface BMSQLRow : NSObject <BMRow>

@property (retain, nonatomic) NSMutableArray *allValues;

+ (id)new;

- (id)init;
- (id)initWithValues:(id)a0;
- (long long)columnCount;
- (unsigned long long)hash;
- (id)values;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)valueAtIdx:(unsigned long long)a0;

@end
