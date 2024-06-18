@class NSString;
@protocol CRCarPlayPreferencesDelegate;

@interface CRCarPlayPreferences : NSObject <MCProfileConnectionObserver>

@property (nonatomic) BOOL cachedCarPlayAllowed;
@property (weak, nonatomic) id<CRCarPlayPreferencesDelegate> preferencesDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (BOOL)isWirelessCarPlayEnabled;
- (void)_updateCarPlayAllowed;
- (id)isCCCHeadUnitPairingOverrideEnabled;
- (BOOL)isCarPlayAllowed;
- (void).cxx_destruct;
- (id)_boolValueInCarPlayDomainForKey:(struct __CFString { } *)a0;
- (void)dealloc;
- (BOOL)_isCarPlayAllowed;
- (id)shouldAlwaysAcceptCCCHeadUnitPairing;
- (BOOL)isCarPlayCapable;

@end
