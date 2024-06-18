@class NSArray;

@interface WFiTunesStoreCountryPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

- (void).cxx_destruct;
- (id)possibleStates;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)a0;
- (BOOL)preferParameterValuePicker;
- (Class)singleStateClass;

@end
