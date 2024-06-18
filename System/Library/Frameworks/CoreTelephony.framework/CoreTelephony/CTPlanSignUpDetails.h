@class NSString;

@interface CTPlanSignUpDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *signUpUrl;
@property (retain, nonatomic) NSString *signUpUrlType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithSignUpUrl:(id)a0 signUpUrlType:(id)a1;

@end
