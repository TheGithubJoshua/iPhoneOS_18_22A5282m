@class DNDModeConfigurationService;

@interface WFFocusConfigurationLinkAction : WFLinkAction

@property (retain, nonatomic) DNDModeConfigurationService *configurationService;

+ (id)genericRuntimeError;

- (id)localizedAppName;
- (id)name;
- (void).cxx_destruct;
- (id)parameterDefinitions;
- (void)clearFocusConfiguration;
- (id)contentDestinationWithError:(id *)a0;
- (void)createAndCommitFocusConfigurationToDND;
- (id)currentFocusConfiguration;
- (id)descriptionSummary;
- (void)disableFocusConfiguration;
- (id)dndApplicationIdentifier;
- (void)enableFocusConfiguration;
- (BOOL)isRunningInsideFocusConfigurationExtension;
- (id)localizedSubcategoryForCategory:(id)a0;
- (unsigned long long)parameterCollapsingBehavior;
- (id)parameterSummary;
- (BOOL)requiresRemoteExecution;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)selectedFocusIdentifier;
- (void)setFocusConfigurationEnablementStatus:(BOOL)a0;
- (BOOL)shouldAskForValuesWhileProcessingParameterStates;
- (BOOL)shouldStripSensitiveContentFromParameterSerialization;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)toggleFocusConfiguration;
- (void)updateParameterStatesFromCurrentDNDConfiguration;
- (void)wasAddedToWorkflowByUser:(id)a0;
- (void)willBeginProcessingParameterStates;

@end
