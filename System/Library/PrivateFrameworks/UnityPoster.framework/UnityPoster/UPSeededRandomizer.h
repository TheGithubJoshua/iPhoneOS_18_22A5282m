@interface UPSeededRandomizer : NSObject {
    unsigned long long _nextValue;
    unsigned long long _seedValue;
}

+ (id)randomizerWithSeedValue:(unsigned long long)a0;

- (unsigned long long)unsignedLongValue;
- (BOOL)boolValue;
- (void)reset;
- (BOOL)boolValueWithChance:(double)a0;
- (double)floatValueBetweenFirstValue:(double)a0 secondValue:(double)a1;
- (double)fractionValue;
- (struct CGPoint { double x0; double x1; })pointBetweenFirstPoint:(struct CGPoint { double x0; double x1; })a0 secondPoint:(struct CGPoint { double x0; double x1; })a1;

@end
