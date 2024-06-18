@class UILabel, NSMutableArray, UISwitch;

@interface EKCalendarAbstractSwitchEditItem : EKCalendarEditItem {
    UILabel *_descriptionLabel;
}

@property (nonatomic) BOOL allowEventAlerts;
@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) UISwitch *toggleSwitch;
@property (nonatomic) BOOL underlyingCalendarState;
@property (nonatomic) BOOL switchState;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (id)cell;
- (id)footerTitle;
- (void)_switchStateChanged:(id)a0;
- (id)cellText;
- (BOOL)cellWrapsLongText;
- (id)descriptionLabelText;
- (BOOL)saveStateToCalendar:(id)a0;
- (void)setCalendar:(id)a0 store:(id)a1;
- (BOOL)shouldHideSwitch;

@end
