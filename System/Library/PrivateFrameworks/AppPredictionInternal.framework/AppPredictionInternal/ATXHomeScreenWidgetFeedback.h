@class _ATXAppLaunchCategoricalHistogram;

@interface ATXHomeScreenWidgetFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram *_histogram;
}

- (id)init;
- (void)addEventForWidgetBundleId:(id)a0 type:(unsigned long long)a1;
- (double)tapEngagementRateForWidgetBundleId:(id)a0;
- (id)categoryStringForFeedbackType:(unsigned long long)a0;
- (id)initWithWidgetFeedbackHistogram:(id)a0;
- (void).cxx_destruct;
- (double)eventCountForWidgetBundleId:(id)a0 type:(unsigned long long)a1;
- (void)addEventForWidgetBundleId:(id)a0 type:(unsigned long long)a1 weight:(float)a2;
- (double)pseudoTapEngagementRateForWidgetBundleId:(id)a0;

@end
