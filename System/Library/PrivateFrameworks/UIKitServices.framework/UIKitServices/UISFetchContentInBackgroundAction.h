@interface UISFetchContentInBackgroundAction : BSAction

- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;
- (id)initWithHandler:(id /* block */)a0;
- (void)sendResponse:(id)a0;
- (long long)UIActionType;

@end
