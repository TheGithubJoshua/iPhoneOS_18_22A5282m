@class NSUUID;

@interface SiriLongPressButtonContext : SiriContext

@property (nonatomic) double buttonDownTimestamp;
@property (nonatomic) long long longPressBehavior;
@property (retain, nonatomic) NSUUID *activationEventInstrumentationIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
