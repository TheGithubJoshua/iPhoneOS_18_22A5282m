@class ITMReachability, NSHashTable, RadiosPreferences, NSObject;
@protocol OS_dispatch_queue;

@interface MTReachability : NSObject <RadiosPreferencesDelegate>

@property (retain, nonatomic) ITMReachability *reachability;
@property (nonatomic) long long networkStatus;
@property (nonatomic, getter=isGlobalCellularEnabled) BOOL globalCellularEnabled;
@property (retain, nonatomic) NSHashTable *callbacks;
@property (nonatomic, getter=isReachable) BOOL reachable;
@property (retain, nonatomic) RadiosPreferences *radiosPreferences;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cellularQueue;
@property (nonatomic) BOOL hasDeterminedActualGlobalCellularState;
@property (readonly, nonatomic, getter=isAirplaneModeEnabled) BOOL airplaneModeEnabled;
@property (readonly, nonatomic, getter=isReachableViaCellular) BOOL reachableViaCellular;
@property (readonly, nonatomic, getter=isReachableViaWifi) BOOL reachableViaWifi;
@property (readonly, nonatomic, getter=isPodcastsCellularDownloadsEnabled) BOOL podcastsCellularDownloadsEnabled;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)airplaneModeChanged;
- (id)copy;
- (void).cxx_destruct;
- (void)_updateReachability;
- (void)dealloc;
- (void)_updateAirplaneMode;
- (void)addObserver:(id)a0;
- (void)_applicationDidBecomeActive;
- (unsigned long long)reasonForNoInternet;
- (void)_showAlertForInternetUnavailableReason:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_updateGlobalCellularWithCompletion:(id /* block */)a0;
- (id)reasonTextForNoInternet;
- (BOOL)showInternetUnreachableDialog;
- (BOOL)showInternetUnreachableDialogWithAcknowledmentBlock:(id /* block */)a0;

@end
