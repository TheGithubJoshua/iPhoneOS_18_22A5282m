@class NSArray, NSString;

@interface AKConsentedApplication : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *scopes;
@property (copy, nonatomic) NSString *clientID;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSString *transferState;
@property (retain, nonatomic) NSString *primaryClientID;
@property (retain, nonatomic) NSString *origin;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithResponseInfo:(id)a0;

@end
