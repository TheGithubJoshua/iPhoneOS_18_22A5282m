@class NSUUID, HKDevice;

@interface HKSeriesBuilderConfiguration : HKTaskConfiguration

@property (readonly, copy, nonatomic) HKDevice *device;
@property (readonly, copy, nonatomic) NSUUID *workoutBuilderID;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDevice:(id)a0 workoutBuilderID:(id)a1;

@end
