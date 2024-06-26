@class NSData;

@interface SEEndPointSignatureResponse : NSObject <NSSecureCoding, SESEndPointSignature>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *signedData;
@property (retain, nonatomic) NSData *signature;

+ (id)signature:(id)a0;
+ (id)responseWithSignedData:(id)a0 signature:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
