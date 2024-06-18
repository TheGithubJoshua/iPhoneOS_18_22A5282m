@class CKContainerID, NSSet;

@interface CKDContainerPrivacySettings : NSObject

@property (copy, nonatomic) CKContainerID *containerID;
@property (copy, nonatomic) NSSet *applicationBundleIDs;
@property (nonatomic) long long discoverable;

- (unsigned long long)hash;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
