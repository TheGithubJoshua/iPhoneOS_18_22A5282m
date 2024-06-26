@class NEVPNConnectivityManager, PSUIVPNStateSnapshot, NSObject;
@protocol OS_dispatch_queue, PSUIVPNSpecifierGeneratorDelegate;

@interface PSUIVPNSpecifierGenerator : NSObject <NEVPNConnectivityManagerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_loadingQueue;
@property (retain, nonatomic) PSUIVPNStateSnapshot *_currentSnapshot;
@property (retain, nonatomic) NEVPNConnectivityManager *_vpnConnectivityManager;
@property (weak, nonatomic) id<PSUIVPNSpecifierGeneratorDelegate> delegate;

- (void)connectivityManagerDidChange:(id)a0;
- (id)specifier;
- (void)lazyLoadBundle:(id)a0;
- (void)reloadVPNStateWithCompletion:(id /* block */)a0;
- (id)initWithLoadingQueue:(id)a0;
- (void)_setVPNStatus:(id)a0 specifier:(id)a1;
- (id)_vpnStatus:(id)a0;
- (id)_vpnStatusString:(id)a0;
- (id)vpnSpecifierForVisibilityStyleLink;
- (id)vpnSpecifierForVisibilityStyleToggle;
- (void).cxx_destruct;
- (void)_reloadVPNStateWithCompletion:(id /* block */)a0;

@end
