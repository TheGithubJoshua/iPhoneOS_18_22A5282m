@interface PHMomentList : PHCollectionList

+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)fetchType;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)identifierCode;
+ (id)entityKeyMap;
+ (id)managedEntityName;

- (id)localizedTitle;
- (id)description;
- (long long)collectionListType;
- (BOOL)hasLocationInfo;
- (BOOL)hasLocalizedTitle;
- (id)localizedLocationNames;
- (Class)changeRequestClass;
- (BOOL)collectionHasFixedOrder;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
