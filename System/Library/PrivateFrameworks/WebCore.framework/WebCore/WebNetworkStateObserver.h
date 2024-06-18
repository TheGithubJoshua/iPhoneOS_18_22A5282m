@interface WebNetworkStateObserver : NSObject {
    struct BlockPtr<void ()> { id /* block */ m_block; } block;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)networkStateChanged:(id)a0;
- (id)initWithBlock:(id /* block */)a0;

@end
