@class NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, CMPocketStateDelegate;

@interface CMPocketStateManager : NSObject {
    NSObject<OS_dispatch_source> *fQueryTimer;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    int fCachedState;
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> { struct __compressed_pair<CLMotionNotifier::Dispatcher *, std::default_delete<CLMotionNotifier::Dispatcher>> { struct Dispatcher *__value_; } __ptr_; } fDispatcher;
    double fMaxMonitorTime;
    NSMutableArray *fQueryBlocks;
}

@property (nonatomic) id<CMPocketStateDelegate> delegate;

+ (BOOL)isPocketStateAvailable;

- (id)init;
- (void)_prepareDispatcher;
- (long long)translateInternalState:(int)a0;
- (void)queryStateOntoQueue:(id)a0 withTimeout:(double)a1 andHandler:(id /* block */)a2;
- (void)_disableDispatcher;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)queryStateOntoQueue:(id)a0 andMonitorFor:(double)a1 withTimeout:(double)a2 andHandler:(id /* block */)a3;
- (void)dealloc;
- (void)onNotification:(id)a0;
- (void)onPocketStateUpdated:(int)a0;
- (id)externalStateToString:(long long)a0;
- (void)addToAggdScalarWithName:(id)a0 andScalar:(unsigned long long)a1;

@end
