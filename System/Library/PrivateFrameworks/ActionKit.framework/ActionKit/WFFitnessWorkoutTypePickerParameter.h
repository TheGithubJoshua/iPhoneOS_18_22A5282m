@class NSString, NSArray, WFAction;

@interface WFFitnessWorkoutTypePickerParameter : WFEnumerationParameter <WFActionEventObserver> {
    int _characteristicUpdateToken;
    NSArray *_possibleStates;
}

@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)possibleStates;
- (id)localizedPlaceholder;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)defaultSerializedRepresentationDidChange;
- (Class)singleStateClass;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id /* block */)a0;
- (void)saveStateIfNeeded;

@end
