@class NSString, BRCFairScheduler, NSObject;
@protocol OS_dispatch_workloop;

@interface BRCFairSource : NSObject {
    unsigned long long _schedulerBitIndex;
    NSString *_name;
    BRCFairScheduler *_scheduler;
    int _suspendCount;
    BOOL _cancelled;
    BOOL _signaled;
}

@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *workloop;
@property (copy, nonatomic) id /* block */ eventHandler;

- (void)signal;
- (void)suspend;
- (void)cancel;
- (void).cxx_destruct;
- (id)description;
- (void)resume;
- (void)_runEventHandler;
- (id)initWithName:(id)a0 scheduler:(id)a1;

@end
