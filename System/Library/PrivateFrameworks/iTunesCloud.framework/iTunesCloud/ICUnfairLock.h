@interface ICUnfairLock : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (void)lockWithBlock:(id /* block */)a0;
- (void)unlock;
- (void)lock;

@end
