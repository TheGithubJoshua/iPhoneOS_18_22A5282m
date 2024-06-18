@class NSString, SBTraitsExternalDisplayRolesAndDefaultPoliciesProvider, SBFTraitsParticipant, SBFTraitsArbitrationInputs;

@interface SBTraitsExternalDisplayPipelineManager : SBTraitsPipelineManager <SBFTraitsArbiterInputsDataSource, SBFTraitsParticipantDelegate> {
    SBFTraitsArbitrationInputs *_inputs;
    SBTraitsExternalDisplayRolesAndDefaultPoliciesProvider *_rolesAndDefaultPoliciesProvider;
    SBFTraitsParticipant *_activeOrientationParticipant;
}

@property (readonly, nonatomic) SBFTraitsArbitrationInputs *inputs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didChangeSettingsForParticipant:(id)a0 context:(id)a1;
- (id)init;
- (void)updatePreferencesForParticipant:(id)a0 updater:(id)a1;
- (void)setupDefaultPipelineForArbiter:(id)a0;
- (void).cxx_destruct;
- (id)orientationStageRoles;
- (id)zOrderStageRoles;

@end
