@class BSDispatchSource;

@interface BSProcessDeathWatcher : NSObject {
    BSDispatchSource *_source;
    id /* block */ _deathHandler;
}

- (id)initWithPID:(int)a0 queue:(id)a1 deathHandler:(id /* block */)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;

@end
