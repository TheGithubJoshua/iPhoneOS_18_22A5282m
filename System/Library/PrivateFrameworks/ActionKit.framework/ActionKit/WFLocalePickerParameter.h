@class NSArray;

@interface WFLocalePickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

+ (id)availableLocaleIdentifiers;

- (void).cxx_destruct;
- (id)possibleStates;
- (id)localizedPlaceholder;
- (id)localizedLabelForPossibleState:(id)a0;

@end
