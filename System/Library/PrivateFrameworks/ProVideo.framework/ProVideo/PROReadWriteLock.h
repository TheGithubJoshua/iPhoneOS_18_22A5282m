@interface PROReadWriteLock : NSObject <NSLocking> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
}

- (id)init;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (void)lockForReading;
- (void)lockForWriting;

@end
