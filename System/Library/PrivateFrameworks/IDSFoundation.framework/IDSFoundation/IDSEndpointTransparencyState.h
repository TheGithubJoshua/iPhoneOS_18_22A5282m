@class NSData;

@interface IDSEndpointTransparencyState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *pushToken;
@property (readonly, nonatomic) long long verificationState;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPushToken:(id)a0 verificationState:(long long)a1;
- (BOOL)isEqualToEndpointTransparencyState:(id)a0;

@end
