@interface GKLinearCongruentialRandomSource : GKRandomSource {
    unsigned long long _seed;
}

@property (nonatomic) unsigned long long seed;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithSeed:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (long long)nextInt;
- (unsigned long long)nextBits:(int)a0;
- (BOOL)nextBool;
- (float)nextUniform;

@end
