@class NSArray, NSMutableArray;

@interface EKRecurrenceWeekdayChooserController : EKRecurrenceChooserController {
    NSMutableArray *_selectedRows;
}

@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) NSArray *daysOfTheWeek;

- (id)initWithDate:(id)a0;
- (long long)frequency;
- (void).cxx_destruct;
- (long long)numberOfRows;
- (int)_dayMask;
- (void)_setCell:(id)a0 selected:(BOOL)a1;
- (id)cellForRow:(long long)a0;
- (double)heightForRow:(long long)a0;
- (void)rowTapped:(long long)a0;
- (void)updateFromRecurrenceRule:(id)a0;
- (void)updateRecurrenceRuleBuilder:(id)a0;

@end
