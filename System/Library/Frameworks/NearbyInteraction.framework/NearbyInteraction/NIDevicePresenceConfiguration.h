@class NIRegionPredicate;

@interface NIDevicePresenceConfiguration : NIConfiguration

@property unsigned long long monitoringOption;
@property unsigned long long allowedDevices;
@property (readonly) NIRegionPredicate *innerBoundary;
@property (readonly) NIRegionPredicate *outerBoundary;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_validateRegionIsPreset:(id)a0;
+ (id)_NIDevicePresenceMonitoringOptionToString:(unsigned long long)a0;
+ (float)_radiusFromDevicePresencePreset:(long long)a0;
+ (BOOL)_validateRegionPredicates:(id)a0 outer:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)initWithInnerBoundary:(id)a0 outerBoundary:(id)a1 error:(id *)a2;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithInnerBoundary:(id)a0 outerBoundary:(id)a1 monitoringOption:(unsigned long long)a2 allowedDevices:(unsigned long long)a3 error:(id *)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
