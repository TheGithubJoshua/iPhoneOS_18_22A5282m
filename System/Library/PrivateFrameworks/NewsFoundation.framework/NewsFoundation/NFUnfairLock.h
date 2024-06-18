@interface NFUnfairLock : NSObject <NFLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    unsigned int _unfairLockOptions;
}

- (id)init;
- (void)performWithLockSync:(id /* block */)a0;
- (void)unlock;
- (void)lock;
- (id)initWithOptions:(long long)a0;

@end
