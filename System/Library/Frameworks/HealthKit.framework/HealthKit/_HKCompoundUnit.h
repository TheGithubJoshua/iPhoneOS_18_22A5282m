@class _HKFactorization, _HKDimension;

@interface _HKCompoundUnit : HKUnit {
    _HKFactorization *_baseUnits;
    _HKDimension *_dimension;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dimensionLock;
}

+ (BOOL)supportsSecureCoding;
+ (id)unitWithBaseUnits:(id)a0;

- (id)unitString;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)_baseUnits;
- (void)encodeWithCoder:(id)a0;
- (id)dimension;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithBaseUnits:(id)a0;
- (id)_computeBaseUnitReductionAndProportionalSize:(double *)a0 withCycleSet:(id)a1;

@end
