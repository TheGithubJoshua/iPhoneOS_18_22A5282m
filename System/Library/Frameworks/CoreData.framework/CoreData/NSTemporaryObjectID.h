@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (id)alloc;
+ (id)initWithEntity:(id)a0;
+ (void)_storeDeallocated;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_retain_1;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (unsigned int)allocateBatch:(id *)a0 forEntity:(id)a1 count:(unsigned int)a2;
+ (void)_release_1;
+ (BOOL)_usesTaggedPointers;
+ (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
+ (long long)version;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (Class)classForStore:(id)a0;

- (id)entity;
- (id)URIRepresentation;
- (BOOL)_isPersistentStoreAlive;
- (id)persistentStore;
- (id)initWithEntity:(id)a0;
- (oneway void)release;
- (id)_retainedURIString;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (id)_storeIdentifier;
- (id)retain;
- (void)dealloc;
- (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
- (BOOL)isTemporaryID;
- (id)_referenceData;
- (void)_setPersistentStore:(id)a0;
- (int)_temporaryIDCounter;

@end
