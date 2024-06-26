@interface _HKBooleanFilter : _HKFilter

@property (class, readonly, nonatomic) _HKBooleanFilter *trueFilter;
@property (class, readonly, nonatomic) _HKBooleanFilter *falseFilter;

@property (readonly, nonatomic) BOOL value;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithValue:(BOOL)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)acceptsActivitySummary:(id)a0;
- (BOOL)acceptsDataObject:(id)a0;
- (long long)acceptsDataObjectWithStartTimestamp:(double)a0 endTimestamp:(double)a1 valueInCanonicalUnit:(double)a2;
- (BOOL)acceptsWorkoutActivity:(id)a0;

@end
