@class NSHashTable;

@interface TabOverviewInterpolatedValue : NSObject {
    NSHashTable *_dependants;
    NSHashTable *_dependencies;
    double _instantaneousTargetValue;
    double _lastRenderedValue;
    double _value;
    double _targetValue;
    double _epsilon;
    double _decelerationFactor;
}

- (void).cxx_destruct;
- (id)description;

@end
