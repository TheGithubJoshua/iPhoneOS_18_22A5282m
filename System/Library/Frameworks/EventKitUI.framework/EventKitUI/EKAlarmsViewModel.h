@class EKCalendarItem, NSMutableArray;

@interface EKAlarmsViewModel : NSObject {
    BOOL _canHaveLeaveNowAlarm;
    BOOL _hasLeaveNowAlarm;
    unsigned long long _locationStatus;
}

@property (retain, nonatomic) EKCalendarItem *calendarItem;
@property (retain, nonatomic) NSMutableArray *uiAlarms;
@property (nonatomic) BOOL needsUpdate;
@property (readonly, nonatomic) BOOL canHaveLeaveNowAlarm;
@property (readonly, nonatomic) BOOL hasLeaveNowAlarm;
@property (readonly, nonatomic) unsigned long long locationStatus;

+ (id)_noneAlertTitle;
+ (void)unsubscribeFromDarwinNotifications;
+ (void)subscribeToDarwinNotifications;
+ (id)labelTextForIndex:(unsigned long long)a0;

- (void)updateIfNeeded;
- (id)init;
- (id)placeholderMenuForAlarmAtIndex:(unsigned long long)a0;
- (BOOL)locationStatusMakesTTLAlarmDisabled;
- (id)presetAlarmsIntervals;
- (id)_menuForAlarmAtIndex:(unsigned long long)a0 placeholder:(BOOL)a1 actionHandler:(id /* block */)a2;
- (void)_updateLeaveNowFlags;
- (void)updatedUIAlarmFromUIAlarm:(id)a0 toUIAlarm:(id)a1 atIndex:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)_errorTitleForDisabledTTLAlarm;
- (BOOL)showDefaultAlarm:(id)a0;
- (void)setNeedsUpdate;
- (void).cxx_destruct;
- (id)menuForAlarmAtIndex:(unsigned long long)a0 actionHandler:(id /* block */)a1;
- (void)reloadTTLLocationAuthorization:(id)a0;
- (BOOL)_hasUIAlarmChangedFromUIAlarm:(id)a0 toUIAlarm:(id)a1;
- (BOOL)isAlarmEffectivelyDisabled:(id)a0;
- (void)dealloc;
- (id)initWithCalendarItem:(id)a0;
- (void)_updateAlarms;

@end
