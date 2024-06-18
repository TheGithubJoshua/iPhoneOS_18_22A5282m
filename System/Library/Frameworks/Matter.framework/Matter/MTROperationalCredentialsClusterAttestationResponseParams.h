@class NSData, NSNumber;

@interface MTROperationalCredentialsClusterAttestationResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *signature;
@property (copy, nonatomic) NSData *attestationElements;
@property (copy, nonatomic) NSData *attestationSignature;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
