@class NSData, NSURLSessionDownloadTask;

@interface PFLTaskStateDownloadingModel : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *resumeData;
@property (retain, nonatomic) NSURLSessionDownloadTask *downloadTask;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)tag;
- (void)suspend;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)resume:(id)a0 completion:(id /* block */)a1;

@end
