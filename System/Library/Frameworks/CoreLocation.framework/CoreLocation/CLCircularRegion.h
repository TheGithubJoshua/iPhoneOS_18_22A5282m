@interface CLCircularRegion : CLRegion

@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } geoCenter;
@property (readonly, nonatomic) double geoRadius;
@property (nonatomic) int geoReferenceFrame;
@property (readonly, nonatomic) BOOL isLowPower;
@property (readonly, nonatomic) double desiredAccuracy;
@property (readonly, nonatomic) BOOL allowMonitoringWhileNearby;
@property (readonly) struct CLLocationCoordinate2D { double x0; double x1; } center;
@property (readonly) double radius;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)containsCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 identifier:(id)a2 nearbyAllowed:(BOOL)a3;
- (int)referenceFrame;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 referenceFrame:(int)a2 allowMonitoringWhenNearby:(BOOL)a3 lowPower:(BOOL)a4 identifier:(id)a5 onBehalfOfBundleId:(id)a6 notifyOnEntry:(BOOL)a7 notifyOnExit:(BOOL)a8 conservativeEntry:(BOOL)a9 emergency:(BOOL)a10 deviceId:(id)a11 handoffTag:(id)a12;
- (unsigned long long)hash;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 referenceFrame:(int)a2 allowMonitoringWhenNearby:(BOOL)a3 lowPower:(BOOL)a4 identifier:(id)a5 onBehalfOfBundleId:(id)a6 notifyOnEntry:(BOOL)a7 notifyOnExit:(BOOL)a8 conservativeEntry:(BOOL)a9 emergency:(BOOL)a10;
- (id)initLegacyObjectWithCoder:(id)a0;
- (void)setReferenceFrame:(int)a0;
- (id)initNearbyAllowedWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 identifier:(id)a2;
- (id)initForLowPowerWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 identifier:(id)a2;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 identifier:(id)a2 onBehalfOfBundleId:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 identifier:(id)a2;

@end
