@class NSData;

@interface FMDIdentitySigningRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *dataToSign;
@property (nonatomic) BOOL useSCRT;
@property (nonatomic) long long validityInMinutes;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
