@class NSUUID, NSString, NSArray, HMImmutableSettingValue;

@interface HMAccessorySettingsUpdateRequestMessagePayload : NSObject <HMFLogging, HMFObject, HMMessageEncoding>

@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly, copy) NSString *keyPath;
@property (readonly) HMImmutableSettingValue *settingValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPayload:(id)a0;
- (id)initWithAccessoryUUID:(id)a0 keyPath:(id)a1 settingValue:(id)a2;
- (id)payloadCopy;

@end