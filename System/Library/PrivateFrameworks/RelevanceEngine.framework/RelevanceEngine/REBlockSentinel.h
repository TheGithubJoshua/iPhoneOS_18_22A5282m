@interface REBlockSentinel : NSObject

@property (getter=isCompleted) BOOL completed;
@property (readonly, nonatomic) id /* block */ failureBlock;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)complete;
- (id)initWithFailureBlock:(id /* block */)a0;

@end
