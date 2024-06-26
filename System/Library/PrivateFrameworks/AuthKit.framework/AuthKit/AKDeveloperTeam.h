@class NSString, NSDictionary;

@interface AKDeveloperTeam : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *teamID;
@property (copy, nonatomic) NSString *privateEmail;
@property (copy, nonatomic) NSDictionary *apps;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithResponseInfo:(id)a0;

@end
