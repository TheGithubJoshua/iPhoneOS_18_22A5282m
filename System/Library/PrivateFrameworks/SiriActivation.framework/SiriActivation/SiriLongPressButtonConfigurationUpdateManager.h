@class NSMapTable, NSUserDefaults;

@interface SiriLongPressButtonConfigurationUpdateManager : NSObject {
    NSUserDefaults *_internalUserDefaults;
}

@property (nonatomic) long long currentLongPressBehavior;
@property (nonatomic) BOOL monitoringForUpdates;
@property (retain, nonatomic) NSMapTable *delegatesBySource;

- (id)userDefaults;
- (id)init;
- (void)_stopKVOMonitoring;
- (void)stopManagingConfigurationFromSource:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setupKVOMonitoring;
- (void)_addDelegate:(id)a0 forSource:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopManagingAllConfigurations;
- (void)startManagingConfigurationFromSource:(id)a0 withDelegate:(id)a1;

@end
