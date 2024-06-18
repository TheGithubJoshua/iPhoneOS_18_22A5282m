@class NSDictionary;

@interface _UIPropertyBasedAppearance : _UIAppearance

@property (retain, nonatomic, setter=_setPropertiesToMatch:) NSDictionary *_propertiesToMatch;

+ (id)_appearanceMatchingProperties:(id)a0 forClass:(Class)a1 withContainerList:(id)a2;
+ (id)_appearanceObjectKeyForProperties:(id)a0;

- (BOOL)_isRecordingInvocations;
- (BOOL)_isValidAppearanceForCustomizableObject:(id)a0;
- (void)dealloc;

@end
