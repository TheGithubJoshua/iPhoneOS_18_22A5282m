@class NSString, NUJobQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NUJobPriorityQueue : NSObject {
    NSMutableArray *_jobs;
    BOOL _needSort;
    NUJobQueue *_owner;
    NSObject<OS_dispatch_queue> *_runQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSString *_currentlyExecutingJobName;
    BOOL _isRunning;
}

@property (readonly) NSString *name;
@property (readonly) long long count;

- (id)init;
- (void)_run;
- (id)popJob;
- (BOOL)_removeJob:(id)a0;
- (BOOL)start;
- (id)initWithName:(id)a0 owner:(id)a1 qos:(unsigned int)a2;
- (void).cxx_destruct;
- (id)description;
- (BOOL)removeJob:(id)a0;
- (void)_addJob:(id)a0;
- (void)_sort;
- (id)_popJob;
- (BOOL)_runNextJob;
- (void)_startRunning;
- (void)addJob:(id)a0;
- (void)_sortIfNeeded;

@end
