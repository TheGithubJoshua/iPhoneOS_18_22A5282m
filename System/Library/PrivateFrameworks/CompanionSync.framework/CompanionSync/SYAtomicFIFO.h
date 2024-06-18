@class NSMutableArray;

@interface SYAtomicFIFO : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_store;
}

@property (readonly) id head;
@property (readonly) id tail;

- (id)init;
- (void)enqueue:(id)a0;
- (id)dequeue;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (id)dequeueUntil:(id /* block */)a0;

@end
