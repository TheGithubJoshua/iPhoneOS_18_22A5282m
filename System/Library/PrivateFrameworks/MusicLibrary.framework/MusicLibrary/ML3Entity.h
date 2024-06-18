@class ML3MusicLibrary;

@interface ML3Entity : NSObject

@property (weak, nonatomic) ML3MusicLibrary *library;
@property (readonly, nonatomic) long long persistentID;
@property (readonly, nonatomic) BOOL existsInLibrary;

+ (id)allProperties;
+ (id)joinClausesForProperty:(id)a0;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)foreignDatabaseTableForProperty:(id)a0;
+ (id)queryWithLibrary:(id)a0 predicate:(id)a1 orderingTerms:(id)a2 usingSections:(BOOL)a3 options:(long long)a4;
+ (id)allItemsQueryWithLibrary:(id)a0 predicate:(id)a1 orderingTerms:(id)a2 usingSections:(BOOL)a3;
+ (id)aggregateQueryWithUnitQuery:(id)a0 foreignPersistentIDProperty:(id)a1;
+ (id)anyInLibrary:(id)a0 predicate:(id)a1;
+ (id)defaultOrderingTerms;
+ (BOOL)deleteFromLibrary:(id)a0 deletionType:(int)a1 persistentIDs:(const long long *)a2 count:(unsigned long long)a3;
+ (id)entityFromURL:(id)a0 inLibrary:(id)a1;
+ (id)newWithDictionary:(id)a0 inLibrary:(id)a1;
+ (id)newWithPersistentID:(long long)a0 inLibrary:(id)a1;
+ (id)queryWithLibrary:(id)a0 predicate:(id)a1;
+ (id)queryWithLibrary:(id)a0 predicate:(id)a1 options:(long long)a2;
+ (id)queryWithLibrary:(id)a0 predicate:(id)a1 orderingTerms:(id)a2;
+ (id)queryWithLibrary:(id)a0 predicate:(id)a1 orderingTerms:(id)a2 usingSections:(BOOL)a3;
+ (BOOL)removeFromMyLibrary:(id)a0 deletionType:(int)a1 persistentIDs:(const long long *)a2 count:(unsigned long long)a3;
+ (long long)revisionTrackingCode;
+ (BOOL)setValues:(id)a0 forProperties:(id)a1 forEntityPersistentIDs:(id)a2 inLibrary:(id)a3 usingConnection:(id)a4;
+ (id)unrestrictedAllItemsQueryWithlibrary:(id)a0 predicate:(id)a1 orderingTerms:(id)a2;
+ (id)entityURLScheme;
+ (id)anyInLibrary:(id)a0 predicate:(id)a1 options:(long long)a2;
+ (BOOL)insertionChangesLibraryContents;
+ (id)predicateByOptimizingPredicate:(id)a0;
+ (id)URLForEntityWithPersistentID:(long long)a0 libraryUID:(id)a1;
+ (id)_createDisambiguatedSQLForProperty:(id)a0;
+ (BOOL)_deleteRowForPersistentIDs:(const long long *)a0 count:(unsigned long long)a1 library:(id)a2 table:(id)a3 usingColumn:(id)a4 usingConnection:(id)a5;
+ (void)_didChangeValueForProperties:(id)a0 inLibrary:(id)a1;
+ (id)_entityForURLComponents:(id)a0 inLibrary:(id)a1 verifyExistence:(BOOL)a2 reason:(id *)a3;
+ (BOOL)_shouldIncrementRevisionForType:(int)a0 persistentID:(long long)a1 usingConnection:(id)a2;
+ (BOOL)assistantLibraryContentsChangeForProperty:(id)a0;
+ (id)collectionClassesToUpdateBeforeDelete;
+ (id)countingQueryForBaseQuery:(id)a0 countProperty:(id)a1 forIdentifier:(long long)a2;
+ (id)defaultFilterPredicates;
+ (BOOL)deleteFromLibrary:(id)a0 deletionType:(int)a1 persistentIDs:(const long long *)a2 count:(unsigned long long)a3 usingConnection:(id)a4;
+ (id)disambiguatedSelectSQLForProperty:(id)a0;
+ (id)entityFromURL:(id)a0 inLibrary:(id)a1 verifyExistence:(BOOL)a2;
+ (id)entityFromURL:(id)a0 reason:(id *)a1;
+ (void)enumeratePersistentIDsInLibrary:(id)a0 afterRevision:(long long)a1 usingBlock:(id /* block */)a2;
+ (void)enumeratePersistentIDsInLibrary:(id)a0 matchingPredicate:(id)a1 orderingTerms:(id)a2 persistentIDs:(const long long *)a3 count:(unsigned long long)a4 options:(long long)a5 usingBlock:(id /* block */)a6;
+ (id)extraTablesToDelete;
+ (id)extraTablesToInsert;
+ (id)foreignColumnForProperty:(id)a0;
+ (id)foreignPropertyForProperty:(id)a0 entityClass:(Class)a1;
+ (BOOL)incrementRevisionForRevisionTypeContentWithConnection:(id)a0 deletionType:(int)a1 persistentIDs:(id)a2;
+ (BOOL)incrementRevisionForRevisionTypeContentWithConnection:(id)a0 deletionType:(int)a1 persistentIDs:(const long long *)a2 count:(unsigned long long)a3;
+ (BOOL)incrementRevisionForRevisionTypeContentWithLibrary:(id)a0 deletionType:(int)a1 persistentIDs:(id)a2;
+ (BOOL)incrementRevisionWithLibrary:(id)a0 persistentID:(long long)a1 deletionType:(int)a2 revisionType:(int)a3;
+ (BOOL)incrementRevisionWithLibrary:(id)a0 persistentID:(long long)a1 deletionType:(int)a2 revisionType:(int)a3 usingConnection:(id)a4;
+ (id)indexableSQLForProperties:(id)a0;
+ (BOOL)insertValues:(id)a0 intoTable:(id)a1 persistentID:(long long)a2 connection:(id)a3;
+ (BOOL)insertValues:(id)a0 intoTable:(id)a1 persistentID:(long long)a2 library:(id)a3;
+ (BOOL)libraryContentsChangeForProperty:(id)a0;
+ (BOOL)libraryDynamicChangeForProperty:(id)a0;
+ (id)newSelectAllEntitiesSQLForProperties:(const id *)a0 count:(unsigned long long)a1 predicate:(id)a2;
+ (id)newSelectSQLForProperties:(const id *)a0 count:(unsigned long long)a1 predicate:(id)a2;
+ (id)newWithDictionary:(id)a0 inLibrary:(id)a1 cachedNameOrders:(id)a2;
+ (id)newWithDictionary:(id)a0 inLibrary:(id)a1 cachedNameOrders:(id)a2 usingConnection:(id)a3;
+ (id)orderingSQLForProperties:(id)a0 directionality:(id)a1;
+ (id)persistentIDColumnForTable:(id)a0;
+ (id)predicateByOptimizingComparisonPredicate:(id)a0;
+ (id)predicateIncludingSystemwidePredicatesWithPredicate:(id)a0 library:(id)a1 options:(long long)a2;
+ (void)predisambiguateProperties:(id)a0 toDictionary:(id)a1;
+ (id)predisambiguatedProperties;
+ (BOOL)propertyIsCountProperty:(id)a0;
+ (id)queryWithLibrary:(id)a0 predicate:(id)a1 orderingProperties:(id)a2;
+ (id)queryWithLibrary:(id)a0 predicate:(id)a1 orderingProperties:(id)a2 orderingDirectionMappings:(id)a3 usingSections:(BOOL)a4;
+ (id)queryWithLibrary:(id)a0 predicate:(id)a1 orderingProperties:(id)a2 usingSections:(BOOL)a3;
+ (id)queryWithLibrary:(id)a0 predicate:(id)a1 orderingTerms:(id)a2 propertyToCount:(id)a3;
+ (id)queryWithLibrary:(id)a0 predicate:(id)a1 orderingTerms:(id)a2 propertyToCount:(id)a3 options:(long long)a4;
+ (id)queryWithLibrary:(id)a0 predicate:(id)a1 usingSections:(BOOL)a2;
+ (id)sectionPropertyForProperty:(id)a0;
+ (id)subselectPropertyForProperty:(id)a0;
+ (id)subselectStatementForProperty:(id)a0;
+ (id)unrestrictedQueryWithLibrary:(id)a0 predicate:(id)a1 orderingTerms:(id)a2;
+ (id)unsettableProperties;

- (id)URL;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueForProperty:(id)a0;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (id)getValuesForProperties:(id)a0;
- (BOOL)setValues:(const id *)a0 forProperties:(const id *)a1 count:(unsigned long long)a2;
- (id)initWithPersistentID:(long long)a0 inLibrary:(id)a1;
- (void)getValues:(id *)a0 forProperties:(const id *)a1 count:(unsigned long long)a2;
- (void)setValues:(id)a0 forProperties:(id)a1 async:(BOOL)a2 withCompletionBlock:(id /* block */)a3;
- (BOOL)setValues:(id)a0 forProperties:(id)a1 usingConnection:(id)a2;
- (BOOL)deleteFromLibrary;
- (void)didChangeValueForProperties:(id)a0;
- (void)incrementRevision;
- (id)initWithDictionary:(id)a0 inLibrary:(id)a1 cachedNameOrders:(id)a2;
- (id)initWithDictionary:(id)a0 inLibrary:(id)a1 cachedNameOrders:(id)a2 usingConnection:(id)a3;
- (BOOL)matchesPredicate:(id)a0;
- (BOOL)setValues:(id)a0 forProperties:(id)a1;
- (BOOL)setValuesForPropertiesWithDictionary:(id)a0;

@end