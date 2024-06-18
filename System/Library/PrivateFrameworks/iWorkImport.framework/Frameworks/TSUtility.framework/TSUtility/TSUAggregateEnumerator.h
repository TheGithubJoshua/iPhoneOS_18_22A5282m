@class NSMutableArray;

@interface TSUAggregateEnumerator : NSEnumerator

@property (retain, nonatomic) NSMutableArray *objects;

+ (id)aggregateEnumeratorWithObjects:(id)a0;

- (id)nextObject;
- (id)init;
- (id)initWithObjects:(id)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)initWithFirstObject:(id)a0 argumentList:(char *)a1;

@end
