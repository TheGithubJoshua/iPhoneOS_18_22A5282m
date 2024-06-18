@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID

+ (id)_storeInfo1;
+ (id)alloc;
+ (void)_storeDeallocated;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)_setStoreInfo1:(id)a0;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (BOOL)_usesTaggedPointers;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (void)setObjectStoreIdentifier:(id)a0;

- (id)_storeInfo1;
- (id)entity;
- (BOOL)_isPersistentStoreAlive;
- (id)initWithObject:(id)a0;
- (id)persistentStore;
- (id)entityName;
- (id)copy;
- (oneway void)release;
- (id)_retainedURIString;
- (long long)_referenceData64;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_storeIdentifier;
- (id)initWithPK64:(long long)a0;
- (id)retain;
- (void)dealloc;
- (BOOL)isTemporaryID;

@end
