@class NSString, NSDictionary;

@interface AirPortAssistantController : NSObject

@property (nonatomic) id delegate;
@property (retain) id context;
@property (retain) id viewController;
@property (retain) NSString *configuredSSID;
@property (retain) NSDictionary *unconfiguredWACDevices;

+ (BOOL)isAirPlayDevice:(id)a0;
+ (void)cancelAirPortAssistantController;
+ (BOOL)isSTAOnlyDevice:(id)a0;
+ (id)sharedInstance;
+ (BOOL)launchAUForNetwork:(id)a0 withMacAddress:(id)a1 getAUFromAppStore:(BOOL)a2 viewController:(id)a3;
+ (void)downloadAssetsCancel;
+ (id)unconfiguredDeviceID:(id)a0;
+ (id)unconfiguredDeviceName:(id)a0;
+ (BOOL)launchAUForNetwork:(id)a0 withMacAddress:(id)a1 getAUFromAppStore:(BOOL)a2;
+ (void)downloadAssetsIfNeeded;
+ (id)uniqueBaseStationName:(id)a0 withBssid:(id)a1;
+ (BOOL)isUnconfiguredDevice:(id)a0;
+ (BOOL)isHomeKitSecureWACDevice:(id)a0;
+ (id)assistantUIViewControllerWithParameters:(id)a0;
+ (BOOL)isGenericMFiAccessory:(id)a0;

- (void)dealloc;
- (void)stop2_4WiFiScan;
- (id)WACDeviceFromScanInfo:(id)a0;
- (void)assistantCompleteWithResult:(int)a0;
- (int)configureUIViewControllerWithParameters:(id)a0;
- (int)start2_4WiFiScan;
- (void)updateWACListeners;
- (void)wirelessScanDone:(id)a0;

@end
