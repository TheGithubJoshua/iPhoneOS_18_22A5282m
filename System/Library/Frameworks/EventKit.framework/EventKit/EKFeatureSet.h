@interface EKFeatureSet : NSObject

+ (BOOL)areVehicleTriggersEnabled;
+ (BOOL)areApplicationBadgesSupported;
+ (BOOL)calendarListViewCellsFeaturesExtraContent;
+ (BOOL)automaticGeocodingEnabled;
+ (BOOL)isSuggestionsEnabled;
+ (BOOL)areQuickActionsSupported;
+ (BOOL)isContinuitySupported;
+ (BOOL)isTravelAdvisorySupported;
+ (unsigned long long)_currentSplashScreenVersion;
+ (BOOL)isConservativeEntryEnabled;
+ (BOOL)areContextualRemindersSupported;
+ (BOOL)mustDisplaySplashScreenToUser;
+ (BOOL)eventDetailsDayPreviewEnabled;
+ (BOOL)eventsFoundInAppsEnabled;
+ (BOOL)calendarListViewCellsFeaturesAttendeeInformation;
+ (void)userAcknowledgedSplashScreen;

@end
