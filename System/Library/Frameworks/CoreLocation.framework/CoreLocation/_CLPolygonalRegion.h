@class NSArray;

@interface _CLPolygonalRegion : CLRegion

@property (readonly, copy, nonatomic) NSArray *vertices;
@property int geoReferenceFrame;
@property (readonly, nonatomic) BOOL allowMonitoringWhileNearby;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)containsCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)containsCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 withDistanceToBorder:(double *)a1;
- (id)initNearbyAllowedWithVertices:(id)a0 identifier:(id)a1;
- (id)initWithVertices:(id)a0 identifier:(id)a1;
- (BOOL)pointInPolygonWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 withDistanceToBorder:(double *)a1;

@end
