@interface _CLVertex : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;

- (id)initWithCoder:(id)a0;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (double)getDistanceFrom:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)initWithClientCoordinate:(struct { double x0; double x1; })a0;

@end
