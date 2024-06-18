@class LNValue, LNActionOutput;

@interface LNFetchActionOutputValueOperation : LNInterfaceConnectionOperation

@property (retain, nonatomic) LNActionOutput *actionOutput;
@property (retain, nonatomic) LNValue *value;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)start;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 actionOutput:(id)a1 completionHandler:(id /* block */)a2;

@end
