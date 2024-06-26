@class LNActionExecutor, LNSuccessResult, LNAction;

@interface LNPerformActionConnectionOperation : LNRuntimeAssertionsTakingConnectionOperation

@property (readonly, nonatomic) LNAction *action;
@property (readonly, nonatomic) LNActionExecutor *executor;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) LNSuccessResult *result;

- (void)start;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (double)timeout;
- (id)initWithConnectionInterface:(id)a0 action:(id)a1 executor:(id)a2 executorActivity:(id)a3 completionHandler:(id /* block */)a4;

@end
