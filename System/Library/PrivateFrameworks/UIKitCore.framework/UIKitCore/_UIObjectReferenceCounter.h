@class NSCountedSet;

@interface _UIObjectReferenceCounter : NSObject {
    NSCountedSet *_objectReferences;
}

- (id)init;
- (void)decrementReferenceForObject:(id)a0 invalidationHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)allObjects;
- (void)incrementReferenceForObject:(id)a0;

@end
