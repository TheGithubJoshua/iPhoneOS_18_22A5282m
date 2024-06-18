@class NSManagedObjectID;

@interface NSIncrementalStoreNode : NSObject {
    NSManagedObjectID *_objectID;
    unsigned long long _versionNumber;
    id _propertyCache;
    void *_reserved1;
}

@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) unsigned long long version;

+ (void)initialize;

- (const id *)knownKeyValuesPointer;
- (unsigned int)_versionNumber;
- (id)_snapshot_;
- (id)description;
- (void)updateWithValues:(id)a0 version:(unsigned long long)a1;
- (id)_propertyCache;
- (void)dealloc;
- (id)initWithObjectID:(id)a0 withValues:(id)a1 version:(unsigned long long)a2;
- (id)valueForPropertyDescription:(id)a0;
- (id)initWithObjectID:(id)a0 fromSQLRow:(id)a1;

@end
