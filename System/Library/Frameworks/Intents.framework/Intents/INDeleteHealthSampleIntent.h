@class NSArray, NSString;

@interface INDeleteHealthSampleIntent : INIntent <INDeleteHealthSampleIntentExport>

@property (readonly, copy, nonatomic) NSArray *sampleUuids;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dictionaryRepresentation;
- (id)domain;
- (void)_setMetadata:(id)a0;
- (void)setDomain:(id)a0;
- (id)_metadata;
- (void)setSampleUuids:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithSampleUuids:(id)a0;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
