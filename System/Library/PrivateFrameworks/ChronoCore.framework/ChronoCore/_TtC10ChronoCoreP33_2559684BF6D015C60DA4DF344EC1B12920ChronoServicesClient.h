@interface _TtC10ChronoCoreP33_2559684BF6D015C60DA4DF344EC1B12920ChronoServicesClient : NSObject <CHSChronoWidgetServiceServerInterface> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ timelineService;
    void /* unknown type, empty encoding */ taskService;
    void /* unknown type, empty encoding */ descriptorService;
    void /* unknown type, empty encoding */ extensionService;
    void /* unknown type, empty encoding */ configurationService;
    void /* unknown type, empty encoding */ keybagStateProvider;
    void /* unknown type, empty encoding */ powerlogSuggestionService;
    void /* unknown type, empty encoding */ duetService;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ widgetHostIdentifiers;
    void /* unknown type, empty encoding */ tasks;
    void /* unknown type, empty encoding */ widgetFetchSubscriptions;
    void /* unknown type, empty encoding */ widgetTimelineLoadSubscriptions;
    void /* unknown type, empty encoding */ widgetTimelineLoadActionResponders;
}

- (id)init;
- (void)descriptors:(id /* block */)a0;
- (void)loadSuggestedWidget:(id)a0 metrics:(id)a1 stackIdentifier:(id)a2 reason:(id)a3 completion:(id /* block */)a4;
- (void)setWidgetConfiguration:(id)a0 forWidgetHostWithIdentifier:(id)a1;
- (void)suggestionBudgetsForStackIdentifiers:(id)a0 completion:(id /* block */)a1;
- (id)widgetEnvironmentDataForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)removeWidgetHostWithIdentifier:(id)a0;
- (void)allWidgetConfigurationsByHostWithCompletion:(id /* block */)a0;
- (id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)a0 info:(id)a1;
- (void)cacheDescriptorsForContainerBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)reloadTimeline:(id)a0 error:(id *)a1;
- (void)flushPowerlog;

@end
