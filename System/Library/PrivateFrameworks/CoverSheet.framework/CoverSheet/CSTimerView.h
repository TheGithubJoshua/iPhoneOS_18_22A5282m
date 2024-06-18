@class NSString, NSDate;

@interface CSTimerView : SBFLockScreenDateSubtitleView <PTSettingsKeyObserver> {
    NSDate *_endDate;
}

@property (readonly, nonatomic) NSString *timerText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setEndDate:(id)a0;
- (void)_updateLegibilityStrength;
- (id)_newTimerDialForSettings:(id)a0 withFont:(id)a1;
- (void).cxx_destruct;
- (id)accessoryView;
- (id)_timerFont;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)dealloc;
- (void)setFont:(id)a0;
- (double)interItemSpacing;
- (void)updateTimerLabel;
- (void)setLegibilitySettings:(id)a0;

@end
