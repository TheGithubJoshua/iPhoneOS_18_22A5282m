@class NSString;

@interface CRKIdentitySharingRequestCertificateRequest : CATTaskRequest

@property (retain, nonatomic) NSString *recipient;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
