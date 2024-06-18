@class NSOperation;

@interface CATSerialOperationQueue : CATOperationQueue {
    NSOperation *mLastOperation;
}

- (id)init;
- (void)addOperation:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;

@end
