@interface LNOpenApplicationConnectionOperation : LNConnectionOperation

@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)finishWithActionResponse:(id)a0 error:(id)a1;
- (id)initWithPriority:(long long)a0 completionHandler:(id /* block */)a1;

@end
