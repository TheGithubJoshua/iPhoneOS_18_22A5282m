@class NSString;

@interface FMDPairingLockRegisterResponseInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSString *pairingToken;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
