@interface CNUnfairLock : NSObject <NSLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _os_unfair_lock;
}

- (id)init;
- (BOOL)tryLock;
- (void)unlock;
- (id)description;
- (void)assertCurrentThreadIsOwner;
- (void)lock;
- (void)assertCurrentThreadIsNotOwner;

@end
