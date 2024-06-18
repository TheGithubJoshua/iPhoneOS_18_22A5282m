@interface PrivacyProxyTokenInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long cachedTokens;
@property (nonatomic) unsigned long long agentTokens;
@property (nonatomic) unsigned long long agentLowWaterMark;
@property (nonatomic) unsigned long long cacheLowWaterMark;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
