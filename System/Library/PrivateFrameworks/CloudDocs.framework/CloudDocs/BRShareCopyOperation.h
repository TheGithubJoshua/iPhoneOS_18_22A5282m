@interface BRShareCopyOperation : BRShareOperation

@property (copy) id /* block */ shareCopyCompletionBlock;
@property (copy) id /* block */ rootShareCopyCompletionBlock;

- (void)main;
- (id)initWithURL:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithItemID:(id)a0;

@end
