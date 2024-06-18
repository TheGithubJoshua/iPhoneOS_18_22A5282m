@class NSString, UITableViewCell, EKRecurrenceOrdinalPickerViewController;

@interface EKRecurrenceOrdinalChooserController : EKRecurrenceChooserController <EKRecurrenceOrdinalPickerViewControllerDelegate> {
    EKRecurrenceOrdinalPickerViewController *_pickerViewController;
    UITableViewCell *_cell;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDate:(id)a0;
- (long long)frequency;
- (void).cxx_destruct;
- (long long)numberOfRows;
- (id)cellForRow:(long long)a0;
- (void)frequencyPickerUpdated:(id)a0;
- (double)heightForRow:(long long)a0;
- (void)updateFromRecurrenceRule:(id)a0;
- (void)updateRecurrenceRuleBuilder:(id)a0;

@end
