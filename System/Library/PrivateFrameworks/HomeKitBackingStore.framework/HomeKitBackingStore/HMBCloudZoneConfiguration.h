@interface HMBCloudZoneConfiguration : HMFObject <NSCopying, NSMutableCopying>

@property BOOL shouldRebuildOnManateeKeyLoss;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;

@end
