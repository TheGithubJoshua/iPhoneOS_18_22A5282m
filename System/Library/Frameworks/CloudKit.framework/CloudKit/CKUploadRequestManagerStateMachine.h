@class CUStateEvent, CUStateMachine;

@interface CKUploadRequestManagerStateMachine : NSObject

@property (retain, nonatomic) CUStateMachine *stateMachine;
@property (retain, nonatomic) CUStateEvent *eventCausingTransition;
@property (copy, nonatomic) id /* block */ internalActionHandler;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (copy, nonatomic) id /* block */ enterStateHandler;
@property (copy, nonatomic) id /* block */ exitStateHandler;

+ (id)nameFromState:(long long)a0;
+ (id)nameFromResponseAction:(long long)a0;
+ (id)nameFromStateEvent:(long long)a0;
+ (id)nameFromFunction:(long long)a0;

- (void)dispatchEvent:(long long)a0 userInfo:(id)a1;
- (void)dispatchEvent:(long long)a0;
- (void)start;
- (void).cxx_destruct;
- (id /* block */)eventHandlerForState:(id)a0 withEnterBlock:(id /* block */)a1 exitBlock:(id /* block */)a2 eventBlock:(id /* block */)a3;
- (id)initWithActionHandler:(id /* block */)a0;
- (void)transitionToState:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (BOOL)canPerformFunction:(long long)a0;
- (id)createStateMachine;

@end
