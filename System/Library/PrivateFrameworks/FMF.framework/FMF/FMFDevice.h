@class NSString;

@interface FMFDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) BOOL isActiveDevice;
@property (nonatomic) BOOL isThisDevice;
@property (nonatomic) BOOL isCompanionDevice;
@property (nonatomic) BOOL isAutoMeCapable;
@property (copy, nonatomic) NSString *idsDeviceId;

+ (id)deviceWithId:(id)a0 name:(id)a1 idsDeviceId:(id)a2 isActive:(BOOL)a3 isThisDevice:(BOOL)a4 isCompanionDevice:(BOOL)a5 isAutoMeCapable:(BOOL)a6;

- (id)initWithCoder:(id)a0;
- (void)updateIsActive:(BOOL)a0 isThisDevice:(BOOL)a1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
