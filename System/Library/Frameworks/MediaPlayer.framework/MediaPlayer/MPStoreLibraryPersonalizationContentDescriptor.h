@class MPModelObject;

@interface MPStoreLibraryPersonalizationContentDescriptor : NSObject

@property (readonly, nonatomic) MPModelObject *model;
@property (readonly, nonatomic) long long personalizationStyle;

+ (id)_lightweightPersonalizationPropertiesForPlaybackPosition;
+ (id)_lightweightPersonalizationPropertiesForLyrics;
+ (id)_lightweightPersonalizationPropertiesForStoreAsset;
+ (id)requiredLightweightPersonalizationPropertiesForModelClass:(Class)a0 requestedProperties:(id)a1;
+ (id)lightweightPersonalizationPropertiesForModelClass:(Class)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithModel:(id)a0 personalizationStyle:(long long)a1;

@end
