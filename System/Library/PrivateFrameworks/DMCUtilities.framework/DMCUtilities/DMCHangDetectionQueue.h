@class NSString, NSOperationQueue, NSObject, DMCBacktraceLogger;
@protocol OS_dispatch_queue;

@interface DMCHangDetectionQueue : NSObject

@property (copy, nonatomic) NSString *owner;
@property (retain, nonatomic) NSOperationQueue *workerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logQueue;
@property (nonatomic) double threshold;
@property (retain, nonatomic) DMCBacktraceLogger *backtraceLogger;
@property (nonatomic) int lastExecutedJob;
@property (nonatomic) _Atomic int blockNum;
@property (retain, nonatomic) DMCBacktraceLogger *logger;
@property (nonatomic) BOOL shouldDumpStackshot;
@property (nonatomic) BOOL verboseLogEnabled;

- (id)init;
- (id)initWithQoS:(long long)a0 hangThreshold:(double)a1 owner:(id)a2;
- (void)queueBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)waitUntilAllBlocksAreFinished;

@end
