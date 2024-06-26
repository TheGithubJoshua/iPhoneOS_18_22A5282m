@class NSUUID, CLCircularRegion, CLLocation, CLSLitePlacemark, NSMutableArray;

@interface CLSLocationOfInterest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) CLCircularRegion *placemarkRegion;
@property (readonly, nonatomic) CLSLitePlacemark *placemark;
@property (readonly, nonatomic) unsigned long long businessItemMuid;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) NSMutableArray *visits;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)addVisit:(id)a0;
- (void)removeVisit:(id)a0;
- (id)initWithIdentifier:(id)a0 locationOfInterestType:(long long)a1 location:(id)a2 placemarkRegion:(id)a3 businessItemMuid:(unsigned long long)a4 radius:(double)a5;
- (double)placemarkLocationDistanceFromLocation:(id)a0;

@end
