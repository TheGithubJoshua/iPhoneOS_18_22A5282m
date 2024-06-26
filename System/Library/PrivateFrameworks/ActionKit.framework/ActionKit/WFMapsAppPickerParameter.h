@class NSOrderedSet, NSArray;

@interface WFMapsAppPickerParameter : WFEnumerationParameter <ICAppInstallStatusObserver> {
    NSArray *_possibleStates;
}

@property (readonly, nonatomic) NSOrderedSet *supportedAppIdentifiers;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDefinition:(id)a0;
- (id)possibleStates;
- (void)addObservers;
- (void)removeObservers;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)appRegistry:(id)a0 installStatusChangedForApp:(id)a1;
- (id)possibleStatesForLocalization;
- (void)refreshInstalledApps;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

@end
