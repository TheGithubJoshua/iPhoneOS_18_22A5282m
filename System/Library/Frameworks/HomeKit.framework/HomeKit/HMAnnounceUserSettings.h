@interface HMAnnounceUserSettings : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long deviceNotificationMode;

+ (id)shortDescription;

- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (unsigned long long)hash;
- (id)privateDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithDeviceNotificationMode:(unsigned long long)a0;

@end
