@class NSMapTable;

@interface _HKFactorization : NSObject <NSCopying, NSSecureCoding> {
    NSMapTable *_factors;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)factorizationWithFactor:(id)a0 exponent:(long long)a1;
+ (id)factorizationWithFactorsAndExponents:(id)a0;
+ (id)factorization;
+ (id)factorizationFromString:(id)a0 factorGrammar:(id)a1;

- (id)unitString;
- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)factorCount;
- (id)anyFactor;
- (void)_enumerateFactorsWithHandler:(id /* block */)a0;
- (id)factorizationByMultiplying:(id)a0;
- (long long)_exponentForFactor:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (long long)exponentForFactor:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)reciprocal;
- (void)_multiplyByFactorization:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_raiseToExponent:(long long)a0;
- (id)factorizationByDividing:(id)a0;
- (id)factorizationByRaisingToExponent:(long long)a0;
- (void)enumerateFactorsWithHandler:(id /* block */)a0;
- (void)_multiplyByFactor:(id)a0 exponent:(long long)a1;

@end
