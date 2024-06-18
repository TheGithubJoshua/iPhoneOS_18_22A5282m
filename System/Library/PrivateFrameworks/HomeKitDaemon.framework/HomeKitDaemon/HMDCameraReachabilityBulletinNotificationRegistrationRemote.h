@class HMDCameraReachabilityBulletinNotificationRegistration, HMDBulletinNotificationRegistrationSource;

@interface HMDCameraReachabilityBulletinNotificationRegistrationRemote : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HMDCameraReachabilityBulletinNotificationRegistration *registration;
@property (readonly, copy) HMDBulletinNotificationRegistrationSource *source;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (id)initWithCameraReachabilityBulletinNotificationRegistration:(id)a0 source:(id)a1;

@end
