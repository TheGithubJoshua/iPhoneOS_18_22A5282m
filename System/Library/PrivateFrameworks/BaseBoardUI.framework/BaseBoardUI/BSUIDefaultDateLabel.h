@class NSString, NSTimer, NSDate;
@protocol BSUIDateLabelDelegate;

@interface BSUIDefaultDateLabel : UILabel <BSUIDateLabel> {
    NSDate *_timeZoneRelativeEndDate;
    NSDate *_effectiveAllDayStartDate;
    NSDate *_effectiveAllDayLastValidDate;
    NSDate *_effectiveAllDayEndDate;
    BOOL _effectiveAllDay;
    BOOL _isCoalescingUpdates;
    BOOL _needsUpdateFromCoalesce;
    NSTimer *_updateTimer;
}

@property (readonly, nonatomic) NSDate *timeZoneRelativeStartDate;
@property (nonatomic, getter=isAllDay) BOOL allDay;
@property (weak, nonatomic) id<BSUIDateLabelDelegate> delegate;
@property (nonatomic) long long labelType;
@property (nonatomic) BOOL isTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setStartDate:(id)a0 withTimeZone:(id)a1;
- (BOOL)isDateWithinEffectiveAllDayRange:(id)a0;
- (void)setEndDate:(id)a0 withTimeZone:(id)a1;
- (void)startCoalescingUpdates;
- (void)stopCoalescingUpdates;
- (void)setTimeZoneRelativeEndDate:(id)a0;
- (id)constructLabelString;
- (void)_updateTimerFired:(id)a0;
- (BOOL)isEffectiveAllDay;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setTimeZoneRelativeStartDate:(id)a0 absoluteStartDate:(id)a1;
- (void)dealloc;
- (void)updateTextIfNecessary;
- (void)update;
- (void)_forceUpdate;

@end
