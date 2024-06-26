@class NSString, NSArray;

@interface HDSQLiteRawPredicate : HDSQLitePredicate <NSCopying> {
    NSString *_sql;
    NSArray *_properties;
    NSArray *_values;
}

+ (id)predicateWithSQL:(id)a0 overProperties:(id)a1 values:(id)a2;

- (id)SQLForEntityClass:(Class)a0;
- (BOOL)isCompatibleWithPredicate:(id)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (unsigned long long)hash;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
