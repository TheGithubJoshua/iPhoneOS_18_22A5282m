@class NSString, NSNumber;

@interface HMDAccessoryNetworkProtectionGroupModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSNumber *category;
@property (copy, nonatomic) NSNumber *targetProtectionMode;

+ (id)shortDescription;
+ (id)properties;
+ (id)modelIDForHome:(id)a0 manufacturer:(id)a1 category:(id)a2;
+ (id)modelNamespace;

- (id)shortDescription;
- (id)privateDescription;
- (id)description;
- (id)attributeDescriptions;

@end
