@class FCMapTable;

@interface FCSetValueMapTable : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) FCMapTable *backingMapTable;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_setForKey:(id)a0;
- (void)addObject:(id)a0 forKey:(id)a1;
- (id)objectEnumerator;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectsForKey:(id)a0;
- (id)keyEnumerator;
- (void)removeObject:(id)a0 forKey:(id)a1;
- (id)objectsForKey:(id)a0;
- (void)addObjects:(id)a0 forKey:(id)a1;

@end
