@class NSSet, NSNumber, NSString;
@protocol HFCharacteristicValueSource;

@interface HFAccessoryProfileGroupItem : HFItemGroupItem <HFAccessoryProfileVendor, NSCopying>

@property (readonly, nonatomic) NSSet *profiles;
@property (readonly, copy, nonatomic) NSNumber *groupIdentifier;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *services;

- (id)init;
- (id)copyWithValueSource:(id)a0;
- (id)accessories;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_buildProfileItems;
- (id)initWithProfiles:(id)a0 groupIdentifier:(id)a1 valueSource:(id)a2;

@end
