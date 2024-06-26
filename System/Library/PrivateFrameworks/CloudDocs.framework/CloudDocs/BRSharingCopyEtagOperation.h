@class NSURL;

@interface BRSharingCopyEtagOperation : BROperation {
    NSURL *_fileURL;
}

@property (copy) id /* block */ sharingEtagCompletionBlock;

- (void)main;
- (id)initWithURL:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
