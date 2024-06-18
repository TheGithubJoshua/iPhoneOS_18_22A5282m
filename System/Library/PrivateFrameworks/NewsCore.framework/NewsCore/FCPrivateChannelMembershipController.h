@class NSString, NSDictionary, NSMutableSet;

@interface FCPrivateChannelMembershipController : FCPrivateDataController <FCAppActivityObserving> {
    NSDictionary *_membershipsByChannelID;
    NSMutableSet *_membershipReferences;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)desiredKeys;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (BOOL)requiresPushNotificationSupport;
+ (BOOL)requiresBatchedSync;
+ (unsigned long long)localStoreVersion;
+ (id)backingRecordZoneIDs;
+ (id)commandStoreFileName;
+ (id)backingRecordIDs;
+ (long long)commandQueueUrgency;
+ (id)localStoreFilename;
+ (BOOL)requiresHighPriorityFirstSync;

- (void)removeObserver:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (BOOL)isMemberOfChannelID:(id)a0;
- (BOOL)hasMemberships;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)loadLocalCachesFromStore;
- (void)isAllowedToSeeArticleID:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)feedDescriptorForDraftFeedForChannel:(id)a0;
- (void)isAllowedToSeeIssueID:(id)a0 completionBlock:(id /* block */)a1;
- (id)membershipChannelIDs;
- (void)dealloc;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)addObserver:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (BOOL)isAllowedToSeeDraftsForChannelID:(id)a0;

@end
