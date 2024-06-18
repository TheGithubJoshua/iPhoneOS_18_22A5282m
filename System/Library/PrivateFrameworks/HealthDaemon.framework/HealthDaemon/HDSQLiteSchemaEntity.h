@class NSString;

@interface HDSQLiteSchemaEntity : NSObject <HDSQLiteEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (BOOL)isTemporary;
+ (id)uniquedColumns;
+ (id)primaryKeyColumns;
+ (id)databaseName;
+ (id)triggers;
+ (id)joinClausesForProperty:(id)a0;
+ (id)createTableSQL;
+ (id)tableAliases;
+ (Class)entityClassForEnumeration;
+ (id)checkConstraints;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)orderingTermForSortDescriptor:(id)a0;
+ (id)indices;
+ (id)privateSubEntities;
+ (void)enumerateColumnsWithBlock:(id /* block */)a0;
+ (id)allDatabaseColumnNames;
+ (id)deleteStatementWithProperty:(id)a0 database:(id)a1;
+ (id)disambiguatedDatabaseTable;
+ (Class)entityForProperty:(id)a0;
+ (BOOL)hasColumnWithName:(id)a0;
+ (BOOL)hasROWID;
+ (id)insertSQLForProperties:(id)a0 shouldReplace:(BOOL)a1;
+ (id)updateSQLForProperties:(id)a0 predicate:(id)a1;


@end
