@interface PPEvictingMaxTokenCountPriorityQueue : NSObject {
    unsigned long long _capacity;
    void *_queue;
}

@property (readonly, nonatomic) double count;

- (id)init;
- (unsigned long long)capacity;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (id)popItem;
- (void)dealloc;
- (void)enumerateTokenCountsUsingBlock:(id /* block */)a0;
- (id)getMaxItemWithoutPopping;

@end
