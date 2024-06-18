@class NSMutableArray;

@interface MFBufferedQueue : NSObject {
    double _timeOfLastFlush;
    NSMutableArray *_queue;
}

@property (readonly, nonatomic) unsigned int size;
@property (nonatomic) unsigned int maximumSize;
@property (nonatomic) double maximumLatency;

- (BOOL)addItem:(id)a0;
- (id)init;
- (BOOL)flush;
- (BOOL)isEmpty;
- (unsigned long long)sizeForItem:(id)a0;
- (BOOL)_flush;
- (void)removeAllObjects;
- (void)dealloc;
- (BOOL)flushIfNecessary;
- (BOOL)handleItems:(id)a0;
- (id)initWithMaximumSize:(unsigned int)a0 latency:(double)a1;

@end
