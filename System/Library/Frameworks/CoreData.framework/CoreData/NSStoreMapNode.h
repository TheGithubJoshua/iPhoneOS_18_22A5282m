@class NSMutableDictionary, NSPersistentStoreMap, NSString, NSManagedObjectID;

@interface NSStoreMapNode : NSObject <NSCoding> {
    NSPersistentStoreMap *_map;
    NSManagedObjectID *_objectID;
    NSMutableDictionary *_relatedNodes;
    NSString *_entityName;
    unsigned int _version;
}

+ (void)initialize;

- (id)entity;
- (id)configurationName;
- (const id *)knownKeyValuesPointer;
- (id)initWithCoder:(id)a0;
- (id)objectID;
- (id)key;
- (unsigned int)_versionNumber;
- (void)encodeWithCoder:(id)a0;
- (id)_snapshot_;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (void)_setVersionNumber:(unsigned int)a0;
- (id)destinationsForRelationship:(id)a0;
- (id)initWithObjectID:(id)a0;

@end
