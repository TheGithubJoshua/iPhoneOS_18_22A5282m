@class NSString;

@interface NSLock : NSObject <NSLocking> {
    struct { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } m; struct *cd; NSString *n; } _priv;
}

@property (copy) NSString *name;

- (id)init;
- (BOOL)tryLock;
- (void)unlock;
- (BOOL)lockBeforeDate:(id)a0;
- (id)description;
- (void)lock;
- (void)dealloc;

@end
