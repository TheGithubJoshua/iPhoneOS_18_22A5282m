@interface Invalidation : NSObject {
    id /* block */ _block;
}

- (void)invoke;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
