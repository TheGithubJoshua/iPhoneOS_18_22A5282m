@class NSMutableArray;

@interface AMDMinHeap : NSObject

@property (retain, nonatomic) NSMutableArray *objects;
@property (copy) id /* block */ comparator;
@property unsigned long long capacity;
@property unsigned long long position;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (unsigned long long)size;
- (BOOL)add:(id)a0;
- (id)topN;
- (void)bubbleUp;
- (id)initWithCapacity:(unsigned long long)a0 comparator:(id /* block */)a1;
- (id)poll;
- (void)pushDown;
- (void)swap:(unsigned long long)a0 with:(unsigned long long)a1;

@end
