@class NSUUID, NSValue, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface UIKBTouchOrderedTaskList : NSObject {
    NSObject<OS_dispatch_queue> *_touchStateTasksQueue;
    NSMutableArray *_touchStateTasks;
}

@property (readonly, nonatomic) NSUUID *touchUUID;
@property (readonly, nonatomic) unsigned long long pathIndex;
@property (readonly, nonatomic) double originalStartTime;
@property (readonly, nonatomic) NSValue *currentTouchPoint;
@property (nonatomic) BOOL ignoredOnBegin;
@property (readonly, nonatomic) BOOL hasTasks;

+ (id)taskListForTouchUUID:(id)a0 withPathIndex:(unsigned long long)a1;

- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)firstTouchStateForUITouchPhase:(long long)a0;
- (BOOL)executeTasksInView:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithTouchUUID:(id)a0 withPathIndex:(unsigned long long)a1;
- (BOOL)isExecutingFirstTask;
- (void)removeTasksMatchingFilter:(id /* block */)a0;

@end
