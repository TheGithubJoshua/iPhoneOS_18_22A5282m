@class CKVQueueNode;

@interface CKVQueue : NSObject {
    CKVQueueNode *_firstNode;
    CKVQueueNode *_lastNode;
}

- (id)init;
- (void)enqueue:(id)a0;
- (id)dequeue;
- (void).cxx_destruct;

@end
