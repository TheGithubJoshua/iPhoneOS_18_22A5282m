@interface PPEvictingMinPriorityQueue : NSObject {
    unsigned long long _capacity;
    void *_queue;
}

@property (readonly, nonatomic) double count;

- (id)init;
- (unsigned long long)capacity;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)extractSortedMutableArray;
- (id)getMinItemWithoutPopping;
- (void)addObject:(id)a0;
- (id)popItem;
- (void)dealloc;

@end
