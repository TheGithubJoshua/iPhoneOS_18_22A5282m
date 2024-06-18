@class NSString;

@interface SiriTVLongPressButtonContext : SiriLongPressButtonContext

@property (nonatomic) BOOL isSourcePTTEligible;
@property (copy, nonatomic) NSString *activeDeviceBluetoothIdentifier;
@property (nonatomic) unsigned long long remoteType;
@property (nonatomic) BOOL isListening;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isPTTEligible;
- (void)setSourcePTTEligibility:(BOOL)a0;
- (void).cxx_destruct;
- (id)description;

@end
