@interface PKPaymentHardwareStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL hasSecureElement;
@property (nonatomic) BOOL hasRemoteDevices;
@property (nonatomic, getter=isInFailForward) BOOL inFailForward;
@property (nonatomic, getter=isPrimaryUser) BOOL primaryUser;
@property (nonatomic) BOOL canMakeRemotePayments;
@property (nonatomic) BOOL canDecryptBAAEncryptedData;
@property (readonly, nonatomic, getter=_isDemoModeActive) BOOL _isDemoModeActive;
@property (nonatomic) BOOL isSRD;
@property (readonly, nonatomic) BOOL canMakePayments;
@property (readonly, nonatomic) BOOL canMakeLocalPayments;
@property (readonly, nonatomic) BOOL canMakeVirtualCardPayments;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_canMakeLocalPaymentsNeedingSecureIntent:(BOOL)a0;

@end
