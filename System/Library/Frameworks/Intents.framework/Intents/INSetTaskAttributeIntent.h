@class INTask, INContactEventTrigger, INSpatialEventTrigger, INTemporalEventTrigger, INSpeakableString, NSString;

@interface INSetTaskAttributeIntent : INIntent <INSetTaskAttributeIntentExport>

@property (readonly, copy, nonatomic) INTask *targetTask;
@property (readonly, copy, nonatomic) INSpeakableString *taskTitle;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long priority;
@property (readonly, copy, nonatomic) INSpatialEventTrigger *spatialEventTrigger;
@property (readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
@property (copy, nonatomic) INContactEventTrigger *contactEventTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dictionaryRepresentation;
- (void)setPriority:(long long)a0;
- (id)domain;
- (void)setStatus:(long long)a0;
- (void)_setMetadata:(id)a0;
- (void)setDomain:(id)a0;
- (id)_metadata;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithTargetTask:(id)a0 status:(long long)a1 spatialEventTrigger:(id)a2 temporalEventTrigger:(id)a3;
- (id)initWithTargetTask:(id)a0 taskTitle:(id)a1 status:(long long)a2 priority:(long long)a3 spatialEventTrigger:(id)a4 temporalEventTrigger:(id)a5;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setSpatialEventTrigger:(id)a0;
- (void)setTargetTask:(id)a0;
- (void)setTaskTitle:(id)a0;
- (void)setTemporalEventTrigger:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
