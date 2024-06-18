@interface WBSCleanupHandler : NSObject {
    id /* block */ _block;
}

- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0;

@end
