@class NSString;

@interface UNNotificationActionIcon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *imageName;
@property (nonatomic, getter=isSystemIcon) BOOL systemIcon;

+ (id)iconWithTemplateImageName:(id)a0;
+ (id)_iconWithImageName:(id)a0 systemIcon:(BOOL)a1;
+ (id)iconWithSystemImageName:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)_description;
- (unsigned long long)hash;
- (id)_initWithImageName:(id)a0 systemIcon:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
