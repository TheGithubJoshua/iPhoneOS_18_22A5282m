@interface GEORouteRestrictionZoneID : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) long long restrictionType;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithGeoRestrictedZoneId:(id)a0;

@end
