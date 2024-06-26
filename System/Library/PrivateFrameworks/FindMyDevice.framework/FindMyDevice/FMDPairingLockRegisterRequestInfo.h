@class NSString;

@interface FMDPairingLockRegisterRequestInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSString *accessoryType;
@property (retain, nonatomic) NSString *lostModePublicKey;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
