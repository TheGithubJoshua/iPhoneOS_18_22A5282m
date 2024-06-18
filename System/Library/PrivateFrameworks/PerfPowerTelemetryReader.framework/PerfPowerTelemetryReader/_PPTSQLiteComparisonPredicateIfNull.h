@interface _PPTSQLiteComparisonPredicateIfNull : PPTSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) id ifPropertyIsNullValue;

- (id)initWithProperty:(id)a0 ifPropertyIsNullValue:(id)a1 value:(id)a2 comparisonType:(long long)a3;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)sqlForEntity:(id)a0;

@end
