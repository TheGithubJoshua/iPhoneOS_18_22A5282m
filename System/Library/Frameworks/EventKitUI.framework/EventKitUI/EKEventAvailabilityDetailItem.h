@class UITableViewCell;

@interface EKEventAvailabilityDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    long long _availability;
}

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (void)setEvent:(id)a0 store:(id)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (BOOL)_canChangeAvailability;
- (void).cxx_destruct;
- (id)_choices;
- (void)reset;

@end
