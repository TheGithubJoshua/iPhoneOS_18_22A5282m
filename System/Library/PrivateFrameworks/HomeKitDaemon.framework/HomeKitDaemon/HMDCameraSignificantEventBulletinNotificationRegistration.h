@class NSUUID;

@interface HMDCameraSignificantEventBulletinNotificationRegistration : HMDBulletinNotificationRegistration <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *cameraIdentifier;
@property (readonly) unsigned long long notificationModes;
@property (readonly) unsigned long long significantEventTypes;
@property (readonly) unsigned long long personFamiliarityOptions;

+ (id)type;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)predicate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (id)initWithCameraIdentifier:(id)a0 notificationModes:(unsigned long long)a1 significantEventTypes:(unsigned long long)a2 personFamiliarityOptions:(unsigned long long)a3 conditions:(id)a4;
- (id)serializedRegistrationForRemoteMessage;

@end
