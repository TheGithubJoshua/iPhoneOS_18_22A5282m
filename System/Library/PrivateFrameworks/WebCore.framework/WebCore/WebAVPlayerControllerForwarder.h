@interface WebAVPlayerControllerForwarder : NSObject {
    struct RetainPtr<WebAVPlayerController> { void *m_ptr; } _playerController;
}

- (id)valueForKeyPath:(id)a0;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (id)init;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (id)valueForKey:(id)a0;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)_forwardingTargetForKeyPath:(id)a0;

@end
