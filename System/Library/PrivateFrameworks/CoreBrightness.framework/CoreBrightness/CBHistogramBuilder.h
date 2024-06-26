@class NSArray, NSMutableArray;

@interface CBHistogramBuilder : NSObject <CBHistogram>

@property (readonly) NSMutableArray *bins;
@property (readonly) NSArray *edges;

- (void)pushNumber:(double)a0;
- (void)enumerateBinsUsingBlock:(id /* block */)a0;
- (id)initWithEdges:(id)a0;
- (void)pushNumberWeighted:(double)a0 withWeight:(double)a1;
- (void)dealloc;
- (void)reset;

@end
