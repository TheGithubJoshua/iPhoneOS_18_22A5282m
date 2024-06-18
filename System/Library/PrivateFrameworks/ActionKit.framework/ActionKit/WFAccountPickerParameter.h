@class NSArray;

@interface WFAccountPickerParameter : WFEnumerationParameter

@property (readonly, nonatomic) NSArray *possibleStates;
@property (readonly, nonatomic) id observer;
@property (readonly, nonatomic) Class accountClass;

- (BOOL)isHidden;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDefinition:(id)a0;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;
- (id)accountWithName:(id)a0;

@end
