@interface CCUIAppearanceModule : CCUIToggleModule

- (id)init;
- (unsigned long long)_formattedHourForHour:(unsigned long long)a0;
- (BOOL)isSelected;
- (id)_subtitleForUserInterfaceStyle:(long long)a0 nextTransition:(id)a1;
- (id)_timeStringForHour:(unsigned long long)a0 minute:(unsigned long long)a1;
- (void)setSelected:(BOOL)a0;
- (id)glyphPackageDescription;
- (void)_updateState;
- (void)_toggleStyleMode;
- (BOOL)_uses24HourTime;
- (id)glyphState;
- (double)glyphScale;
- (void)dealloc;
- (id)_timeFormatter;
- (void)_styleModeDidChange;
- (void)_observeArbiterStyleChangeNotifications;
- (void)_unobserveArbiterStyleChangeNotifications;

@end
