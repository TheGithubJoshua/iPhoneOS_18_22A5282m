@class NSNumber;

@interface _SBIdleTimerGlobalNumericSettingMonitor : _SBIdleTimerGlobalSettingMonitor {
    NSNumber *_settingCache;
    id /* block */ _fetchSettingFromSource;
}

@property (readonly, nonatomic) NSNumber *numericValue;

- (id)formattedValue;
- (BOOL)_updateCache;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLabel:(id)a0 delegate:(id)a1 updatingForNotification:(id)a2 fetchingWith:(id /* block */)a3;
- (void)_settingChanged:(id)a0;

@end
