@class NSData, NSString;

@interface CNUICoreApplicationAuthorizationItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CNUICoreApplicationAuthorizationItem *snapshot;
@property (readonly, nonatomic) NSData *icon;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) long long deviceType;
@property (nonatomic) long long authorization;
@property (readonly, nonatomic) BOOL hasChanges;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIcon:(id)a0 name:(id)a1 bundleIdentifier:(id)a2 deviceType:(long long)a3 authorization:(long long)a4;
- (id)initWithIcon:(id)a0 name:(id)a1 bundleIdentifier:(id)a2 deviceType:(long long)a3 authorization:(long long)a4 shouldTakeSnapshot:(BOOL)a5;
- (id)itemBySettingIcon:(id)a0;

@end