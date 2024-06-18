@interface _NSMoribundCache : NSCache

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)copy;
- (oneway void)release;
- (id)objectForKey:(id)a0;
- (id)autorelease;
- (id)name;
- (void)removeAllObjects;
- (void)setDelegate:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)delegate;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)dealloc;
- (void)setName:(id)a0;
- (void)setCountLimit:(unsigned long long)a0;
- (unsigned long long)countLimit;
- (BOOL)evictsObjectsWithDiscardedContent;
- (void)setEvictsObjectsWithDiscardedContent:(BOOL)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (void)setTotalCostLimit:(unsigned long long)a0;
- (unsigned long long)totalCostLimit;

@end
