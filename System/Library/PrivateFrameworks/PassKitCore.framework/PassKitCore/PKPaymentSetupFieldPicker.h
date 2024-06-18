@class NSArray, PKPaymentSetupFieldPickerItem, NSString;

@interface PKPaymentSetupFieldPicker : PKPaymentSetupField

@property (copy, nonatomic) NSArray *pickerItems;
@property (nonatomic) unsigned long long pickerType;
@property (copy, nonatomic) PKPaymentSetupFieldPickerItem *currentValue;
@property (copy, nonatomic) NSString *localizedDescription;

- (id)currentValue;
- (id)displayString;
- (void)setCurrentValue:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)fieldType;
- (void)_commonUpdate;
- (id)_submissionStringForValue:(id)a0;
- (BOOL)submissionStringMeetsAllRequirements;
- (void)updateWithAttribute:(id)a0;
- (void)updateWithConfiguration:(id)a0;

@end
