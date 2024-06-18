@class NSString, NSMutableOrderedSet;

@interface SBAlertItemsObjectQueue : NSObject <BSDescriptionProviding, NSFastEnumeration>

@property (retain, nonatomic) NSMutableOrderedSet *objects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)appendObject:(id)a0;
- (BOOL)hasObject;
- (id)dequeueAllObjects;
- (id)succinctDescription;
- (BOOL)containsObject:(id)a0;
- (BOOL)hasObjectOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (void)removeObject:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)objectsOfClass:(Class)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)prependObject:(id)a0;

@end
