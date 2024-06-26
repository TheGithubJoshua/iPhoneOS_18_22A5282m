@class NSMutableDictionary;

@interface TIHistogram : NSObject {
    NSMutableDictionary *_counts;
    long long _totalCount;
}

- (id)init;
- (void).cxx_destruct;
- (long long)totalCount;
- (void)addNumber:(id)a0;
- (long long)countForNumber:(id)a0;
- (id)descriptionOfCumulativeDistributionFunction;
- (void)enumerateCumulativeDistributionFunctionUsingBlock:(id /* block */)a0;
- (void)enumerateNumbersUsingBlock:(id /* block */)a0;
- (id)sortedNumbers;

@end
