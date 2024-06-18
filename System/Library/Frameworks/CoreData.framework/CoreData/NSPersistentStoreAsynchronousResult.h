@class NSError, NSManagedObjectContext, NSProgress;

@interface NSPersistentStoreAsynchronousResult : NSPersistentStoreResult {
    NSProgress *_requestProgress;
    id _requestCompletionBlock;
    int _flags;
}

@property (retain) NSError *operationError;
@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (readonly) NSProgress *progress;

- (id)initWithContext:(id)a0 andProgress:(id)a1 completetionBlock:(id)a2;
- (void)cancel;
- (void)dealloc;
- (BOOL)_isCancelled;
- (void)_cancelProgress;

@end
