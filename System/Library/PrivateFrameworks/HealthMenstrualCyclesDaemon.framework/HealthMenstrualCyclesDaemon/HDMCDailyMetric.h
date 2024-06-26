@class NSString, NSDictionary, NSNumber;

@interface HDMCDailyMetric : NSObject

@property (class, readonly, nonatomic) NSString *eventName;

@property (copy, nonatomic) NSDictionary *eventPayload;
@property (nonatomic, getter=isImproveHealthAndActivityAllowed) BOOL improveHealthAndActivityAllowed;
@property (retain, nonatomic, getter=isOnboardingCompleted) NSNumber *onboardingCompleted;
@property (retain, nonatomic) NSNumber *onboardedVersion;
@property (retain, nonatomic) NSNumber *weeksSinceOnboarded;
@property (retain, nonatomic) NSNumber *hasCompatiblePairedAppleWatch;
@property (retain, nonatomic) NSNumber *hasSameAlgorithmVersionOnPairedWatch;
@property (retain, nonatomic) NSNumber *wasHeartRateInputDelivered;
@property (retain, nonatomic) NSNumber *wasDeviationDetectionDelivered;
@property (retain, nonatomic) NSString *heartRateInputDeliveryCountryCode;
@property (retain, nonatomic) NSNumber *wasWristTemperatureInputDelivered;
@property (retain, nonatomic) NSString *wristTemperatureInputDeliveryCountryCode;
@property (retain, nonatomic) NSNumber *daysWithWristTempIn45DaysBeforeFertileWindowEnd;
@property (retain, nonatomic) NSNumber *daysWithWristTempInPast45Days;
@property (retain, nonatomic) NSNumber *daysWornWatchToSleepInLast45Days;
@property (retain, nonatomic) NSNumber *countWatchesWithWristTempMeasurementDataInLast45Days;
@property (retain, nonatomic) NSNumber *hasWristTemperatureCompatiblePairedWatch;
@property (retain, nonatomic) NSNumber *internalLiveOnCycleFactorOverrideEnabled;
@property (retain, nonatomic) NSNumber *isSleepConfiguredToAllowWristTemperatureMeasurements;
@property (retain, nonatomic) NSNumber *areHealthNotificationsAuthorized;
@property (retain, nonatomic) NSNumber *age;
@property (retain, nonatomic) NSNumber *biologicalSex;
@property (retain, nonatomic) NSNumber *numberOfCyclesSinceLastDayOfLogging;
@property (retain, nonatomic) NSNumber *numberOfCyclesSinceLastDayOfLoggingInCycleTracking;
@property (retain, nonatomic, getter=isOngoingContraception) NSNumber *ongoingContraception;
@property (retain, nonatomic, getter=isOngoingLactation) NSNumber *ongoingLactation;
@property (retain, nonatomic, getter=isOngoingPregnancy) NSNumber *ongoingPregnancy;
@property (retain, nonatomic) NSNumber *cycleLengthVariationLowerPercentile;
@property (retain, nonatomic) NSNumber *cycleLengthVariationUpperPercentile;
@property (retain, nonatomic) NSNumber *numberOfDaysSinceLastFiredUpdateFertileWindowNotification;
@property (retain, nonatomic) NSNumber *numberOfDailySleepHeartRateStatisticsForPast100Days;
@property (retain, nonatomic) NSNumber *numberOfDailyAwakeHeartRateStatisticsForPast100Days;
@property (retain, nonatomic) NSNumber *countWristTempEligibleHistoricalCycles;
@property (retain, nonatomic) NSNumber *countWristTempEligibleHistoricalCycles_ConfirmedOPK;
@property (retain, nonatomic) NSNumber *countWristTempEligibleHistoricalCycles_ConfirmedWristTemp;
@property (retain, nonatomic) NSNumber *countWristTempEligibleHistoricalCycles_FailedAvailability;
@property (retain, nonatomic) NSNumber *countWristTempEligibleHistoricalCycles_FailedNoise;
@property (retain, nonatomic) NSNumber *countWristTempEligibleHistoricalCycles_FailedOther;
@property (retain, nonatomic) NSNumber *daysBeforeFertileWindowEnd;
@property (retain, nonatomic) NSNumber *daysBeforeMostLikelyPeriodPredictionStart;
@property (retain, nonatomic) NSNumber *daysFertileWindowShifted;
@property (retain, nonatomic) NSNumber *daysFirstPeriodPredictionShifted;
@property (retain, nonatomic) NSNumber *daysSinceCycleStart;
@property (retain, nonatomic) NSNumber *daysWithWristTempIn10DaysBeforeCalendarOvulation;
@property (retain, nonatomic) NSNumber *daysWithWristTempIn6DaysBeforeCalendarOvulation;
@property (retain, nonatomic) NSNumber *daysWithWristTempIn3DaysAfterCalendarOvulation;
@property (retain, nonatomic) NSNumber *daysWithWristTempIn6DaysAfterCalendarOvulation;
@property (retain, nonatomic) NSNumber *daysWithWristTempIn10DaysAfterOvulation;
@property (retain, nonatomic) NSNumber *didFirstPeriodPredictionShift;
@property (retain, nonatomic) NSString *predictionPrimarySourceTypeFertileWindow;
@property (retain, nonatomic) NSString *predictionPrimarySourceTypeFirstPeriodPrediction;
@property (retain, nonatomic) NSNumber *weeksSinceOnboardedWristTemperatureOvulationPrediction;
@property (retain, nonatomic) NSNumber *periodPredictionEnabled;
@property (retain, nonatomic) NSNumber *periodNotificationEnabled;
@property (retain, nonatomic) NSNumber *fertilityPredictionEnabled;
@property (retain, nonatomic) NSNumber *fertilityNotificationEnabled;
@property (retain, nonatomic) NSNumber *deviationDetectionIrregularEnabled;
@property (retain, nonatomic) NSNumber *deviationDetectionInfrequentEnabled;
@property (retain, nonatomic) NSNumber *deviationDetectionSpottingEnabled;
@property (retain, nonatomic) NSNumber *deviationDetectionProlongedEnabled;
@property (retain, nonatomic) NSNumber *sensorBasedPredictionEnabled;
@property (retain, nonatomic) NSNumber *wristTemperatureBasedPredictionEnabled;
@property (retain, nonatomic) NSNumber *logFactorsEnabled;
@property (retain, nonatomic) NSNumber *logSymptomsEnabled;
@property (retain, nonatomic) NSNumber *logSpottingEnabled;
@property (retain, nonatomic) NSNumber *logSexualActivityEnabled;
@property (retain, nonatomic) NSNumber *logCervicalMucusQualityEnabled;
@property (retain, nonatomic) NSNumber *logBasalBodyTemperatureEnabled;
@property (retain, nonatomic) NSNumber *logOvulationTestResultEnabled;
@property (retain, nonatomic) NSNumber *logPregnancyTestResultEnabled;
@property (retain, nonatomic) NSNumber *logProgesteroneTestResultEnabled;
@property (retain, nonatomic) NSNumber *hasFirstPartySleepSamplesPast48Hours;
@property (retain, nonatomic) NSNumber *hasSleepSamplesPast48Hours;
@property (retain, nonatomic) NSNumber *countConfirmedProlongedDeviationPastYear;
@property (retain, nonatomic) NSNumber *countConfirmedInfrequentDeviationPastYear;
@property (retain, nonatomic) NSNumber *countConfirmedIrregularDeviationPastYear;
@property (retain, nonatomic) NSNumber *countConfirmedSpottingDeviationPastYear;
@property (retain, nonatomic) NSNumber *hasConfirmedProlongedDeviationPastMonth;
@property (retain, nonatomic) NSNumber *hasConfirmedInfrequentDeviationPastMonth;
@property (retain, nonatomic) NSNumber *hasConfirmedIrregularDeviationPastMonth;
@property (retain, nonatomic) NSNumber *hasConfirmedSpottingDeviationPastMonth;
@property (retain, nonatomic) NSNumber *countTotalConfirmedDeviationsPastMonth;
@property (retain, nonatomic) NSNumber *countTotalConfirmedDeviationsPastYear;
@property (retain, nonatomic) NSNumber *countDetectedInfrequentDeviationsPastYear;
@property (retain, nonatomic) NSNumber *countDetectedIrregularDeviationsInPastYear;
@property (retain, nonatomic) NSNumber *countDetectedProlongedDeviationsPastYear;
@property (retain, nonatomic) NSNumber *countDetectedSpottingDeviationsPastYear;
@property (retain, nonatomic) NSNumber *countTotalDetectedDeviationsPastMonth;
@property (retain, nonatomic) NSNumber *countTotalDetectedDeviationsPastYear;
@property (retain, nonatomic) NSNumber *daysSinceDeviationTilePosted;
@property (retain, nonatomic) NSNumber *isEligibleForCycleFactorsReminder;

- (void).cxx_destruct;
- (id)initWithImproveHealthAndActivityAllowed:(BOOL)a0;
- (id)_biologicalSexString;

@end
