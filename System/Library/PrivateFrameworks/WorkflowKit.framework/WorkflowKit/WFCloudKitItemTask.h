@class NSOperationQueue, CKOperation, NSError;

@interface WFCloudKitItemTask : WFCloudKitTask

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) CKOperation *cloudOperation;
@property (retain, nonatomic) NSError *error;

- (id)init;
- (void)cancel;
- (void).cxx_destruct;

@end
