@class NSMutableDictionary;

@interface TSCH3DDictionaryOfSet : NSObject <NSFastEnumeration> {
    NSMutableDictionary *_sets;
}

+ (id)dictionary;
+ (id)dictionaryWithMutableDictionaryClass:(Class)a0;

- (id)init;
- (id)allKeys;
- (void)addObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (void)removeObject:(id)a0 forKey:(id)a1;
- (id)objectsForKey:(id)a0;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithMutableDictionaryClass:(Class)a0;

@end
