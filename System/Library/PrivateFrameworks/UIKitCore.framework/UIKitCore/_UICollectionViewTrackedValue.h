@class NSArray;

@interface _UICollectionViewTrackedValue : NSObject {
    NSArray *_values;
    long long _valuesCount;
    long long _currentIndex;
}

@property (nonatomic) double trackedValue;
@property (nonatomic) BOOL isAccumulating;

- (id)init;
- (void)addValue:(double)a0;
- (double)speed;
- (void).cxx_destruct;

@end
