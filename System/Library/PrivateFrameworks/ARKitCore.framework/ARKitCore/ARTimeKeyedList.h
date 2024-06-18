@class NSMutableArray;

@interface ARTimeKeyedList : NSObject {
    unsigned long long _maxSize;
    NSMutableArray *_times;
    NSMutableArray *_objects;
}

- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMaxSize:(unsigned long long)a0;
- (void)appendObject:(id)a0 forTime:(double)a1;
- (unsigned long long)insertionIndexForTime:(id)a0;
- (id)nearestObjectForTime:(double)a0;

@end
