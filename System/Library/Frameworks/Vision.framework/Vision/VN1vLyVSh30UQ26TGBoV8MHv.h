@class NSArray, NSDictionary;

@interface VN1vLyVSh30UQ26TGBoV8MHv : VNObservation {
    NSDictionary *_adjustments;
}

@property (readonly, copy) NSArray *adjustmentKeys;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)adjustmentValuesForKey:(id)a0;
- (BOOL)hasAdjustmentForKey:(id)a0;
- (id)initWithOriginatingRequestSpecifier:(id)a0 adjustments:(id)a1;
- (id)vn_cloneObject;

@end
