@interface NanoPhotosCore.AsyncOperation : NSOperation {
    void /* unknown type, empty encoding */ stateQueue;
    void /* unknown type, empty encoding */ _state;
}

@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic, readonly) BOOL ready;
@property (nonatomic, readonly) BOOL executing;
@property (nonatomic, readonly) BOOL finished;

- (void)main;
- (BOOL)isAsynchronous;
- (id)init;
- (BOOL)isReady;
- (void)start;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (BOOL)isFinished;

@end
