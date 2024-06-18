@interface BCBrtMonitor : NSObject {
    id /* block */ _cancel;
}

- (id)init;
- (void)cancel;
- (void)setCancelHandler:(id /* block */)a0;
- (void)dealloc;

@end
