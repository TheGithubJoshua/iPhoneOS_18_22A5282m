@class NSData;

@interface SiriAnalyticsPreferences : NSObject {
    struct __CFString { } *_domain;
}

@property (nonatomic) NSData *preprocessorBookmark;
@property (nonatomic) unsigned long long unifiedStreamMaxSize;
@property (readonly, nonatomic) unsigned long long unifiedStreamMaxSizeOrDefault;
@property (nonatomic) double unifiedStreamMaxAge;
@property (nonatomic) double unifiedStreamMaxAgeOrDefault;

- (id)init;
- (id)initWithPreferencesDomain:(struct __CFString { } *)a0;
- (void)synchronize;
- (id)pluginStateForBundleIdentifier:(id)a0;
- (BOOL)tailMessagesToOSLogEnabled;
- (void)setPluginsState:(id)a0;
- (id)pluginsState;
- (void)setPluginState:(id)a0 forBundleIdentifier:(id)a1;

@end
