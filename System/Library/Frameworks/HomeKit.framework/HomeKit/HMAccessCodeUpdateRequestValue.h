@class HMAccessoryAccessCodeValue, NSUUID, NSString, NSArray, HMAccessCodeValue;

@interface HMAccessCodeUpdateRequestValue : NSObject <HMFObject, HMAccessCodeModificationRequestValue, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HMAccessoryAccessCodeValue *accessoryAccessCodeValue;
@property (readonly, copy) HMAccessCodeValue *updatedAccessCodeValue;
@property (copy) NSUUID *userUUID;
@property (copy) NSString *guestName;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSUUID *accessoryUUID;

+ (id)shortDescription;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccessoryAccessCodeValue:(id)a0 updatedAccessCodeValue:(id)a1;

@end