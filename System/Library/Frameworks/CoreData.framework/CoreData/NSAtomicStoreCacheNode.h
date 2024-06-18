@class NSMutableDictionary, NSManagedObjectID;

@interface NSAtomicStoreCacheNode : NSObject {
    NSManagedObjectID *_objectID;
    unsigned long long __versionNumber;
    NSMutableDictionary *_propertyCache;
    void *_reserved1;
}

@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (retain, nonatomic) NSMutableDictionary *propertyCache;

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;

- (const id *)knownKeyValuesPointer;
- (id)init;
- (unsigned int)_versionNumber;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (id)_snapshot_;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (void)_setVersionNumber:(unsigned int)a0;
- (id)initWithObjectID:(id)a0;

@end
