@class NSURL;

@interface BRFileProvidingOperation : BROperation {
    NSURL *_url;
    unsigned long long _readingOptions;
}

@property (nonatomic) BOOL wantsCurrentVersion;
@property (copy, nonatomic) id /* block */ fileProvidingCompletion;

- (void)main;
- (id)initWithURL:(id)a0 readingOptions:(unsigned long long)a1;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
