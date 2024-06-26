@class NSObject;
@protocol FCGoalProgressDebouncerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface FCGoalProgressDebouncer : NSObject {
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSObject<OS_dispatch_source> *_timer;
}

@property (weak, nonatomic) id<FCGoalProgressDebouncerDelegate> delegate;

- (id)initWithServiceQueue:(id)a0;
- (void)debounce;
- (BOOL)inProgress;
- (void).cxx_destruct;
- (void)_handleTimerFired;

@end
