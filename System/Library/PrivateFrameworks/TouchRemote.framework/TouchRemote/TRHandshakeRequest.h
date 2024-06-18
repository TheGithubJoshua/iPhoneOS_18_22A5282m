@interface TRHandshakeRequest : TRRequestMessage

@property (nonatomic) long long protocolVersion;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;

@end
