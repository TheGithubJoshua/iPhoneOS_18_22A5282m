@class UIPDFPageRenderJob;

@interface UIPDFPageRenderOperation : NSOperation {
    BOOL executing;
    BOOL finished;
}

@property (retain) UIPDFPageRenderJob *job;

- (void)main;
- (void)start;
- (void)completeOperation;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)dealloc;
- (id)initWithJob:(id)a0;

@end
