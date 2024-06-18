@class NSData, NSNumber;

@interface MTROperationalCredentialsClusterAttestationRequestParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *attestationNonce;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
