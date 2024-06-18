@class NSString, NSDictionary;

@interface SOFullProfile : SOProfile <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *extensionTeamIdentifier;
@property (retain, nonatomic) NSDictionary *extensionData;

+ (long long)screenLockedBehaviorWithString:(id)a0;
+ (long long)authMethodWithString:(id)a0;
+ (long long)profileTypeWithString:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)copyProfile;
- (void)removeURLPrefix:(id)a0;
- (id)copyProfileForClient;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProfileData:(id)a0;

@end
