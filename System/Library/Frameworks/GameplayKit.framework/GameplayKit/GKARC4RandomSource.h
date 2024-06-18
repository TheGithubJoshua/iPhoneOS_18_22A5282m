@class NSData;

@interface GKARC4RandomSource : GKRandomSource {
    struct Arc4State { unsigned int x0; unsigned int x1; char *x2; } *_state;
    NSData *_seed;
}

@property (copy, nonatomic) NSData *seed;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithSeed:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (long long)nextInt;
- (void)dropValuesWithCount:(unsigned long long)a0;
- (unsigned long long)nextBits:(int)a0;
- (BOOL)nextBool;
- (float)nextUniform;

@end
