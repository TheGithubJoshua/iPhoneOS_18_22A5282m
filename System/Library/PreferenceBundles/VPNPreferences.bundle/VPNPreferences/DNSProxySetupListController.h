@class NSUUID, NSString, NSDictionary;

@interface DNSProxySetupListController : PSListController

@property unsigned long long vpnGrade;
@property (retain) NSUUID *serviceID;
@property (retain) NSString *displayName;
@property (retain) NSString *appName;
@property (retain) NSString *organization;
@property (retain) NSDictionary *includedBundleIDs;

- (id)specifiers;
- (id)init;
- (id)connection;
- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)appWillEnterForeground:(id)a0;
- (id)bundle;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (id)displayNameForSpecifier:(id)a0;
- (id)getDescriptionForApp:(id)a0;
- (void)setStateForServiceID:(id)a0;
- (id)statusForConnection:(id)a0;
- (void)vpnConfigurationChanged:(id)a0;
- (id)vpnGradeNameForSpecifier:(id)a0;
- (void)vpnStatusChanged:(id)a0;

@end
