@interface NEIKEv2AuthenticationProtocol : NSObject <NSCopying> {
    unsigned long long _method;
    unsigned long long _digitalSignatureAlgorithm;
}

@property (readonly, nonatomic) unsigned long long method;
@property (readonly, nonatomic) BOOL isCertificate;
@property (readonly, nonatomic) BOOL isDigitalSignature;
@property (readonly, nonatomic) unsigned long long digitalSignatureAlgorithm;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMethod:(unsigned long long)a0;
- (id)initWithDigitalSignature:(unsigned long long)a0;

@end
