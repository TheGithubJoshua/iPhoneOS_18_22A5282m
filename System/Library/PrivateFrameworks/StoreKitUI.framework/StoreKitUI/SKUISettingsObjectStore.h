@class NSMutableOrderedSet;

@interface SKUISettingsObjectStore : NSObject {
    NSMutableOrderedSet *_allObjects;
    BOOL _dirty;
    NSMutableOrderedSet *_visibleObjects;
}

- (unsigned long long)numberOfObjects;
- (id)init;
- (unsigned long long)indexOfObject:(id)a0;
- (BOOL)containsObject:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)description;
- (void)removeObject:(id)a0;
- (id)allObjects;
- (void)_updateVisibleOrder;
- (void)addObject:(id)a0 hidden:(BOOL)a1;
- (void)enumerateObjects:(id /* block */)a0;
- (void)enumerateVisibleObjects:(id /* block */)a0;
- (void)hideObject:(id)a0;
- (unsigned long long)indexOfVisibleObject:(id)a0;
- (unsigned long long)numberOfVisibleObjects;
- (BOOL)objectIsVisible:(id)a0;
- (void)revealObject:(id)a0;
- (id)visibleObjectAtIndex:(unsigned long long)a0;

@end
