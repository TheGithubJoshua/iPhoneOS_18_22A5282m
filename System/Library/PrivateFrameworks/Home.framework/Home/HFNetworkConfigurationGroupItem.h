@class NSSet, NSString, HMAccessoryNetworkProtectionGroup;
@protocol HFHomeKitObject, HFCharacteristicValueSource;

@interface HFNetworkConfigurationGroupItem : HFItemGroupItem <HFHomeKitItemProtocol>

@property (readonly, nonatomic) HMAccessoryNetworkProtectionGroup *group;
@property (readonly, nonatomic) NSSet *profiles;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)copyWithValueSource:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithGroup:(id)a0 valueSource:(id)a1;

@end
