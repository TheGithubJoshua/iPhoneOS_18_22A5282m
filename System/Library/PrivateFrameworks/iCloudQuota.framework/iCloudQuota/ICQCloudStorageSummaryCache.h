@class NSMutableDictionary;

@interface ICQCloudStorageSummaryCache : NSObject {
    NSMutableDictionary *_summaryCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    id _quotaChangeNotificationObserver;
    id _quotaInfoChangeNotificationObserver;
    id _cloudSubscriptionFeaturesObserver;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopObservingCloudSubscriptionFeaturesNotifications;
- (void)_startObservingCloudSubscriptionFeaturesNotifications;
- (void)setStorageSummary:(id)a0 forAltDSID:(id)a1;
- (void).cxx_destruct;
- (void)_cleanupCacheForPrimaryAccount;
- (void)dealloc;
- (void)_stopObservingQuotaChangeNotifications;
- (id)storageSummaryForAltDSID:(id)a0;
- (void)_startObservingQuotaChangeNotifications;

@end
