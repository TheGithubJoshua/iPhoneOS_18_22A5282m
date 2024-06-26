@class NSArray, FCCachePolicy;
@protocol FCContentContext;

@interface FCCurrentIssuesFetchOperation : FCOperation

@property (retain, nonatomic) id<FCContentContext> context;
@property (retain, nonatomic) NSArray *resultIssues;
@property (copy, nonatomic) FCCachePolicy *cachePolicy;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (id)init;
- (id)initWithContext:(id)a0;
- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (BOOL)validateOperation;
- (void).cxx_destruct;

@end
