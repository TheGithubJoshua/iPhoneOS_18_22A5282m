@class NSString;

@interface TRILaunchDaemonActivityDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long supportedTaskCapabilities;

+ (id)clientTriggeredCellularDescriptor;
+ (id)inexpensiveNetworkingDescriptor;
+ (id)clientTriggeredWifiDescriptor;
+ (id)launchDaemonActivityDescriptorWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;
+ (id)taskQueueDescriptor;
+ (id)clientHotfixWifiDescriptor;
+ (id)retryFailuresDescriptor;
+ (id)postUpgradeDescriptorRequireInexpensiveNetworking;
+ (id)cellularDescriptor;
+ (id)postUpgradeDescriptor;
+ (id)setupAssistantFetchDescriptor;
+ (id)maintenanceWorkDescriptor;
+ (id)clientHotfixCellularAllowBatteryDescriptor;

- (id)init;
- (id)initWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;
- (id)copyWithReplacementSupportedTaskCapabilities:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)copyWithReplacementName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToLaunchDaemonActivityDescriptor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
