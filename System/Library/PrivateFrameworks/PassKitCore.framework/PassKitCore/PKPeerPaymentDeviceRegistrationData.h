@class NSString, NSDictionary, NSData;

@interface PKPeerPaymentDeviceRegistrationData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *authorizationHeader;
@property (copy, nonatomic) NSString *signedAuthToken;
@property (copy, nonatomic) NSDictionary *enrollmentData;
@property (copy, nonatomic) NSData *signedEnrollmentDataSignature;
@property (nonatomic) BOOL devSigned;
@property (copy, nonatomic) NSString *companionSerialNumber;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToPeerPaymentDeviceRegistrationData:(id)a0;

@end
