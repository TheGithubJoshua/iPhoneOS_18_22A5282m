@class PSUICoreTelephonyDataCache, PSSpecifier, PSSimStatusCache, CTServiceDescriptor, PSUICellularPlanManagerCache;

@interface PSUICellularDataOptionsController : PSListController {
    struct __CTServerConnection { } *_serverConnection;
    PSSpecifier *_parentSpecifier;
    CTServiceDescriptor *_serviceDescriptor;
}

@property (retain, nonatomic) PSSimStatusCache *simStatusCache;
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache;
@property (retain, nonatomic) PSUICoreTelephonyDataCache *dataCache;

- (id)specifiers;
- (id)init;
- (void)airplaneModeChanged;
- (id)getLogger;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getDataRoamingStatusForService:(id)a0;
- (id)getCDMARoamingStatus:(id)a0;
- (id)getDataRoamingStatus:(id)a0;
- (id)initWithParentSpecifier:(id)a0;
- (id)initWithParentSpecifier:(id)a0 simStatusCache:(id)a1 planManagerCache:(id)a2 dataCache:(id)a3;
- (void)roamingOptionsDidChange;
- (id)roamingSettingsDescription:(id)a0;
- (id)roamingSpecifiers;
- (void)setCDMARoamingEnabled:(id)a0 specifier:(id)a1;
- (void)setDataRoamingEnabled:(id)a0 specifier:(id)a1;
- (void)setDataRoamingEnabledForService:(id)a0 specifier:(id)a1;

@end
