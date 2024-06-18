@interface IDSAutoCleanup : NSObject {
    id /* block */ _cleanupBlock;
    int _accessCount;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0;
- (void)incrementAccessCount;

@end
