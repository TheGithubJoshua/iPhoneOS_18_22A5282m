@class NSMutableArray;

@interface NUAnimationQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *queue;
@property (nonatomic, getter=isRunning) BOOL running;

- (id)init;
- (void)cancel;
- (void)addAnimation:(id /* block */)a0;
- (void).cxx_destruct;
- (void)runUntilEmpty;

@end
