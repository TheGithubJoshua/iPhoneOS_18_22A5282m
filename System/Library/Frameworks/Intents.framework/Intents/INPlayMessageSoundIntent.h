@class NSString;

@interface INPlayMessageSoundIntent : INIntent <INPlayMessageSoundIntentExport>

@property (readonly, nonatomic) long long soundType;
@property (readonly, copy, nonatomic) NSString *messageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dictionaryRepresentation;
- (id)domain;
- (void)setSoundType:(long long)a0;
- (void)_setMetadata:(id)a0;
- (void)setDomain:(id)a0;
- (id)_metadata;
- (void)setMessageIdentifier:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithSoundType:(long long)a0 messageIdentifier:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
