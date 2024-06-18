@class NSMutableSet;

@interface WPZoneTrackingRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned char clientType;
@property struct { long long screenOnInterval; long long screenOffInterval; long long window; } scanningRates;
@property BOOL scanWhenScreenOff;
@property (retain) NSMutableSet *zones;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
