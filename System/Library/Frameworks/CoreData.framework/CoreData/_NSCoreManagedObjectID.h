@interface _NSCoreManagedObjectID : NSManagedObjectID

+ (id)_storeInfo1;
+ (id)alloc;
+ (void)_storeDeallocated;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (void)release;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_retain_1;
+ (void)_setStoreInfo1:(id)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (void)_release_1;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (BOOL)_usesTaggedPointers;
+ (id)retain;
+ (char *)generatedNameSuffix;
+ (long long)version;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (id)managedObjectIDFromUTF8String:(const char *)a0 length:(unsigned long long)a1;

- (id)_storeInfo1;
- (id)entity;
- (id)URIRepresentation;
- (BOOL)_isPersistentStoreAlive;
- (id)persistentStore;
- (id)entityName;
- (oneway void)release;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (id)_storeIdentifier;
- (id)retain;
- (BOOL)isTemporaryID;

@end
