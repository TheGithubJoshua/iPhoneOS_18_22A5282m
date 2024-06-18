@class NSString;

@interface AVRetainReleaseWeakReference : AVWeakReference {
    NSString *_cachedReferencedObjectDescription;
    id _weakStorage;
}

- (id)init;
- (id)initWithReferencedObject:(id)a0;
- (id)description;
- (void)dealloc;
- (id)referencedObject;

@end
