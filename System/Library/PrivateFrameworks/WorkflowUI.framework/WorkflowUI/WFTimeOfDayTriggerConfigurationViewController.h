@class NSArray, NSString, UITableView;
@protocol _CDUserContext;

@interface WFTimeOfDayTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFTimeOffsetPickerViewControllerDelegate, WFTimeTriggerDayOfWeekCellDelegate>

@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) BOOL showingPicker;
@property (nonatomic) unsigned long long timeOfDayInterval;
@property (readonly, nonatomic) id<_CDUserContext> userContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)loadView;
- (void)dismissKeyboard;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)dayOfWeekPickerCell:(id)a0 didChangeSelectedRecurrences:(id)a1;
- (id)infoForSection:(long long)a0;
- (id)allDaysOfWeek;
- (id)calendarFooterText;
- (id)currentDayOfMonth;
- (id)currentSunriseTime;
- (id)currentSunsetTime;
- (id)dateComponentsFromTriggerDays;
- (id)initWithTrigger:(id)a0 mode:(unsigned long long)a1;
- (void)presentOffsetPickerViewControllerForEvent:(unsigned long long)a0;
- (id)subtitleForIndexPath:(id)a0;
- (void)timeOffsetPickerViewController:(id)a0 didSelectOffset:(unsigned long long)a1;
- (void)timeOffsetPickerViewControllerDidCancel:(id)a0;
- (void)timePickerUpdated:(id)a0;
- (id)titleForIndexPath:(id)a0;
- (void)updateCalendarDayIfNeeded;
- (void)updateCalendarFooterText;
- (void)updateTriggerCalendarDayFromDate:(id)a0;
- (void)updateTriggerTimeFromDate:(id)a0;

@end
