@class NSString, NSSet, HMAccessory, HMHome;
@protocol HFAccessoryRepresentable, HFHomeKitObject, HFCharacteristicValueSource;

@interface HFTargetControlAccessoryItem : HFItem <HFAccessoryRepresentableItem, HFServiceLikeItem, HFServiceLikeBuilderCreating>

@property (readonly, nonatomic) id<HFAccessoryRepresentable> accessoryRepresentableObject;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSSet *services;

+ (id)itemWithAccessoryRepresentableObject:(id)a0 valueSource:(id)a1;

- (id)init;
- (id)copyWithValueSource:(id)a0;
- (id)accessories;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsActions;
- (id)namingComponentForHomeKitObject;
- (id)_subclass_updateWithOptions:(id)a0;
- (BOOL)actionsMayRequireDeviceUnlock;
- (id)currentStateActionBuildersForHome:(id)a0;
- (id)iconDescriptor;
- (id)initWithAccessory:(id)a0 valueSource:(id)a1;
- (id)serviceLikeBuilderInHome:(id)a0;
- (BOOL)shouldReduceOptionItemsForNotifyingCharacteristics;

@end
