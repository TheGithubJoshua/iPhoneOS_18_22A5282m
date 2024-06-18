@class HKQuantityType, NSArray;

@interface WFHealthQuantityAdditionalPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (retain, nonatomic) HKQuantityType *quantityType;

- (BOOL)isHidden;
- (void).cxx_destruct;
- (id)localizedLabel;
- (id)possibleStates;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)importQuestionBehavior;
- (void)updatePossibleStates;

@end
