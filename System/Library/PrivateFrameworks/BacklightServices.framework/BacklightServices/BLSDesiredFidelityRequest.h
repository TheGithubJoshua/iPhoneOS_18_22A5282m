@interface BLSDesiredFidelityRequest : NSObject {
    id /* block */ _completion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_completed;
}

- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0;
- (void)completeWithDesiredFidelity:(long long)a0;

@end
