@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface VLTraceRecorder : NSObject {
    NSURL *_destinationDirectory;
    NSObject<OS_dispatch_queue> *_queue;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _began;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _finished;
    NSURL *_baseDirectory;
    NSURL *_imagesDirectory;
    NSURL *_parametersDirectory;
    NSURL *_resultsDirectory;
}

@property (class, readonly, nonatomic) NSURL *defaultDirectory;

- (id)initWithDirectory:(id)a0;
- (void)finish;
- (void)start;
- (void).cxx_destruct;
- (void)recordAttempt:(id)a0;
- (void)_recordAttemptOnIsolationQueue:(id)a0;
- (void)_beginTraceIfNecessary;
- (void)_finishOnIsolationQueue;

@end
