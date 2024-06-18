@class NSDictionary;

@interface ATXTimelineRelevancePersonalizedConfig : NSObject {
    NSDictionary *_personalizedConfiguration;
}

- (id)init;
- (id)personalizedValueForParameter:(id)a0 forWidgetBundleIdentifier:(id)a1 kind:(id)a2;
- (id)_readPersonalizedConfiguration;
- (id)initWithPersonalizedConfiguration:(id)a0;
- (void).cxx_destruct;

@end
