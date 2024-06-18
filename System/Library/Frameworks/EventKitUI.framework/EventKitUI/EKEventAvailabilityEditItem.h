@class NSArray;

@interface EKEventAvailabilityEditItem : EKEventEditItem {
    long long _availability;
    NSArray *_choices;
}

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_choices;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)a0;
- (BOOL)editor:(id)a0 canSelectSubitem:(unsigned long long)a1;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;

@end
