@class _ATXAppLaunchCategoricalHistogram;

@interface ATXAppClipsFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogram;
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogramNoDecay;
}

- (id)init;
- (double)_engagementForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (double)_overallRejectsNoDecay;
- (double)_overallAppClipsengagement;
- (id)initWithAppClipsHistogram:(id)a0 appClipsHistogramNoDecay:(id)a1;
- (void)addRejectForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (double)_rejectsForAppClipWithHeroAppPrediction:(id)a0;
- (BOOL)shouldShowAppClips;
- (void).cxx_destruct;
- (double)_overallConfirmsNoDecay;
- (double)_overallRejects;
- (double)_rejectsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (BOOL)shouldShowAppClipWithHeroAppPrediction:(id)a0;
- (double)feedbackScoreForAppClipWithHeroAppPrediction:(id)a0;
- (double)_overallConfirms;
- (double)_confirmsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (double)_engagementForAppClipWithHeroAppPrediction:(id)a0;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (double)_confirmsForAppClipWithHeroAppPrediction:(id)a0;
- (BOOL)_shouldHideAppClipForLowEngagementNoDecay:(id)a0;

@end
