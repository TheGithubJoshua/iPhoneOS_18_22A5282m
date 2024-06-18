@class IDSService, NSString;

@interface CKSettingSMSRelayController : PSListController <IDSServiceDelegate>

@property (retain, nonatomic) IDSService *relayService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authorizedSMSRelayDevices;
+ (BOOL)deviceIsAuthorized:(id)a0;
+ (unsigned long long)numberOfActiveDevices;
+ (BOOL)shouldShowSMSRelaySettings;

- (id)specifiers;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)systemApplicationWillEnterForeground;
- (id)getDeviceActive:(id)a0;
- (void)setDeviceActive:(id)a0 specifier:(id)a1;

@end
