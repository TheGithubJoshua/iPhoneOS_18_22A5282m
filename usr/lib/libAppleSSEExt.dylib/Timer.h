@interface Timer : NSObject {
    id /* block */ _dispatchBlock;
}

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetWithTimeInterval:(double)a0 block:(id /* block */)a1;

@end
