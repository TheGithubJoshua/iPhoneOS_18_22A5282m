@class NSObject, NSURLSessionDataTask, NSURLSession;
@protocol OS_dispatch_queue, GKResourceDataConsumer;

@interface GKLoadImageResourceOperation : GKLoadResourceOperation

@property (class, readonly) NSURLSession *URLSession;
@property (class, readonly) NSObject<OS_dispatch_queue> *dataConsumerQueue;

@property (readonly, nonatomic) NSURLSessionDataTask *task;
@property (readonly, nonatomic) id<GKResourceDataConsumer> dataConsumer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dataConsumerQueue;

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsExecuting;

- (BOOL)isAsynchronous;
- (void)didFinishTaskWithData:(id)a0 response:(id)a1 error:(id)a2;
- (void)cancel;
- (void)start;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (void)setQueuePriority:(long long)a0;
- (id)initWithURLRequest:(id)a0 URLSession:(id)a1 dataConsumer:(id)a2 dataConsumerQueue:(id)a3;
- (BOOL)isFinished;
- (id)initWithURLRequest:(id)a0 dataConsumer:(id)a1;

@end
