@class NSURL;

@interface BREvictItemOperation : BROperation {
    struct { unsigned long long sectionID; char *function; int line; } _section;
    NSURL *_url;
}

@property (copy) id /* block */ evictionCompletionBlock;

- (void)main;
- (id)initWithURL:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end
