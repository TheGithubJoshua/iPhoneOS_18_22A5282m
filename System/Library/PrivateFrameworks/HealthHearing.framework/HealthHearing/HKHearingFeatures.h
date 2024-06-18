@interface HKHearingFeatures : NSObject

@property (class, readonly) BOOL isHeadphoneExposureNotificationsEnabled;
@property (class, readonly) BOOL isHeadphoneExposureMeasureLevelsEnabled;
@property (class, readonly) BOOL areHeadphoneExposureNotificationsMandatory;
@property (class, readonly) BOOL isHeadphoneExposureNotificationsSupportedOnActiveWatch;

+ (id)_numbersForPhonePreferenceKeys:(id)a0;
+ (BOOL)_boolForPreferenceKey:(id)a0 defaultValue:(BOOL)a1 fromValues:(id)a2;
+ (BOOL)_isHeadphoneExposureDataTransientOnActiveWatchWithError:(id *)a0;
+ (void)unitTesting_overrideSimulateLocalHeadphonePlayback:(id)a0;
+ (BOOL)areHeadphoneExposureNotificationsMandatoryOnActiveWatchWithError:(id *)a0;
+ (id)_numbersForPreferenceKeys:(id)a0 error:(id *)a1;
+ (BOOL)setBoolForPreferenceKey:(id)a0 newValue:(BOOL)a1 forPairedWatch:(BOOL)a2 error:(id *)a3;
+ (id)sharedInstance;
+ (BOOL)_setHeadphoneExposureMeasureLevelsEnabled:(BOOL)a0 error:(id *)a1;
+ (id)activePairedDevice;
+ (void)startObservingForChanges;
+ (id)_numbersForPreferenceKeys:(id)a0 fromActiveWatch:(BOOL)a1;
+ (BOOL)_isMeasureOtherHeadphonesEnabled;
+ (BOOL)_isMeasureOtherHeadphonesEnabledOnActiveWatchWithError:(id *)a0;
+ (BOOL)_setBoolForPhonePreferenceKey:(id)a0 newValue:(BOOL)a1 error:(id *)a2;
+ (BOOL)unitTesting_simulateLocalHeadphonePlayback;
+ (BOOL)isHeadphoneExposureMeasureLevelsEnabledOnActiveWatchWithError:(id *)a0;
+ (void)unitTesting_overrideIsHeadphoneExposureNotificationsEnabled:(id)a0;
+ (id)_numbersForWatchPreferenceKeys:(id)a0;
+ (BOOL)_setHeadphoneExposureMeasureLevelsEnabledOnActiveWatch:(BOOL)a0 error:(id *)a1;
+ (BOOL)_setHeadphoneExposureNotificationsEnabledOnActiveWatch:(BOOL)a0 error:(id *)a1;
+ (BOOL)_setHeadphoneExposureNotificationsEnabled:(BOOL)a0 error:(id *)a1;
+ (BOOL)_isHeadphoneExposureDataTransient;
+ (BOOL)hasActivePairedDevice;
+ (BOOL)_setBoolForPreferenceKey:(id)a0 newValue:(BOOL)a1 error:(id *)a2;
+ (BOOL)_setBoolForWatchPreferenceKey:(id)a0 newValue:(BOOL)a1 error:(id *)a2;
+ (void)unitTesting_overrideForceDefaultHeadphoneDataCollectionInterval:(id)a0;
+ (id)_sharedAudioDataAnalysisManager;
+ (BOOL)unitTesting_forceDefaultHeadphoneDataCollectionInterval;
+ (BOOL)isHeadphoneExposureNotificationsEnabledOnActiveWatchWithError:(id *)a0;

- (id)init;
- (void)_startObservingForChanges;
- (void)_adasPreferenceDidChange:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)_startObservingForChangesOnActiveWatch;
- (void)_stopObservingForChanges;
- (BOOL)swizzled_isHAENFeatureEnabled;

@end
