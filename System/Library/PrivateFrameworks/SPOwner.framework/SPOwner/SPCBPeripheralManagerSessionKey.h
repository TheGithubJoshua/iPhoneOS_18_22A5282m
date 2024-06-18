@class NSUUID, NSString;

@interface SPCBPeripheralManagerSessionKey : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *userIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleId;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUserIdentifier:(id)a0 bundleIdentifier:(id)a1;

@end
