@class CADisplay, NSString, NSArray, NSUUID, CBCAManager, NSMutableArray;
@protocol CBContainerModuleProtocol, CBHIDServiceProtocol, CBContainerProtocol, NightShiftSupportProtocol, CBBrightnessProxy;

@interface CBDisplayContaineriOS : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol, CBStatusInfoProtocol, CBDisplayModeProtocol> {
    NSMutableArray *_relevantServices;
    NSMutableArray *_modules;
    NSArray *_allowlist;
    NSUUID *_displayContainerUUID;
    NSMutableArray *_missedProperties;
    NSMutableArray *_missedKeys;
    id<CBContainerModuleProtocol> _displayControlModule;
    id<CBContainerModuleProtocol, CBHIDServiceProtocol> _autoBrightnessModule;
    id<CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol> _harmonyContainer;
    id<CBContainerModuleProtocol, CBHIDServiceProtocol> _edrControlModule;
    id<CBContainerModuleProtocol> _AODModule;
    id<CBContainerModuleProtocol> _SliderCommitTelemetryModule;
    unsigned int _displayService;
    BOOL _running;
    BOOL _builtIn;
    BOOL _isExternal;
    BOOL _alsServiceReady;
    unsigned long long _displayID;
    unsigned long long _registryID;
    NSString *_description;
    CADisplay *_display;
    id<CBBrightnessProxy> _brtCtl;
    unsigned int _armBacklightDisplayService;
    struct IONotificationPort { } *_displayArrivalNotificationPort;
    unsigned int _displayArrivalIterator;
    unsigned int _displayRemovalIterator;
    CBCAManager *_displayCAManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyPropertyForKey:(id)a0;
- (BOOL)handleCBBrtCtlDisplayContainerStart;
- (BOOL)isReady;
- (void)registerNotificationBlock:(id /* block */)a0;
- (id)copyPropertyInternalForKey:(id)a0;
- (id)initWithCADisplay:(id)a0;
- (void)setPreference:(id)a0 forKey:(id)a1 user:(id)a2;
- (BOOL)setPropertyNoQueue:(id)a0 forKey:(id)a1;
- (void)stop;
- (BOOL)matchDisplayWithHidService:(struct __IOHIDServiceClient { } *)a0;
- (void)tearDownInternalModules;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)handleDisplayArrival:(unsigned int)a0;
- (BOOL)handleDisplayModeUpdate:(id)a0;
- (id)className;
- (BOOL)setupInternalModules;
- (BOOL)createAndAddSliderCommitTelemetryModule;
- (void)handlePresetChange:(id)a0;
- (BOOL)start;
- (id)initWithBacklightService:(unsigned int)a0;
- (id)copyPreferenceForKey:(id)a0 user:(id)a1;
- (void)setNightShiftFactorDictionary:(id)a0;
- (id)copyIdentifiers;
- (void)sendNotificationForKey:(id)a0 andValue:(id)a1;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)initWithCBBrtControl:(id)a0;
- (id)copyStatusInfo;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)setupInternalBrtCtlModules;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (void)dealloc;
- (BOOL)handleCBDisplayContainerStart;
- (void)setColorMitigations;
- (BOOL)findBacklight;
- (void)unregisterNotificationBlock;
- (BOOL)initialiseHIDDisplay;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1 from:(id)a2;

@end
