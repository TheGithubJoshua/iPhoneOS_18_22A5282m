@class NSHashTable;
@protocol AFAnnouncementRequestCapabilityProviding;

@interface AFSiriAnnouncementRequestCapabilityManager : NSObject <AFAnnouncementRequestCapabilityProvidingDelegate> {
    NSHashTable *_observers;
    id<AFAnnouncementRequestCapabilityProviding> _capabilityProvider;
    long long _platform;
}

+ (id)_candidateAnnounceNotificationTypesFromApp:(id)a0 withIntentIDs:(id)a1 notificationContentType:(id)a2 onPlatform:(long long)a3;
+ (Class)_classForPlatform:(long long)a0;
+ (long long)notificationAnnouncementTypeForNotificationFromApp:(id)a0 withIntentIDs:(id)a1 notificationContent:(id)a2 onPlatform:(long long)a3;
+ (BOOL)_supportsAnnouncementType:(unsigned long long)a0 forSupportedIntents:(id)a1 forBundleId:(id)a2 onPlatform:(long long)a3;
+ (id)_requiredBundleIDsForNotificationAnnouncementType:(long long)a0;
+ (id)supportedAnnouncementTypesForBundleId:(id)a0 onPlatform:(long long)a1;

- (void)removeObserver:(id)a0;
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(id /* block */)a0;
- (void)provider:(id)a0 eligibleAnnouncementRequestTypesChanged:(unsigned long long)a1;
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)provider:(id)a0 availableAnnouncementRequestTypesChanged:(unsigned long long)a1;
- (id)initWithPlatform:(long long)a0;
- (void)addObserver:(id)a0;

@end
