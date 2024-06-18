@interface UNNotificationIcon : NSObject <NSCopying, NSSecureCoding> {
    id _iconInfo;
    long long _iconInfoType;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)iconNamed:(id)a0;
+ (id)iconForApplicationIdentifier:(id)a0;
+ (id)iconForSystemImageNamed:(id)a0;
+ (id)iconAtPath:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)_initWithIconInfo:(id)a0 type:(long long)a1;
- (id)systemImageName;
- (id)path;
- (unsigned long long)hash;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)applicationIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
