@class NSString, NSDate;

@interface HKClinicalSharingStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *firstSharedDate;
@property (readonly, copy, nonatomic) NSDate *lastSharedDate;
@property (readonly, nonatomic) long long featureStatus;
@property (readonly, nonatomic) long long userStatus;
@property (readonly, nonatomic) long long multiDeviceStatus;
@property (readonly, copy, nonatomic) NSString *primaryDeviceName;

+ (long long)clinicalSharingFeatureStatusWithAccountState:(long long)a0 gatewayFeatureStatus:(long long)a1;
+ (id)unknownStatus;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFirstSharedDate:(id)a0 lastSharedDate:(id)a1 featureStatus:(long long)a2 userStatus:(long long)a3 multiDeviceStatus:(long long)a4 primaryDeviceName:(id)a5;

@end
