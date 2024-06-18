@class NSNumber;

@interface HMDCompositeNumberSetting : HMDCompositeSetting <HMDCompositeSettingsNumberValueProviding>

@property (readonly, copy) NSNumber *numberValue;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithValue:(id)a0 readVersion:(id)a1 writeVersion:(id)a2;
- (BOOL)isEqualValue:(id)a0;

@end
