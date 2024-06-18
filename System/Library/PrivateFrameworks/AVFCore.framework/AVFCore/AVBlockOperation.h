@interface AVBlockOperation : AVOperation {
    id /* block */ _block;
}

- (id)init;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0;

@end
