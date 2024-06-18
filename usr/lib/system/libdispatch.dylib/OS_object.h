@interface OS_object : NSObject

- (id)init;
- (void)_xref_dispose;
- (oneway void)release;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (unsigned long long)retainCount;
- (id)retain;

@end
