@class NSString, DownloadManager;

@interface SplunkSessionDelegate : NSObject <NSURLSessionDelegate>

@property (readonly, nonatomic) DownloadManager *downloadManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)initWithDownloadManager:(id)a0;

@end
