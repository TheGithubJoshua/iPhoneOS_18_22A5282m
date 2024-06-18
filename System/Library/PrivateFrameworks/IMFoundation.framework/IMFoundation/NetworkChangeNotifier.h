@class NSString, NSArray, IMConnectionMonitor;

@interface NetworkChangeNotifier : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate>

@property (nonatomic) struct __SCDynamicStore { } *store;
@property (nonatomic) BOOL lastPostedNetworkUp;
@property (retain, nonatomic) IMConnectionMonitor *connectionMonitor;
@property (retain, nonatomic) NSString *myIP;
@property (retain, nonatomic) NSArray *myIPs;
@property (readonly, nonatomic) BOOL isNetworkUp;
@property (readonly, nonatomic) NSString *myGatewayAddress;
@property (readonly, nonatomic) NSString *myIPAddress;
@property (readonly, nonatomic) NSArray *myIPAddresses;
@property (readonly, nonatomic) struct __SCDynamicStore { } *getDynamicStore;

+ (void)disableNotifications;
+ (id)sharedInstance;
+ (BOOL)enableNotifications;

- (void)systemWillSleep;
- (id)init;
- (void)systemDidWake;
- (id)primaryInterfaceName;
- (BOOL)isPrimaryCellular;
- (void).cxx_destruct;
- (int)linkQualityValueForInterface:(id)a0;
- (void)connectionMonitorDidUpdate:(id)a0;
- (void)dealloc;
- (void)_clearIPCache;
- (int)linkQualityValueForInterfaceType:(unsigned long long)a0;
- (BOOL)_listenForChanges;
- (unsigned long long)linkQualityForInterfaceType:(unsigned long long)a0;

@end
