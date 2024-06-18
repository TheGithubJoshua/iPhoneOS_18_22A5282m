@class SKUIApplicationController;

@interface _SKUIApplicationShutdownHelper : NSObject {
    SKUIApplicationController *_applicationController;
    unsigned long long _taskID;
}

- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithApplicationController:(id)a0;

@end
