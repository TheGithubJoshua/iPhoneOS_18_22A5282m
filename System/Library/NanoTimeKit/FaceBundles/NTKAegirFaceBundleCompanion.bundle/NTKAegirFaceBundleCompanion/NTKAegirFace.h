@interface NTKAegirFace : NTKFace

+ (id)_complicationSlotDescriptors;
+ (BOOL)isRestrictedForDevice:(id)a0;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)a0;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)a0 forDevice:(id)a1;
+ (id)_orderedComplicationSlots;

- (id)_complicationSlotDescriptors;
- (id)_orderedComplicationSlots;
- (id)faceSharingName;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_faceDescription;
- (id)_faceDescriptionKey;
- (unsigned long long)_indexOfOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (id)_localizedNameForComplicationSlot:(id)a0;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_optionAtIndex:(unsigned long long)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (Class)_optionClassForCustomEditMode:(long long)a0;
- (BOOL)_snapshotContext:(id)a0 isStaleRelativeToContext:(id)a1;

@end
