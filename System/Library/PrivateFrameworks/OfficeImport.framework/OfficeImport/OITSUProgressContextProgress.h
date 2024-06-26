@class NSObject, OITSUProgressContext;
@protocol OS_dispatch_queue;

@interface OITSUProgressContextProgress : OITSUProgress {
    OITSUProgressContext *mProgressContext;
    NSObject<OS_dispatch_queue> *mProgressContextObserverQueue;
    BOOL hasAddedProgressContextObserver;
}

- (id)init;
- (BOOL)isIndeterminate;
- (void)removeProgressObserver:(id)a0;
- (void)dealloc;
- (double)maxValue;
- (double)value;
- (void)p_updateProgressContextObserver;
- (id)addProgressObserverWithValueInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (id)initWithProgressContext:(id)a0;
- (void)p_progressDidChange:(id)a0;

@end
