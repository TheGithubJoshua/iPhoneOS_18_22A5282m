@class APSConnection, NSString, ADLoggingProfileMonitor;
@protocol NSObject;

@interface ADAdTrackingSchedulingManager : NSObject <APSConnectionDelegate>

@property (retain, nonatomic) ADLoggingProfileMonitor *loggingProfileMonitor;
@property (retain, nonatomic) id<NSObject> storeFrontNotifyToken;
@property (retain, nonatomic) id<NSObject> accountChangedNotifyToken;
@property (retain, nonatomic) APSConnection *pushConnection;
@property (nonatomic) BOOL isConfigRequestInFlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (id)currentBundleID;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)migratePersonalizedAdsOnboarding;
- (BOOL)isSearchOrSegmentEnabled;
- (void)refreshConfiguration:(id /* block */)a0;
- (void)migratePersonalizedAdsFromLAT;
- (void)pushEnable;
- (void)forceExpiration;
- (void)handleAccountChange;
- (void).cxx_destruct;
- (BOOL)_shouldSaveConfig;
- (void)registerForLockStateNotification;
- (BOOL)isNewsOrStocksEnabledLocality;
- (id)retrieveNewsRecord:(id *)a0;
- (void)handleConfiguration;
- (void)dealloc;
- (long long)latestPersonalizedConsentVersion;
- (BOOL)isAdEnabledLocality;
- (BOOL)isSearchAdsEnabled;
- (void)pushDisable;

@end
