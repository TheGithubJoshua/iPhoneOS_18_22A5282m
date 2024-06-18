@class NSString, CPLNetworkState, NSObject, RadiosPreferences;
@protocol OS_dispatch_queue, CPLNetworkWatcherDelegate, OS_nw_path_monitor;

@interface CPLNetworkWatcher : NSObject <RadiosPreferencesDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_nw_path_monitor> *_monitor;
    struct network_usage_policy_client_s { } *_networkPolicyClient;
    RadiosPreferences *_radiosPreferences;
}

@property (readonly, nonatomic) NSString *endPoint;
@property (readonly, nonatomic) CPLNetworkState *networkState;
@property (weak, nonatomic) id<CPLNetworkWatcherDelegate> delegate;

- (void)_updateCellularPolicyFromPolicies:(id)a0;
- (BOOL)_isRestrictedPath:(id)a0 policies:(id)a1;
- (void)airplaneModeChanged;
- (void)stop;
- (void)start;
- (void)_updateNetworkState:(id)a0;
- (void).cxx_destruct;
- (void)_getCellularPolicyWithClient:(struct network_usage_policy_client_s { } *)a0;
- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)_updateAirplaneMode;
- (void)_updateCellularPolicy:(id)a0;

@end
