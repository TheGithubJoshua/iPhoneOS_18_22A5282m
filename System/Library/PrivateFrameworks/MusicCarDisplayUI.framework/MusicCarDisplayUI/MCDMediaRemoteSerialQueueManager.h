@class NSOperationQueue;

@interface MCDMediaRemoteSerialQueueManager : NSObject

@property (class, readonly, nonatomic) MCDMediaRemoteSerialQueueManager *sharedInstance;

@property (retain, nonatomic) NSOperationQueue *mediaRemoteSerialQueue;

- (id)init;
- (void)cancelAllOperations;
- (void).cxx_destruct;
- (void)addOperation:(id /* block */)a0 cancelAllOperations:(BOOL)a1;

@end
