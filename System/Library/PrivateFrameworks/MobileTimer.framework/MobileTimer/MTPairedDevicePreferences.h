@class NPSManager;

@interface MTPairedDevicePreferences : NSObject

@property (retain, nonatomic) NPSManager *npsManager;
@property (readonly, nonatomic) BOOL pushAlertsEnabled;

+ (id)sharedInstance;

- (void)_notifyClientsOfChange;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handlePrefsChanged;
- (BOOL)_isPushAlertsEnabledInPreferences;
- (BOOL)isPushAlertsEnabled;

@end
