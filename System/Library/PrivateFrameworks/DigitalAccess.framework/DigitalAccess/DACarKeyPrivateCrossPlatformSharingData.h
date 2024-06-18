@class NSString;

@interface DACarKeyPrivateCrossPlatformSharingData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *vehicleEnteredPasscode;
@property (readonly, nonatomic) NSString *pairedEntityIdentifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVehicleEnteredPasscode:(id)a0 pairedEntityIdentifier:(id)a1;

@end
