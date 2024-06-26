@class NSThread, CADisplayLink, NSRunLoop, NSObject;
@protocol OS_dispatch_semaphore;

@interface _UIHIDTouchTimingCapture : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSThread *_thread;
    NSRunLoop *_runLoop;
    CADisplayLink *_displayLink;
    struct HIDEventTiming { unsigned long long x0; unsigned long long x1; unsigned long long x2[1]; } *_events;
    unsigned long long *_timestamps;
}

- (id)init;
- (void)cleanup;
- (void)onDisplayLink:(id)a0;
- (void).cxx_destruct;
- (void)run;
- (void)beginCapture;
- (void)endCapture;
- (void)eventFetcher_addEvent:(struct __IOHIDEvent { } *)a0;
- (void)writeEventsToFile;

@end
