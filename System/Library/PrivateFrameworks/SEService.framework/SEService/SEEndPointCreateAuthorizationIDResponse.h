@class NSData, NSNumber;

@interface SEEndPointCreateAuthorizationIDResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *authorizationID;
@property (retain, nonatomic) NSNumber *authorizationInterval;
@property (retain, nonatomic) NSNumber *authorizationCount;

+ (id)withAuthorizationID:(id)a0 authorizationInterval:(double)a1 authorizationCount:(unsigned long long)a2;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
