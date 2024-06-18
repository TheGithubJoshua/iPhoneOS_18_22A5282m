@interface BRShareCopyAccessTokenOperation : BRShareOperation

@property (copy) id /* block */ shareCopyAccessTokenCompletionBlock;

- (void)main;
- (id)initWithURL:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
