@interface _CLLSLLocationCoordinate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

- (id)initWithCoder:(id)a0;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
