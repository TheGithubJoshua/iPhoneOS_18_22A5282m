@class NSString, NSOperationQueue, NSRunLoop, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MSVWatchdog : NSObject

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSRunLoop *runLoop;
@property (nonatomic) BOOL scheduled;
@property (nonatomic) BOOL running;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) double interval;
@property (nonatomic) double timeoutInterval;
@property (copy, nonatomic) id /* block */ timeoutCallback;
@property (retain, nonatomic) NSString *mode;

- (id)init;
- (void)suspend;
- (void).cxx_destruct;
- (void)resume;
- (void)_cancelTimeout;
- (void)_scheduleTest;
- (void)_scheduleTimeout;
- (void)scheduleInDispatchQueue:(id)a0;
- (void)scheduleInOperationQueue:(id)a0;
- (void)_invokeCallback;
- (void)scheduleInRunLoop:(id)a0;

@end
