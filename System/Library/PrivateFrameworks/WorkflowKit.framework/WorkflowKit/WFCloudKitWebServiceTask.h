@class NSOperationQueue, NSURLSessionTask;

@interface WFCloudKitWebServiceTask : WFCloudKitTask

@property (retain, nonatomic) NSURLSessionTask *dataTask;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (id)init;
- (void)cancel;
- (void).cxx_destruct;

@end
