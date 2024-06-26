@class NSMutableDictionary;

@interface FCSetValueDictionary : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSMutableDictionary *backingDictionary;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_setForKey:(id)a0;
- (void)addObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectsForKey:(id)a0;
- (id)keyEnumerator;
- (id)objectsForKey:(id)a0;
- (void)addObjects:(id)a0 forKey:(id)a1;

@end
