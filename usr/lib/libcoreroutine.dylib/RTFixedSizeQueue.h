@class NSMutableArray;

@interface RTFixedSizeQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *objects;
@property (readonly, nonatomic) unsigned long long capacity;

- (id)lastObject;
- (id)firstObject;
- (id)enqueueObject:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)dequeueObject;
- (unsigned long long)count;

@end
