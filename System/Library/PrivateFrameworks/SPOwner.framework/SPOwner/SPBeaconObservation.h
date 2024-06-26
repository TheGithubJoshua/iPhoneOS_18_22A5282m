@class NSUUID, SPObservationLocation, NSDate;

@interface SPBeaconObservation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *beaconIdentifier;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) SPObservationLocation *location;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBeaconIdentifier:(id)a0 type:(long long)a1 date:(id)a2 location:(id)a3;

@end
