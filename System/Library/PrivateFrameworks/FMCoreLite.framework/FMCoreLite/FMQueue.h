@class NSArray, NSMutableArray;
@protocol FMQueueingStrategy;

@interface FMQueue : NSObject {
    NSMutableArray *_buffer;
    id<FMQueueingStrategy> _strategy;
}

@property (readonly) unsigned long long count;
@property (readonly) NSArray *allObjects;

+ (id)priorityQueueWithComparator:(id /* block */)a0;
+ (id)boundedQueueWithCapacity:(unsigned long long)a0 overflowHandler:(id /* block */)a1;
+ (id)boundedQueueWithCapacity:(unsigned long long)a0;

- (void)dequeueObject:(id)a0;
- (id)init;
- (id)peek;
- (void)enqueue:(id)a0;
- (id)drain;
- (id)initWithStrategy:(id)a0;
- (id)dequeue;
- (void).cxx_destruct;

@end
