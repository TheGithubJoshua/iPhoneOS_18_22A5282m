@class NSNumber, CTCATransmissionProgress;

@interface CTCAConnectionState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long connectionStatus;
@property (nonatomic) long long syncStatus;
@property (nonatomic) long long registrationStatus;
@property (nonatomic) long long congestionStatus;
@property (retain, nonatomic) NSNumber *rssi;
@property (retain, nonatomic) CTCATransmissionProgress *currentTransmissionProgress;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
