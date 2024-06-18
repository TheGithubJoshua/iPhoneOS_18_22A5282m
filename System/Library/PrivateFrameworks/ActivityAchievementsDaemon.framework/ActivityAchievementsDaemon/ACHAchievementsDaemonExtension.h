@class NSString, ACHMobileAssetProvider;

@interface ACHAchievementsDaemonExtension : NSObject <HDHealthDaemonExtension, HDHealthDaemonReadyObserver, HDCacheDeleteProvider> {
    ACHMobileAssetProvider *_mobileAssetProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDaemon:(id)a0 mobileAssetProvider:(id)a1;
- (long long)purgeSpaceForUrgency:(int)a0;
- (void)daemonReady:(id)a0;
- (void).cxx_destruct;
- (long long)purgeableSpaceForUrgency:(int)a0;

@end
