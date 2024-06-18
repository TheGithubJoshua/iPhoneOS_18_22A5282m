@class NSString;

@interface TKTokenID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *stringRepresentation;
@property (readonly) NSString *classID;
@property (readonly) NSString *instanceID;

+ (id)encodedCertificateID:(id)a0;
+ (id)encodedKeyID:(id)a0;

- (id)initWithTokenID:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)decodedObjectID:(id)a0 isCertificate:(BOOL *)a1 error:(id *)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithClassID:(id)a0 instanceID:(id)a1;
- (id)decodedKeyID:(id)a0 error:(id *)a1;
- (id)decodedCertificateID:(id)a0 error:(id *)a1;

@end
