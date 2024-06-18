@class NSArray, HKCategoryType;

@interface WFHealthCategoryAdditionalPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (retain, nonatomic) HKCategoryType *categoryType;

- (BOOL)isHidden;
- (void).cxx_destruct;
- (id)localizedLabel;
- (id)possibleStates;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)updatePossibleStates;

@end
