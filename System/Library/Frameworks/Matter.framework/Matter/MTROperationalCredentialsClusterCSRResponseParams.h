@class NSData, NSNumber;

@interface MTROperationalCredentialsClusterCSRResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *nocsrElements;
@property (copy, nonatomic) NSData *attestationSignature;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
