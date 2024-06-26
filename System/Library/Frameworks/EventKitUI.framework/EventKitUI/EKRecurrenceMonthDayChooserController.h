@class NSMutableSet;

@interface EKRecurrenceMonthDayChooserController : EKRecurrenceGridChooserController {
    NSMutableSet *_daysOfTheMonthSet;
}

@property (nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence;

- (id)initWithDate:(id)a0;
- (long long)frequency;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (id)daysOfTheMonth;
- (void)setDaysOfTheMonth:(id)a0;
- (id)cellLabels;
- (long long)gridViewType;
- (void)refreshCells;
- (void)selectCell:(id)a0 atIndex:(long long)a1;
- (void)updateFromRecurrenceRule:(id)a0;
- (void)updateRecurrenceRuleBuilder:(id)a0;

@end
