@class NSManagedObjectID;

@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying> {
    int _cd_rc;
    int _cd_version;
    NSManagedObjectID *_cd_objectID;
    struct _snapshotFlags_st { unsigned char _readOnly : 1; unsigned char _reservedFlags : 7; } _cd_flags;
    unsigned char _cd_nullFlags_;
}

+ (id)alloc;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)_entityDeallocated;
+ (void)_invalidateStaticCaches;
+ (Class)classForEntity:(id)a0;
+ (unsigned int)newBatchAllocation:(id *)a0 count:(unsigned int)a1 withOwnedObjectIDs:(id *)a2;

- (BOOL)_tryRetain;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (oneway void)release;
- (void)setValue:(id)a0 forKey:(id)a1;
- (unsigned long long)hash;
- (id)valueForKey:(id)a0;
- (id)mutableCopy;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)dealloc;
- (BOOL)_isDeallocating;

@end
