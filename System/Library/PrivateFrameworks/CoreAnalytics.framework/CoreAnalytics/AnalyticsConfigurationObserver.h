@class NSObject;
@protocol OS_dispatch_queue, AnalyticsConfigurationObserverDelegate;

@interface AnalyticsConfigurationObserver : NSObject {
    struct shared_ptr<(anonymous namespace)::ConfigurationObserverImpl> { struct ConfigurationObserverImpl *__ptr_; struct __shared_weak_count *__cntrl_; } observer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<AnalyticsConfigurationObserverDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;

- (id)init;
- (BOOL)stopObservingConfigurationType:(id)a0;
- (void)setConfigurationObserverDelegate:(id)a0 queue:(id)a1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)startObservingConfigurationType:(id)a0;
- (void)dealloc;

@end
