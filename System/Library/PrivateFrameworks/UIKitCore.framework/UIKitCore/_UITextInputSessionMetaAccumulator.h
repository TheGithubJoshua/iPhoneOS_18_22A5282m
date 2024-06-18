@class NSArray;

@interface _UITextInputSessionMetaAccumulator : _UITextInputSessionAccumulator {
    NSArray *_accumulators;
    long long _lastSuccessfulIndex;
    unsigned long long _actionCountWithoutIncrease;
}

+ (id)accumulatorWithName:(id)a0 accumulators:(id)a1;

- (void)increaseWithActions:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;

@end
