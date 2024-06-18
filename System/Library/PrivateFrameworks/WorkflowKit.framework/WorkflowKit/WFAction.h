@class NSDictionary, WFActionAuxiliaryButton, WFContextualActionSuggestionMetadata, WFWorkflow, WFParameter, NSString, WFColor, NSError, WFActionSessionKitSessionConfiguration, NSAttributedString, NSArray, NSMutableDictionary, WFAppInstalledResource, WFResourceManager, WFContentCollection, NSObject, WFActionParameterSummary, NSSet, WFContentAttributionTracker, WFIcon, WFContactStore, WFSessionKitAssertion, INAppDescriptor, ICApp, NSProgress, NSDate, NSHashTable;
@protocol WFActionRemoteUserInterface, WFVariableDataSource, WFActionSandboxExtensionProvider, OS_dispatch_queue, WFContentPermissionRequestor, WFActionExtendedOperation, WFActionRunningDelegate, WFUserInterfaceHost;

@interface WFAction : NSObject <WFAppInstalledResourceDelegate, WFUUIDProvider, WFContentPermissionRequestor, WFParameterEventObserver, NSCopying, WFVariableProvider>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSAttributedString *attributedLocalizedName;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) NSString *localizedShortName;
@property (readonly, nonatomic) NSString *defaultOutputName;
@property (readonly, nonatomic) NSString *localizedDefaultOutputName;
@property (readonly, nonatomic) NSString *accessibilityName;
@property (readonly, nonatomic) NSString *attribution;
@property (readonly, nonatomic) NSString *localizedAttribution;
@property (readonly, nonatomic) NSDictionary *appDefinition;
@property (readonly, nonatomic) NSAttributedString *localizedFooter;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) NSArray *localizedCategories;
@property (readonly, nonatomic) NSString *iconName;
@property (readonly, nonatomic) NSString *iconSymbolName;
@property (readonly, nonatomic) WFIcon *icon;
@property (readonly, nonatomic) WFColor *iconColor;
@property (readonly, nonatomic) WFIcon *outputIcon;
@property (readonly, nonatomic) NSDictionary *descriptionDictionary;
@property (readonly, nonatomic) NSString *descriptionSummary;
@property (readonly, nonatomic) NSString *localizedDescriptionSummary;
@property (readonly, nonatomic) NSString *descriptionInput;
@property (readonly, nonatomic) NSString *localizedDescriptionInput;
@property (readonly, nonatomic) NSArray *allPossibleDescriptionResults;
@property (readonly, nonatomic) NSString *descriptionResult;
@property (readonly, nonatomic) NSString *localizedDescriptionResult;
@property (readonly, nonatomic) NSString *descriptionNote;
@property (readonly, nonatomic) NSString *localizedDescriptionNote;
@property (readonly, nonatomic) NSSet *allPossibleDescriptionRequires;
@property (readonly, nonatomic) NSString *descriptionRequires;
@property (readonly, nonatomic) NSString *localizedDescriptionRequires;
@property (readonly, nonatomic) NSAttributedString *localizedDescriptionAttribution;
@property (readonly, nonatomic) NSString *focusFilterDescription;
@property (readonly, nonatomic) NSString *localizedFocusFilterDescription;
@property (readonly, nonatomic) NSString *descriptionOfAccessResources;
@property (readonly, nonatomic) NSArray *keywords;
@property (readonly, nonatomic) NSArray *localizedKeywords;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic, getter=isDebugAction) BOOL debugAction;
@property (readonly, nonatomic, getter=isDiscontinued) BOOL discontinued;
@property (readonly, nonatomic, getter=isMissing) BOOL missing;
@property (readonly, nonatomic, getter=isDiscoverable) BOOL discoverable;
@property (readonly, nonatomic, getter=isResidentCompatible) BOOL residentCompatible;
@property (readonly, nonatomic, getter=isDiscoverableInSearch) BOOL discoverableInSearch;
@property (readonly, nonatomic, getter=isConstructorAction) BOOL constructorAction;
@property (readonly, nonatomic) BOOL requiresRemoteExecution;
@property (readonly, nonatomic) NSArray *userInterfaceTypes;
@property (readonly, nonatomic) NSArray *requiredResources;
@property (readonly, nonatomic) NSDictionary *settingsUIDefinition;
@property (readonly, nonatomic) Class settingsViewControllerClass;
@property (readonly, nonatomic) BOOL showsSettingsWhenResourcesUnavailable;
@property (readonly, nonatomic) Class configurationViewClass;
@property (readonly, nonatomic) NSDictionary *userInterfaceClasses;
@property (readonly, nonatomic) BOOL requiresUnlock;
@property (readonly, nonatomic) BOOL locallyProcessesData;
@property (readonly, nonatomic) BOOL deletesInput;
@property (readonly, nonatomic) NSString *appSection;
@property (readonly, nonatomic) ICApp *app;
@property (readonly, nonatomic) ICApp *appForDisplay;
@property (readonly, nonatomic) BOOL shouldBeIncludedInAppsList;
@property (readonly, nonatomic) long long rateLimitThreshold;
@property (readonly, nonatomic) long long rateLimitTimeout;
@property (readonly, nonatomic) long long rateLimitDelay;
@property (readonly, nonatomic) NSDictionary *inputDictionary;
@property (readonly, nonatomic) NSDictionary *outputDictionary;
@property (readonly, nonatomic) BOOL inputRequired;
@property (readonly, nonatomic) BOOL inputPassthrough;
@property (readonly, nonatomic) BOOL blocksSnapping;
@property (readonly, nonatomic) BOOL snappingPassthrough;
@property (readonly, nonatomic) BOOL inputTypePassthrough;
@property (readonly, nonatomic) BOOL inputTypeDeterminesOutputType;
@property (readonly, nonatomic) NSString *inputParameterKey;
@property (readonly, nonatomic) NSArray *inputTypes;
@property (readonly, nonatomic) NSArray *outputTypes;
@property (readonly, nonatomic) BOOL inputsMultipleItems;
@property (readonly, nonatomic) BOOL outputsMultipleItems;
@property (readonly, nonatomic) BOOL neverSuggested;
@property (readonly, nonatomic) long long initialSuggestionBehavior;
@property (readonly, nonatomic) BOOL highRisk;
@property (readonly, nonatomic) unsigned long long outputDisclosureLevel;
@property (readonly, nonatomic) NSArray *remoteExecuteOnPlatforms;
@property (readonly, nonatomic) NSArray *disabledOnPlatforms;
@property (readonly, nonatomic) NSString *outputMeasurementUnitType;
@property (readonly, nonatomic) NSArray *parameterDefinitions;
@property (readonly, nonatomic) id parameterSummaryDefinition;
@property (readonly, nonatomic) NSArray *additionalParameterSummaryDefinitions;
@property (readonly, nonatomic) WFActionParameterSummary *parameterSummary;
@property (readonly, nonatomic) NSArray *additionalParameterSummaries;
@property (readonly, nonatomic) NSString *parameterSummaryString;
@property (readonly, nonatomic) BOOL displaysParameterSummary;
@property (readonly, nonatomic) unsigned long long parameterCollapsingBehavior;
@property (readonly, nonatomic) unsigned long long appearance;
@property (readonly, nonatomic) BOOL mightSuppressRunningProgress;
@property (readonly, nonatomic) NSDictionary *sessionKitSessionConfigurationDefinition;
@property (readonly, nonatomic) NSString *sessionKitSessionInvocationType;
@property (readonly, nonatomic) WFActionSessionKitSessionConfiguration *sessionKitSessionConfiguration;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NSHashTable *eventObservers;
@property (retain, nonatomic) NSDictionary *initialSerializedParameters;
@property (retain, nonatomic) NSMutableDictionary *cachedDefaultParameterStates;
@property (retain, nonatomic) NSMutableDictionary *userDefinedParameterStates;
@property (retain, nonatomic) NSMutableDictionary *supplementalSerializedParameters;
@property (retain, nonatomic) NSSet *ignoredParameterKeysForProcessing;
@property (nonatomic) BOOL inputParameterUnlocked;
@property (nonatomic, getter=isRunning) BOOL running;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) id<WFUserInterfaceHost> userInterface;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } parameterInitializationLock;
@property (retain, nonatomic) id<WFActionRemoteUserInterface> actionUserInterface;
@property (copy, nonatomic) NSArray *currentGeneratedResourceNodes;
@property (retain, nonatomic) WFActionAuxiliaryButton *auxiliaryButton;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } observersLock;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } resourceManagerLock;
@property (retain, nonatomic) WFSessionKitAssertion *sessionKitAssertion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *effectiveWorkQueue;
@property (readonly, weak, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, copy, nonatomic) NSDictionary *parametersByKey;
@property (copy, nonatomic) NSDictionary *processedParameters;
@property (readonly, nonatomic) BOOL skipsProcessingHiddenParameters;
@property (readonly, nonatomic) BOOL populatesInputFromInputParameter;
@property (readonly, nonatomic) NSArray *specifiedOutputContentClasses;
@property (readonly, nonatomic, getter=isLastAction) BOOL lastAction;
@property (copy, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSArray *supportedAppIdentifiers;
@property (readonly, nonatomic) BOOL usesLegacyInputBehavior;
@property (retain, nonatomic) id<WFVariableDataSource> variableSource;
@property (readonly, nonatomic) id<WFActionRunningDelegate> runningDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) INAppDescriptor *appDescriptor;
@property (readonly, nonatomic) INAppDescriptor *displayableAppDescriptor;
@property (retain, nonatomic) WFAppInstalledResource *appResource;
@property (copy, nonatomic) NSString *widgetSizeClass;
@property (retain, nonatomic) WFContentAttributionTracker *contentAttributionTracker;
@property (copy, nonatomic) NSSet *allowedOnceSmartPromptStates;
@property (nonatomic) BOOL didRunRemotely;
@property (retain, nonatomic) id<WFActionExtendedOperation> extendedOperation;
@property (retain, nonatomic) WFContextualActionSuggestionMetadata *suggestionMetadata;
@property (retain, nonatomic) id<WFContentPermissionRequestor> contentPermissionRequestor;
@property (retain, nonatomic) WFContactStore *contactStore;
@property (readonly, nonatomic) NSString *localizedDefaultDisambiguationPrompt;
@property (readonly, nonatomic) id<WFActionSandboxExtensionProvider> sandboxExtensionProvider;
@property (readonly, nonatomic) NSArray *keyCommands;
@property (readonly, nonatomic) BOOL prefersActionAttribution;
@property (readonly, copy, nonatomic) NSString *localizedKeyParameterDisplayName;
@property (readonly, weak, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, copy, nonatomic) NSDictionary *parametersByKey;
@property (copy, nonatomic) NSDictionary *processedParameters;
@property (readonly, nonatomic) BOOL skipsProcessingHiddenParameters;
@property (readonly, nonatomic) BOOL populatesInputFromInputParameter;
@property (readonly, nonatomic) NSArray *specifiedOutputContentClasses;
@property (readonly, nonatomic, getter=isLastAction) BOOL lastAction;
@property (copy, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSArray *supportedAppIdentifiers;
@property (readonly, nonatomic) BOOL usesLegacyInputBehavior;
@property (retain, nonatomic) id<WFVariableDataSource> variableSource;
@property (readonly, nonatomic) id<WFActionRunningDelegate> runningDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) INAppDescriptor *appDescriptor;
@property (readonly, nonatomic) INAppDescriptor *displayableAppDescriptor;
@property (retain, nonatomic) WFAppInstalledResource *appResource;
@property (copy, nonatomic) NSString *widgetSizeClass;
@property (retain, nonatomic) WFContentAttributionTracker *contentAttributionTracker;
@property (copy, nonatomic) NSSet *allowedOnceSmartPromptStates;
@property (nonatomic) BOOL didRunRemotely;
@property (retain, nonatomic) id<WFActionExtendedOperation> extendedOperation;
@property (retain, nonatomic) WFContextualActionSuggestionMetadata *suggestionMetadata;
@property (retain, nonatomic) id<WFContentPermissionRequestor> contentPermissionRequestor;
@property (retain, nonatomic) WFContactStore *contactStore;
@property (readonly, nonatomic) NSString *localizedDefaultDisambiguationPrompt;
@property (readonly, nonatomic) id<WFActionSandboxExtensionProvider> sandboxExtensionProvider;
@property (readonly, nonatomic) NSArray *keyCommands;
@property (readonly, nonatomic) BOOL prefersActionAttribution;
@property (readonly, copy, nonatomic) NSString *localizedKeyParameterDisplayName;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *metricsIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *definition;
@property (readonly, nonatomic) WFResourceManager *resourceManager;
@property (readonly, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) WFParameter *inputParameter;
@property (readonly, nonatomic) WFContentCollection *input;
@property (retain, nonatomic) WFContentCollection *output;
@property (readonly, nonatomic) BOOL isRelevantToUser;
@property (readonly, nonatomic) Class contentItemClass;
@property (readonly, nonatomic) NSArray *inputContentClasses;
@property (readonly, nonatomic) NSArray *specifiedInputContentClasses;
@property (readonly, nonatomic) NSArray *outputContentClasses;
@property (copy, nonatomic) NSString *groupingIdentifier;
@property (readonly, nonatomic) BOOL isDeletable;
@property (readonly, nonatomic) BOOL isProgressIndeterminate;
@property (copy, nonatomic) NSString *outputName;
@property (readonly, nonatomic) BOOL outputIsRenamed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *availableVariableNames;
@property (readonly, nonatomic) NSArray *availableOutputActions;
@property (readonly, nonatomic) NSArray *workflowInputClasses;

+ (id)iconCache;
+ (id)actionFromSerializedRepresentation:(id)a0 actionRegistry:(id)a1;
+ (id)actionsFromSerializedRepresentations:(id)a0 actionRegistry:(id)a1;
+ (BOOL)outputIsExemptFromTaintTrackingInheritance;
+ (void)showImplicitChooseFromListWithInput:(id)a0 userInterface:(id)a1 workQueue:(id)a2 cancelHandler:(id /* block */)a3 selectionHandler:(id /* block */)a4;
+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (id)serializedRepresentation;
- (void)cancel;
- (void).cxx_destruct;
- (void)enumerateObservers:(id /* block */)a0;
- (id)deviceLockedError;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dismissPresentedContentWithCompletionHandler:(id /* block */)a0;
- (void)setRunningDelegate:(id)a0;
- (id)previousAction;
- (id)parameterForKey:(id)a0;
- (id)colorForName:(id)a0;
- (BOOL)hasChildren;
- (id)serializedParameters;
- (void)removeEventObserver:(id)a0;
- (void)configureResourcesForParameter:(id)a0;
- (void)initializeParametersIfNecessary;
- (id)missingAppError;
- (void)runWithInput:(WFContentCollection *)a0 completionHandler:(void (^)(NSError *))a1;
- (BOOL)shouldLocalizeValueForSelector:(SEL)a0;
- (void)_allowNetworkAccessAfterPromptingForURLs:(id)a0 completionHandler:(id /* block */)a1;
- (void)_processParameterStates:(id)a0 withInput:(id)a1 skippingHiddenParameters:(BOOL)a2 askForValuesIfNecessary:(BOOL)a3 workQueue:(id)a4 completionHandler:(id /* block */)a5;
- (id)actionForAppIdentifier:(id)a0;
- (id)actionProvidingVariableWithOutputUUID:(id)a0;
- (id)actionsProvidingVariableName:(id)a0;
- (void)addEventObserver:(id)a0;
- (void)addVariableObserver:(id)a0;
- (void)allowContactsAccessWithCompletionHandler:(id /* block */)a0;
- (void)allowNetworkAccessAfterPromptingForURLs:(id)a0 completionHandler:(id /* block */)a1;
- (void)allowNetworkAccessWithoutPromptingWithCompletionHandler:(id /* block */)a0;
- (BOOL)allowSessionKitSessionsIfNeededWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)allowSessionKitSessionsIfNeededWithConfiguration:(id)a0 isManualInvocation:(BOOL)a1 error:(id *)a2;
- (BOOL)allowsAnyURLDestinationWhenAddedToWorkflowByUser;
- (void)appInstalledResource:(id)a0 didUpdateAppDescriptor:(id)a1;
- (BOOL)appResourceRequiresAppInstall;
- (void)askForValuesOfParameters:(id)a0 withDefaultStates:(id)a1 prompts:(id)a2 input:(id)a3 workQueue:(id)a4 completionHandler:(id /* block */)a5;
- (BOOL)canHandleInputOfContentClasses:(id)a0 withSupportedClasses:(id)a1;
- (BOOL)canHandleInputOfContentClasses:(id)a0 withSupportedClasses:(id)a1 includingCoercedTypes:(BOOL)a2;
- (void)checkUserInterfaceAndRun;
- (id)classesForTypeArray:(id)a0 includeAllOutputTypes:(BOOL)a1;
- (void)configureParameter:(id)a0;
- (id)containedVariables;
- (id)containedVariablesOfClass:(Class)a0;
- (BOOL)containsVariableOfType:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (id)contextualActionsForSurface:(unsigned long long)a0;
- (id)copyForDuplicating;
- (id)copyForProcessing;
- (id)copyParameterStates;
- (id)copyParameterStatesWithFallingBackToDefaultValue:(BOOL)a0;
- (id)copyWithDefinition:(id)a0 serializedParameters:(id)a1;
- (id)copyWithSerializedParameters:(id)a0;
- (id)createAccompanyingActions;
- (id)createResourceManager;
- (id)createStateForParameter:(id)a0 fromSerializedRepresentation:(id)a1;
- (id)customOutputName;
- (id)defaultParameterStateForKey:(id)a0;
- (BOOL)descriptionInputIncludesSupportingItemClasses;
- (void)didChangeVariableName:(id)a0 to:(id)a1;
- (void)finishRunningWithError:(id)a0;
- (id)generateOutputUUIDForAction:(id)a0;
- (id)generateUUIDIfNecessaryWithUUIDProvider:(id)a0;
- (id)generatedResourceNodes;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (BOOL)getInputContentFromVariablesInParameterState:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleTestingEvent:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)hasAvailableActionOutputVariables;
- (BOOL)hasAvailableVariables;
- (void)iconUpdated;
- (BOOL)ignoresOutputFromAction:(id)a0 inWorkflow:(id)a1;
- (BOOL)ignoresOutputFromPreviousActionInWorkflow:(id)a0;
- (id)inheritedInputVariableInWorkflow:(id)a0;
- (id)inheritedInputVariableInWorkflow:(id)a0 ignoringInputTypes:(BOOL)a1;
- (id)inheritedOutputContentClassesInWorkflow:(id)a0;
- (id)inheritedOutputContentClassesInWorkflow:(id)a0 context:(id)a1;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (void)initializeParameters;
- (void)initializeParametersWithLock;
- (id)inputSourceInWorkflow:(id)a0;
- (BOOL)isDisabledWhenRunOnDevice:(id)a0;
- (BOOL)isRunningInSiriUserInterface;
- (BOOL)isSubclassThatOverridesSelector:(SEL)a0;
- (BOOL)isVariableWithNameAvailable:(id)a0;
- (BOOL)isVariableWithOutputUUIDAvailable:(id)a0;
- (id)itemsBeingDeleted;
- (BOOL)legacyBehaviorIgnoresOutputFromAction:(id)a0 inWorkflow:(id)a1;
- (id)localizedErrorWithLinkError:(id)a0;
- (id)localizedSubcategoryForCategory:(id)a0;
- (void)lockInputParameter;
- (void)logDataTransmissionForSmartPromptApprovalResult:(id)a0;
- (void)matchContextualAction:(id)a0 toContentCollection:(id)a1 completionHandler:(id /* block */)a2;
- (id)minimumSupportedClientVersion;
- (void)nameUpdated;
- (void)notifyEventObserversParameterStateDidChangeForKey:(id)a0;
- (void)outputDetailsUpdated;
- (id)outputVariableWithVariableProvider:(id)a0 UUIDProvider:(id)a1;
- (void)parameterDefaultSerializedRepresentationDidChange:(id)a0;
- (id)parameterKeysIgnoredForParameterSummary;
- (id)parameterStateForKey:(id)a0;
- (id)parameterStateForKey:(id)a0 fallingBackToDefaultValue:(BOOL)a1;
- (void)parameterStateValidityCriteriaDidChange:(id)a0;
- (id)parameterValueForKey:(id)a0 ofClass:(Class)a1;
- (id)parametersRequiringUserInputAlongsideParameter:(id)a0;
- (void)performDataAccessChecksAndRun;
- (void)performDataAccessChecksWithUserInterface:(id)a0 contentItemCache:(id)a1 completionHandler:(id /* block */)a2;
- (void)performDeletionAuthorizationChecksWithUserInterface:(id)a0 contentItemCache:(id)a1 completionHandler:(id /* block */)a2;
- (void)performSmartPromptChecksWithUserInterface:(id)a0 contentDestination:(id)a1 contentItemCache:(id)a2 isWebpageCoercion:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)populatedInputWithProcessedParameterValues:(id)a0;
- (id)possibleContentClassesForVariableNamed:(id)a0 context:(id)a1;
- (void)preloadDefaultParameterStatesIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (void)prepareToProcessWithCompletionHandler:(id /* block */)a0;
- (void)presentSmartPromptAuthorizationWithConfiguration:(id)a0 userInterface:(id)a1 databaseApprovalResult:(id)a2 contentDestination:(id)a3 completionHandler:(id /* block */)a4;
- (id)prioritizedParameterKeysForRemoteExecution;
- (void)processParameterStates:(id)a0 withInput:(id)a1 skippingHiddenParameters:(BOOL)a2 askForValuesIfNecessary:(BOOL)a3 workQueue:(id)a4 completionHandler:(id /* block */)a5;
- (void)processParametersWithoutAskingForValuesWithInput:(id)a0 workQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)processParametersWithoutAskingForValuesWithInput:(id)a0 workQueue:(id)a1 fallingBackToDefaultValue:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)providedVariableNames;
- (void)recreateGeneratedResourcesIfNeeded;
- (void)reloadAuxiliaryButton;
- (void)removeVariableObserver:(id)a0;
- (void)requestInterfacePresentationWithCompletionHandler:(id /* block */)a0;
- (void)requestUnlock:(id /* block */)a0;
- (void)requestUnlockIfNeeded:(id /* block */)a0;
- (void)requestUserConsentToLoadWebContentAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)requiresHandoffWhenRunWithUserInterfaceType:(id)a0;
- (BOOL)requiresUserInteractionWhenRunWithInput:(id)a0;
- (void)resetOutput;
- (void)resolveAppDescriptorIfNecessary:(id /* block */)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)runWithInput:(id)a0 error:(id *)a1;
- (void)runWithInput:(id)a0 userInterface:(id)a1 runningDelegate:(id)a2 variableSource:(id)a3 workQueue:(id)a4 completionHandler:(id /* block */)a5;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (void)setDefaultCoercionOptionsOnContentCollection:(id)a0;
- (void)setDefaultCoercionOptionsOnInputs;
- (void)setOutput:(id)a0 onVariableSource:(id)a1;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (BOOL)setParameterStateToVariable:(id)a0 forKey:(id)a1;
- (void)setSupplementalParameterValue:(id)a0 forKey:(id)a1;
- (BOOL)shouldAskForValuesWhileProcessingParameterStates;
- (BOOL)shouldBeConnectedToPreviousActionInWorkflow:(id)a0 withOutputsConsumedByFollowingActions:(id)a1;
- (BOOL)shouldBeSuggestedAfterAction:(id)a0 inWorkflow:(id)a1;
- (BOOL)shouldDisableSmartPromptChecks;
- (BOOL)shouldInsertExpandingParameterForParameter:(id)a0;
- (BOOL)showsConnectorToPreviousActionInWorkflow:(id)a0;
- (BOOL)showsImplicitChooseFromListWhenRunWithInput:(id)a0;
- (id)smartPromptSubtitleWithPreviousContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)snapInputParameterIfNecessary;
- (id)subcategoryForCategory:(id)a0;
- (id)supplementalParameterValueForKey:(id)a0 ofClass:(Class)a1;
- (BOOL)supportsUserInterfaceType:(id)a0;
- (BOOL)takeSessionKitAssertionIfNeededWithError:(id *)a0;
- (id)typeDescriptionWithTypes:(id)a0 explanationText:(id)a1 multiple:(BOOL)a2 optional:(BOOL)a3;
- (void)unlockInputParameter;
- (void)updateAppDescriptorInDatabaseWithSelectedApp:(id)a0;
- (void)updateAppDescriptorWithSelectedApp:(id)a0;
- (id)visibleParametersForParameterSummary;
- (id)visibleParametersWithProcessing:(BOOL)a0;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasAddedToWorkflowByUser:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (void)willBeAddedToWorkflow:(id)a0;
- (void)willBeginProcessingParameterStates;

@end