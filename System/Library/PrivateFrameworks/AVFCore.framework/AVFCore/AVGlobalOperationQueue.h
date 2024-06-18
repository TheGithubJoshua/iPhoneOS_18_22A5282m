@class NSArray, NSOperationQueue;

@interface AVGlobalOperationQueue : NSObject {
    NSOperationQueue *_operationQueue;
}

@property (readonly, copy) NSArray *unfinishedOperations;

+ (id)defaultQueue;

- (id)init;
- (void)enqueueOperation:(id)a0;
- (id)description;
- (void)dealloc;

@end
