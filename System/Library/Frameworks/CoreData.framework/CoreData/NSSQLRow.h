@class _CDSnapshot;

@interface NSSQLRow : NSPersistentCacheRow <NSCopying> {
    _CDSnapshot *_snapshot;
}

+ (void)initialize;
+ (unsigned int)newBatchRowAllocation:(id *)a0 count:(unsigned int)a1 forSQLEntity:(id)a2 withOwnedObjectIDs:(id *)a3 andTimestamp:(double)a4;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (const id *)knownKeyValuesPointer;
- (id)objectID;
- (void)setObjectID:(id)a0;
- (unsigned int)_versionNumber;
- (id)copy;
- (void)setForeignEntityKeySlot:(unsigned int)a0 entityKey:(unsigned int)a1;
- (void)setForeignKeySlot:(unsigned int)a0 int64:(long long)a1;
- (id)valueForKey:(id)a0;
- (id)initWithSQLEntity:(id)a0 ownedObjectID:(id)a1 andTimestamp:(double)a2;
- (void)setOptLock:(long long)a0;
- (id)_snapshot_;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSQLEntity:(id)a0 objectID:(id)a1;
- (void)dealloc;
- (unsigned long long)version;
- (id)newObjectIDForToOne:(id)a0;
- (void)setForeignOrderKeySlot:(unsigned int)a0 orderKey:(unsigned int)a1;

@end
