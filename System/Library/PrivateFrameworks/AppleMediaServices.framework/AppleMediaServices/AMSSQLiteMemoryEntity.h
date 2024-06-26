@class NSMutableDictionary;

@interface AMSSQLiteMemoryEntity : NSObject <NSCopying>

@property (nonatomic) long long databaseID;
@property (readonly, copy, nonatomic) NSMutableDictionary *propertyValues;
@property (readonly, copy, nonatomic) NSMutableDictionary *externalPropertyValues;

+ (id)defaultProperties;
+ (id)anyOnConnection:(id)a0 predicate:(id)a1;
+ (Class)databaseEntityClass;
+ (id)queryOnConnection:(id)a0 predicate:(id)a1;
+ (id)queryOnConnection:(id)a0 predicate:(id)a1 orderingProperties:(id)a2;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueForProperty:(id)a0;
- (void)setValue:(id)a0 forProperty:(id)a1;
- (id)initWithDatabaseEntity:(id)a0 properties:(id)a1;
- (void)reloadFromDatabaseEntity:(id)a0 properties:(id)a1;
- (void)setExternalValuesWithDictionary:(id)a0;
- (void)setValue:(id)a0 forExternalProperty:(id)a1;
- (void)setValues:(id *)a0 forExternalProperties:(const id *)a1 count:(long long)a2;
- (void)setValues:(id *)a0 forProperties:(const id *)a1 count:(long long)a2;
- (void)setValuesWithDictionary:(id)a0;
- (id)valueForExternalProperty:(id)a0;

@end
