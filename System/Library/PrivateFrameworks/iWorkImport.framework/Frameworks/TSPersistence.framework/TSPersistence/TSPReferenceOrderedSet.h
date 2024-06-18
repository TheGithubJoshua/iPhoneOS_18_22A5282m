@class NSMutableArray, NSMutableIndexSet;

@interface TSPReferenceOrderedSet : NSObject <NSCopying, NSMutableCopying> {
    unsigned long long _capacity;
    NSMutableArray *_items;
    NSMutableIndexSet *_objectsIndexSet;
    NSMutableIndexSet *_removedObjectsIndexSet;
    NSMutableIndexSet *_lazyReferencesIndexSet;
    NSMutableIndexSet *_removedLazyReferencesIndexSet;
}

@property (readonly, nonatomic) unsigned long long count;

- (BOOL)containsItem:(id)a0;
- (BOOL)addItem:(id)a0;
- (BOOL)removeItem:(id)a0;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)init;
- (void)minusSet:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)unionSet:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allObjects;

@end
