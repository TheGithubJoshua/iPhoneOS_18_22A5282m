@class NSUndoManager;

@interface NSUndoManagerProxy : NSProxy {
    NSUndoManager *_manager;
    Class _targetClass;
}

- (id)initWithManager:(id)a0;
- (BOOL)_tryRetain;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (oneway void)release;
- (void)forwardInvocation:(id)a0;
- (id)retain;
- (void)setTargetClass:(Class)a0;
- (void)superRelease;

@end
