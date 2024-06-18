@class NSData, NSNumber;

@interface MTROperationalCredentialsClusterCertificateChainResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *certificate;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
