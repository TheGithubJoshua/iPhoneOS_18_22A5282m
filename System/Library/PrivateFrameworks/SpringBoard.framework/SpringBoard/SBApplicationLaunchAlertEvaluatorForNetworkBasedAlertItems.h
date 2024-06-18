@class NSString, SBAirplaneModeController, SBTelephonyManager;

@interface SBApplicationLaunchAlertEvaluatorForNetworkBasedAlertItems : NSObject <SBApplicationLaunchAlertEvaluator> {
    SBAirplaneModeController *_airplaneModeController;
    SBTelephonyManager *_telephonyManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (unsigned long long)shouldShowLaunchAlertForApplication:(id)a0;
- (id)_airplaneModeController;
- (void).cxx_destruct;
- (id)initWithAirplaneModeController:(id)a0 telephonyManager:(id)a1;
- (id)_telephonyManager;

@end
