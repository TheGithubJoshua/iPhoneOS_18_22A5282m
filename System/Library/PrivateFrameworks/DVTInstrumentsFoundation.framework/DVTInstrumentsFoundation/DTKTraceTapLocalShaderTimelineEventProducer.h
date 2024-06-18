@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DTKTraceTapLocalShaderTimelineEventProducer : NSObject <DTKTraceTapLocalEventProducer> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_timer;
    int _token;
}

+ (BOOL)supportsConfig:(id)a0;

- (id)init;
- (void)pause;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unpause;
- (void)_notifyShaderBinaryInfo;

@end
