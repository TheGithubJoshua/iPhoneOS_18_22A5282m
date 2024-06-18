@interface SKUIBlockAnimationDelegate : NSObject {
    id /* block */ _block;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithCompletionHandler:(id /* block */)a0;

@end
