@class NSArray;

@interface ATXSuggestedPagesWidgetAggregator : NSObject <ATXSuggestedPagesWidgetDataSource> {
    NSArray *_sources;
}

- (id)init;
- (id)initWithSources:(id)a0;
- (void).cxx_destruct;
- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;

@end
