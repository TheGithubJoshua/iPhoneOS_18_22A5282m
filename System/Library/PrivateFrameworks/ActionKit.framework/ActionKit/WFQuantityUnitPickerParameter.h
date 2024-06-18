@class HKQuantityType, NSArray, NSObject;
@protocol OS_dispatch_group;

@interface WFQuantityUnitPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *possibleStateLoadingGroup;
@property (retain, nonatomic) HKQuantityType *quantityType;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)possibleStates;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)a0;
- (Class)singleStateClass;
- (void)updatePossibleStates;

@end
