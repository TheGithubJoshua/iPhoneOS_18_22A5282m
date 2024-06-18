@class _NSFaultingMutableSetMutationMethods;

@interface _NSProxyWrapperMutableSet : _NSNotifyingWrapperMutableSet {
    _NSFaultingMutableSetMutationMethods *_mutationMethods;
}

- (void)intersectSet:(id)a0;
- (void)minusSet:(id)a0;
- (void)setSet:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (void)unionSet:(id)a0;
- (void)removeAllObjects;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (void)dealloc;

@end
