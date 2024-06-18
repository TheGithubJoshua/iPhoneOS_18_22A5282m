@class FUFlightStep, NSString;

@interface FUFlightLeg : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long status;
@property double duration;
@property (readonly) double currentProgress;
@property (retain) FUFlightStep *departure;
@property (retain) FUFlightStep *arrival;
@property (retain) NSString *baggageClaim;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
