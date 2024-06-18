@class NSString, NSMutableSet;

@interface _UIStatistics : NSObject {
    NSString *_key;
    double _sampleValue;
    NSMutableSet *_children;
}

@property (nonatomic) double sampleRate;

+ (id)coverSheetButtonInteractionCountWithActivation:(BOOL)a0 category:(id)a1;
+ (id)previewInteractionPeekDuration;
+ (id)feedbackGeneratorActivationCountWithSuffix:(id)a0;
+ (id)_sharedStatisticWithDomain:(id)a0 statisticsClass:(Class)a1 identifierReporting:(long long)a2;
+ (id)recentsInputViewItemSelectedCount;
+ (id)pinchGestureCount;
+ (id)feedbackEngineActivationCountWithSuffix:(id)a0;
+ (id)feedbackEngineActivationDurationWithSuffix:(id)a0;
+ (id)zoomGestureCount;
+ (id)controlInteractionDurationDistributionWithCategory:(id)a0 suffix:(id)a1;
+ (id)feedbackEnginePrewarmCountWithSuffix:(id)a0;
+ (id)previewInteractionAlertPresentationCount;
+ (id)scrubberUsageTime;
+ (id)recentsInputViewPresentationCount;
+ (id)alertButtonTapCount;
+ (id)feedbackEngineOutOfChannelsCountWithSuffix:(id)a0;
+ (unsigned long long)currentTime;
+ (id)coverSheetButtonMaximumForceWithActivation:(BOOL)a0 category:(id)a1;
+ (id)feedbackGeneratorActivationDurationWithSuffix:(id)a0;
+ (id)coverSheetButtonFirstActivationDurationWithCategory:(id)a0;
+ (id)previewInteractionPopCount;
+ (id)recentsInputViewNewEntryCount;
+ (id)feedbackEnginePrewarmDurationWithSuffix:(id)a0;
+ (id)controlTapCountWithCategory:(id)a0 suffix:(id)a1;
+ (id)scrubberUsageCount;
+ (id)feedbackGeneratorActivationTimeOutCountWithSuffix:(id)a0;
+ (id)previewInteractionTapCount;
+ (id)recentsInputViewNumberOfItems;
+ (id)previewInteractionPeekForce;
+ (id)controlValueChangeEmittedCountWithCategory:(id)a0 suffix:(id)a1;
+ (id)maxForce;
+ (id)feedbackGeneratorPlayCountWithSuffix:(id)a0;
+ (id)previewInteractionPopForce;
+ (id)previewInteractionPeekCount;
+ (id)scrollBounceCount;
+ (id)coverSheetButtonInteractionDurationWithCategory:(id)a0;
+ (id)feedbackGeneratorPreparationCountWithSuffix:(id)a0;

- (id)init;
- (id)initWithDomain:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)_setValue:(long long)a0;
- (id)_key;
- (void)_addChildStatistic:(id)a0;
- (void)_incrementValueBy:(long long)a0;
- (void)_recordDistributionTime:(unsigned long long)a0;
- (void)_recordDistributionValue:(double)a0;
- (void)_removeChildStatistic:(id)a0;
- (void)_resetDistribution;
- (void)_resetDistributionToValue:(double)a0;
- (void)_resetValue;
- (BOOL)_shouldSample;
- (id)initWithDomain:(id)a0 identifierReporting:(long long)a1;
- (void)randomizeSampleValue;

@end
