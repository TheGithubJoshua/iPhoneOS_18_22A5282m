@class NSArray;

@interface WFNetworkPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

- (void).cxx_destruct;
- (id)possibleStates;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)a0;

@end
