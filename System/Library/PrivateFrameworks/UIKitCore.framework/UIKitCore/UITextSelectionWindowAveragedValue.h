@class NSMutableArray;

@interface UITextSelectionWindowAveragedValue : NSObject {
    unsigned long long _depth;
    NSMutableArray *_values;
}

- (id)initWithDepth:(unsigned long long)a0;
- (void)addValue:(double)a0;
- (void).cxx_destruct;
- (void)flushValues;
- (double)windowAveragedValue;

@end
