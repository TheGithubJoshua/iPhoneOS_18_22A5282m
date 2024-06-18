@class NSError, NSString;

@interface CURangingMeasurement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double horizontalAngle;
@property (nonatomic) double horizontalError;
@property (nonatomic) double verticalAngle;
@property (nonatomic) double verticalError;
@property (nonatomic) double distanceMeters;
@property (nonatomic) double distanceError;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double ptsScore;
@property (nonatomic) unsigned long long timestampTicks;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end