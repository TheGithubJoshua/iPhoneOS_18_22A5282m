@class NSMutableSet, HMAccessoryNetworkProtectionGroup;

@interface HUNetworkProtectionModeOptionItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *networkProtectionModeOptionItems;
@property (readonly, copy, nonatomic) HMAccessoryNetworkProtectionGroup *group;

- (id)items;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGroup:(id)a0;
- (id)reloadItems;

@end
