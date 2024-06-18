@class NSDictionary, PSSpecifier;
@protocol STCustomizeDaysListControllerDelegate;

@interface STCustomizeDaysListController : PSListController <PSDateTimePickerCellDelegate>

@property (retain, nonatomic) PSSpecifier *timePickerSpecifier;
@property (retain, nonatomic) PSSpecifier *selectedDaySpecifier;
@property (weak, nonatomic) id<STCustomizeDaysListControllerDelegate> delegate;
@property (copy, nonatomic) NSDictionary *timeByDay;

- (id)specifiers;
- (id)init;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)datePickerChanged:(id)a0;
- (id)datePickerForSpecifier:(id)a0;
- (id)_localizedDayNames;
- (id)_localizedDayOrder;
- (void)_showOrHidePickerSpecifierForSpecifier:(id)a0;
- (id)budgetTime:(id)a0;

@end
