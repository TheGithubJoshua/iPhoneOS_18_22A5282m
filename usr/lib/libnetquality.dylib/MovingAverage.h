@class NSMutableArray;

@interface MovingAverage : NSObject {
    long long _arraySize;
    NSMutableArray *_values;
    float _currentAverage;
}

- (id)initWithSize:(long long)a0;
- (void).cxx_destruct;
- (float)add:(float)a0;
- (float)getAvg;

@end
