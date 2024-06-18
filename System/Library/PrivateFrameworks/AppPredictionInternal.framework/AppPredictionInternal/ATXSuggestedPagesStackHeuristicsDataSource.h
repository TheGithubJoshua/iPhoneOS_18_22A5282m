@interface ATXSuggestedPagesStackHeuristicsDataSource : NSObject <ATXSuggestedPagesWidgetDataSource>

- (id)_widgetsForSleepMode;
- (BOOL)_hasTVInterest;
- (id)_widgetsForGamingMode;
- (BOOL)_hasAlarmActivity;
- (id)_widgetsForExerciseMode;
- (BOOL)_hasSignificantHomeAccessoryEvents;
- (id)_widgetsForPersonalMode;
- (id)_widgetsForDrivingMode;
- (id)_widgetsForReadingMode;
- (id)_widgetsForMindfulnessMode;
- (id)_widgetsForWorkMode;
- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;

@end
