@class NSDate;

@interface CLVehicleSpeed : NSObject <NSCopying, NSSecureCoding> {
    id _internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double speed;
@property (readonly, nonatomic) NSDate *timestamp;

- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithClientVehicleSpeed:(struct { double x0; double x1; double x2; double x3; })a0;

@end
