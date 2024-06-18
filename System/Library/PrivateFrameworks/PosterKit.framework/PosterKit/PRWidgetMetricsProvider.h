@interface PRWidgetMetricsProvider : NSObject

+ (id)sharedInstance;

- (id)_complicationCircularMetrics;
- (id)_complicationInlineMetrics;
- (id)_complicationRectangularMetrics;
- (id)previewMetricsSpecificationForDeviceContext:(id)a0 displayContext:(id)a1 bundleIdentifier:(id)a2;
- (id)previewMetricsSpecificationForBundleIdentifier:(id)a0;
- (double)_insetScreenWidth;
- (id)lockScreenWidgetMetricsSpecifications;
- (id)_transparentMediumMetrics;
- (long long)_complicationFontStyle;
- (id)systemMetricsForWidget:(id)a0;

@end
