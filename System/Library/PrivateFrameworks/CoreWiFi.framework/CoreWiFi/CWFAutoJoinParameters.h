@class CWFNetworkProfile, NSArray;

@interface CWFAutoJoinParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long trigger;
@property (nonatomic) long long mode;
@property (copy, nonatomic) CWFNetworkProfile *targetNetworkProfile;
@property (copy, nonatomic) NSArray *preferredChannels;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToAutoJoinParameters:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
