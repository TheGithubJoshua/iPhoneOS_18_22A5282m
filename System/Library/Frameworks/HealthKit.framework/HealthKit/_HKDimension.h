@class _HKFactorization;

@interface _HKDimension : NSObject {
    _HKFactorization *_reduction;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reductionLock;
}

+ (id)dimensionFromString:(id)a0;

- (id)init;
- (id)_baseDimensions;
- (void).cxx_destruct;
- (id)description;
- (id)reduction;

@end
