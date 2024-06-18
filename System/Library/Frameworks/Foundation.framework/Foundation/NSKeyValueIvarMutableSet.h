@interface NSKeyValueIvarMutableSet : NSKeyValueMutableSet {
    struct objc_ivar { } *_ivar;
}

- (void)_proxyNonGCFinalize;
- (void)intersectSet:(id)a0;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (void)minusSet:(id)a0;
- (void)setSet:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (void)unionSet:(id)a0;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (unsigned long long)count;
- (id)member:(id)a0;

@end
