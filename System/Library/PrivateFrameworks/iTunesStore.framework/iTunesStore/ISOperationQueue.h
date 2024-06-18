@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
    NSOperationQueue *_queue;
}

@property BOOL adjustsMaxConcurrentOperationCount;

+ (id)mainQueue;

- (id)init;
- (long long)maxConcurrentOperationCount;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addOperation:(id)a0;
- (void)cancelAllOperations;
- (void)setSuspended:(BOOL)a0;
- (void)addOperations:(id)a0 waitUntilFinished:(BOOL)a1;
- (long long)operationCount;
- (id)name;
- (id)operations;
- (void).cxx_destruct;
- (void)setMaxConcurrentOperationCount:(long long)a0;
- (void)dealloc;
- (void)setName:(id)a0;

@end
