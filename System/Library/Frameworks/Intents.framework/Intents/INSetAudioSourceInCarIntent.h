@class NSString;

@interface INSetAudioSourceInCarIntent : INIntent <INSetAudioSourceInCarIntentExport>

@property (readonly, nonatomic) long long audioSource;
@property (readonly, nonatomic) long long relativeAudioSourceReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dictionaryRepresentation;
- (id)domain;
- (void)_setMetadata:(id)a0;
- (void)setDomain:(id)a0;
- (id)_metadata;
- (long long)_intentCategory;
- (void)setAudioSource:(long long)a0;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithAudioSource:(long long)a0 relativeAudioSourceReference:(long long)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setRelativeAudioSourceReference:(long long)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
