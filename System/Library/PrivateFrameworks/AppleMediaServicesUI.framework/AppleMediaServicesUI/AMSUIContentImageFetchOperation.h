@class NSURL;

@interface AMSUIContentImageFetchOperation : AMSUIAssetFetchOperation

@property (retain, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) id /* block */ fallbackBlock;

- (void)main;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)_fallbackWithURL:(id)a0;

@end
