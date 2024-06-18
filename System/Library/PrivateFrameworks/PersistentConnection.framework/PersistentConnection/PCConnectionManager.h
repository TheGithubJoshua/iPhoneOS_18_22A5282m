@class PCPersistentTimer, NSString, PCKeepAliveState, NSRunLoop, NSObject;
@protocol OS_os_log, PCConnectionManagerDelegate, PCGrowthAlgorithm, OS_dispatch_queue;

@interface PCConnectionManager : NSObject <PCCarrierBundleHelperDelegate, PCInterfaceMonitorDelegate> {
    int _connectionClass;
    id<PCConnectionManagerDelegate> _delegate;
    NSString *_serviceIdentifier;
    NSString *_duetIdentifier;
    int _prefsStyle;
    int _onlyAllowedStyle;
    BOOL _onlyAllowedStyleSet;
    unsigned long long _guidancePriority;
    NSRunLoop *_delegateRunLoop;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_os_log> *_logObject;
    id<PCGrowthAlgorithm> _wwanGrowthAlgorithm[2];
    id<PCGrowthAlgorithm> _wifiGrowthAlgorithm[2];
    id<PCGrowthAlgorithm> _lastScheduledGrowthAlgorithm;
    PCPersistentTimer *_intervalTimer;
    PCPersistentTimer *_reconnectWakeTimer;
    PCPersistentTimer *_delayTimer;
    unsigned int _powerAssertionID;
    double _onTimeKeepAliveTime;
    double _lastResumeTime;
    double _lastStopTime;
    double _lastStartTime;
    double _lastReachableTime;
    double _lastReconnectTime;
    double _lastScheduledIntervalTime;
    double _timerGuidance;
    double _lastElapsedInterval;
    BOOL _operatorMinimumIntervalFallbackAllowed;
    unsigned int _reconnectIteration;
    int _timerGuidanceToken;
    int _pushIsConnectedToken;
    int _prefsChangedToken;
    double _defaultPollingInterval;
    double _pollingIntervalOverride;
    BOOL _pollingIntervalOverrideSet;
    BOOL _hasStarted;
    BOOL _isRunning;
    BOOL _inCallback;
    BOOL _isInReconnectMode;
    BOOL _reconnectWithKeepAliveDelay;
    BOOL _forceManualWhenRoaming;
    BOOL _enableNonCellularConnections;
    BOOL _isReachable;
    BOOL _disableEarlyFire;
    BOOL _deviceUnderGoodCondition;
    int _currentGrowthStage;
    id _duetContextRegistration;
    int _currentAddressFamily;
}

@property (weak, nonatomic) id<PCConnectionManagerDelegate> delegate;
@property (copy, nonatomic) NSString *duetIdentifier;
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, nonatomic) double currentKeepAliveInterval;
@property (nonatomic) double minimumKeepAliveInterval;
@property double maximumKeepAliveInterval;
@property (readonly, nonatomic) PCKeepAliveState *currentKeepAliveState;
@property (nonatomic) double serverStatsMaxKeepAliveInterval;
@property (nonatomic) double serverStatsExpectedKeepAliveInterval;
@property (nonatomic) double serverStatsMinKeepAliveInterval;
@property (nonatomic) BOOL usingServerStatsAggressively;
@property (readonly, nonatomic) unsigned long long countOfGrowthActions;
@property (nonatomic) BOOL disableEarlyFire;
@property (nonatomic) BOOL minimumIntervalFallbackEnabled;
@property (nonatomic) long long interfaceIdentifier;
@property (nonatomic) BOOL alwaysWantsInterfaceChangeCallbacks;
@property (nonatomic) BOOL powerOptimizationsForExpensiveNetworkingDisabled;
@property (nonatomic) int currentAddressFamily;
@property (readonly, nonatomic) int lastProcessedAction;
@property (nonatomic) double keepAliveGracePeriod;
@property (nonatomic) double nonCellularEarlyFireConstantInterval;
@property (readonly, nonatomic) double pollingInterval;
@property (readonly, nonatomic) int currentGrowthStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isCachedKeepAliveIntervalStillValid:(double)a0 date:(id)a1;
+ (Class)growthAlgorithmClass;
+ (id)_keepAliveCachePath;
+ (id)intervalCacheDictionaries;

- (int)currentStyle;
- (void)setOnlyAllowedStyle:(int)a0;
- (void)stopManager;
- (void)stopAndResetManager;
- (void)_clearTimers;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)a0;
- (void)interfaceManagerInternetReachabilityChanged:(id)a0;
- (void)_delayTimerFired;
- (void)startManager;
- (void)_resolveStateWithAction:(int)a0;
- (id)_growthAlgorithmOnInterface:(long long)a0;
- (void)_setupTimerForPollForAdjustment:(BOOL)a0;
- (void)_setupKeepAliveForReconnect;
- (void)_adjustInterfaceAssertions;
- (void)interfaceLinkQualityChanged:(id)a0 previousLinkQuality:(int)a1;
- (void)_handleDeviceConditionChangeCallback;
- (id)initWithConnectionClass:(int)a0 delegate:(id)a1 delegateQueue:(id)a2 serviceIdentifier:(id)a3;
- (void)_preferencesChanged;
- (void)_setTimerGuidance:(double)a0;
- (void)_callDelegateWithEventAndContext:(id)a0;
- (void)_intervalTimerFired;
- (void)_setMaximumKeepAliveInterval:(double)a0 onInterface:(long long)a1;
- (void)setEnableNonCellularConnections:(BOOL)a0;
- (void)carrierBundleDidChange;
- (void)setKeepAliveOverrideOnInterface:(long long)a0 interval:(double)a1 timeout:(double)a2;
- (BOOL)_hasBudgetRemaining;
- (void)_adjustMinimumIntervalFallback;
- (void)_setMinimumKeepAliveInterval:(double)a0 onInterface:(long long)a1;
- (void).cxx_destruct;
- (BOOL)shouldClientScheduleReconnectDueToFailure;
- (void)_saveWWANKeepAliveInterval;
- (id)_stringForAction:(int)a0;
- (void)_adjustPollTimerIfNecessary;
- (id)_stringForEvent:(int)a0;
- (void)_validateActionForCurrentStyle:(int)a0;
- (id)_stringForStyle:(int)a0;
- (void)_takePowerAssertionWithTimeout:(double)a0;
- (id)_currentGrowthAlgorithm;
- (BOOL)_isPushConnected;
- (id)initWithConnectionClass:(int)a0 interfaceIdentifier:(long long)a1 guidancePriority:(unsigned long long)a2 delegate:(id)a3 serviceIdentifier:(id)a4;
- (id)_stringForAddressFamily:(int)a0;
- (id)initWithConnectionClass:(int)a0 delegate:(id)a1 serviceIdentifier:(id)a2;
- (void)_releasePowerAssertion;
- (void)dealloc;
- (void)_pauseTimers;
- (void)setOperatorMinimumIntervalFallbackAllowed:(BOOL)a0;
- (void)interfaceManagerInHomeCountryStatusChanged:(id)a0;
- (id)_initWithConnectionClass:(int)a0 interfaceIdentifier:(long long)a1 guidancePriority:(unsigned long long)a2 delegate:(id)a3 delegateQueue:(id)a4 serviceIdentifier:(id)a5;
- (void)setPollingIntervalOverride:(double)a0;
- (void)_processDeviceConditionChanges;
- (void)_clearTimersReleasingPowerAssertion:(BOOL)a0;
- (BOOL)operatorMinimumIntervalFallbackAllowed;
- (void)cancelPollingIntervalOverride;
- (void)_loadPreferencesGeneratingEvent:(BOOL)a0;
- (void)_deregisterForDeviceConditionsNotifications;
- (void)resumeManagerWithAction:(int)a0 forceGrow:(BOOL)a1;
- (id)_getCachedWWANKeepAliveIntervalForAddressFamily:(int)a0;
- (void)_calloutWithEvent:(int)a0 context:(id)a1;
- (void)_setupTimerForPushWithKeepAliveInterval:(double)a0;
- (void)resumeManagerWithAction:(int)a0;
- (void)_registerForDeviceConditionsNotifications;
- (id)persistentInterfaceManager;

@end