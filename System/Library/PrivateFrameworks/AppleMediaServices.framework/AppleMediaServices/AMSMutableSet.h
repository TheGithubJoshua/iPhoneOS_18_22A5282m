@class NSMutableSet;

@interface AMSMutableSet : NSMutableSet {
    NSMutableSet *_backingSet;
}

@property (copy, nonatomic) id /* block */ hashBlock;

+ (id)setWithHashBlock:(id /* block */)a0;

- (void)addObjectsFromArray:(id)a0;
- (BOOL)containsObject:(id)a0;
- (id)objectEnumerator;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)allObjects;
- (id)anyObject;
- (unsigned long long)count;
- (id)member:(id)a0;
- (id)_allObjectsFromBackingSet;
- (id)initWithHashBlock:(id /* block */)a0;

@end
