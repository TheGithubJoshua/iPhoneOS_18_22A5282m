@class NSNumber, NSDate;

@interface CTCATransmissionProgress : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *startedAt;
@property (retain, nonatomic) NSNumber *estimatedDurationSeconds;
@property (retain, nonatomic) NSNumber *progressPercents;
@property (nonatomic) long long payloadType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
