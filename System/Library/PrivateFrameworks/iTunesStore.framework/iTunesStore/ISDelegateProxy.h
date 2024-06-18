@class NSLock;

@interface ISDelegateProxy : NSObject {
    id _delegate;
    NSLock *_lock;
    BOOL _shouldMessageMainThread;
}

- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)setDelegate:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (void)sendInvocationToDelegate:(id)a0;
- (void)setShouldMessageMainThread:(BOOL)a0;

@end
