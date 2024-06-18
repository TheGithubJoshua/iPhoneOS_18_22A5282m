@interface __NSOrderedSetSetProxy : NSSet {
    id _orderedSet;
}

- (id)initWithOrderedSet:(id)a0;
- (id)objectEnumerator;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)count;
- (id)member:(id)a0;

@end
