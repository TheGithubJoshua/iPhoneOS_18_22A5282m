@class NSDictionary;

@interface ATXInformationFeatureWeights : NSObject {
    NSDictionary *_weights;
}

- (id)init;
- (double)defaultWeightForFeatureName:(unsigned long long)a0;
- (id)widgetIdentifierForWidgetExtensionBundleId:(id)a0 widgetKind:(id)a1;
- (void).cxx_destruct;
- (double)weightForFeatureName:(unsigned long long)a0 widgetExtensionBundleId:(id)a1 widgetKind:(id)a2;

@end
