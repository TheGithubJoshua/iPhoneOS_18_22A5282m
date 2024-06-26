@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface TSUProgressGroup : TSUProgress {
    NSArray *mChildren;
    NSArray *mChildrenProgressObservers;
    NSObject<OS_dispatch_queue> *mChildrenProgressObserversQueue;
}

- (id)initWithChildren:(id)a0;
- (BOOL)isIndeterminate;
- (void)removeProgressObserver:(id)a0;
- (void)dealloc;
- (double)maxValue;
- (double)value;
- (id)addProgressObserverWithValueInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)p_updateChildrenProgressObservers;

@end
