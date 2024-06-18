@class NSSet, HFItem, NSString, HMHome;
@protocol HFServiceLikeItem, HFHomeKitObject, HFCharacteristicValueSource, HFAccessoryRepresentable;

@interface HFServiceActionItem : HFItem <HFServiceLikeItem, HFAccessoryRepresentableItem>

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *containingItem;
@property (retain, nonatomic) NSSet *actions;
@property (retain, nonatomic) NSSet *actionBuilders;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *services;
@property (readonly, nonatomic) id<HFAccessoryRepresentable> accessoryRepresentableObject;

+ (id)_percentFormatter;
+ (id)itemWithAccessoryRepresentableObject:(id)a0 valueSource:(id)a1;

- (void)addAction:(id)a0;
- (id)init;
- (id)copyWithValueSource:(id)a0;
- (id)accessories;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)namingComponentForHomeKitObject;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)serviceActionItemForChildServiceItem:(id)a0;
- (id)_characteristicTypeToTargetValuesMap;
- (void)_getDesiredItemDescription:(id *)a0 controlDescription:(id *)a1 withSourceItemResults:(id)a2;
- (void)addActionBuilder:(id)a0;
- (id)initWithHome:(id)a0 containingItem:(id)a1;

@end