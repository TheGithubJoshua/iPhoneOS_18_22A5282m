@class NSSet, NSDictionary, NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SSMetricsConfiguration : NSObject {
    NSSet *_blacklistedEvents;
    NSDictionary *_config;
    BOOL _disabled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableSet *_cookieFieldsUnion;
    NSMutableDictionary *_eventFieldsUnion;
    NSDictionary *_fields;
    int _internalSettingsToken;
    id _reportingFrequencyOverride;
    BOOL _sendDisabled;
}

@property (readonly, nonatomic) NSDictionary *fieldsMap;
@property (retain, nonatomic) SSMetricsConfiguration *childConfiguration;
@property (nonatomic) BOOL disableEventDecoration;

+ (id)_reportingFrequencyOverride;
+ (void)getReportingFrequencyOverrideWithCompletionBlock:(id /* block */)a0;
+ (void)setReportingFrequencyOverride:(id)a0;

- (id)compoundStringWithElements:(id)a0;
- (id)cookieFields;
- (id)initWithGlobalConfiguration:(id)a0;
- (id)tokenStringWithElements:(id)a0;
- (void)_setReportingFrequencyOverride:(id)a0;
- (BOOL)isDisabled;
- (id)initWithStorePlatformData:(id)a0;
- (id)eventFields;
- (id)reportingURLString;
- (BOOL)_configBooleanForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)valueForConfigurationKey:(id)a0;
- (void).cxx_destruct;
- (id)blacklistedEventFields;
- (BOOL)_decorateITMLEvents;
- (BOOL)isEventTypeBlacklisted:(id)a0;
- (id)pingURLs;
- (id)_initSSMetricsEventConfiguration;
- (void)dealloc;
- (BOOL)isSendDisabled;
- (double)reportingFrequency;

@end
