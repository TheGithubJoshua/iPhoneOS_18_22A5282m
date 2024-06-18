@interface SBPPTBlockOperation : SBPPTOperation {
    BOOL _cancelled;
}

@property (weak, nonatomic) id /* block */ timeoutBlock;
@property (nonatomic) unsigned long long state;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (nonatomic) double timeoutInterval;

+ (id)operationWithBlock:(id /* block */)a0;
+ (id)operationWithName:(id)a0 block:(id /* block */)a1;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsExecuting;

- (void)main;
- (BOOL)isAsynchronous;
- (void)finish;
- (id)init;
- (void)cancel;
- (void)start;
- (void)cancelAndFailTestWithReason:(id)a0;
- (id)initWithName:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)initWithBlock:(id /* block */)a0;

@end
