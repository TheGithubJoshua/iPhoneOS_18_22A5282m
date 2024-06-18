@class NSString, ASDServiceBroker;

@interface ASDArcadeService : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (id)defaultService;

- (id)init;
- (void)allHardwareOfferMetricsWithReplyHandler:(id /* block */)a0;
- (void)badgeCountWithReplyHandler:(id /* block */)a0;
- (void)removeAllBadgeIDsWithReplyHandler:(id /* block */)a0;
- (void)allBadgeIDsWithReplyHandler:(id /* block */)a0;
- (void)removeMetricsForBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)showUpsellForItemID:(id)a0 replyHandler:(id /* block */)a1;
- (void)allBadgeMetricsWithReplyHandler:(id /* block */)a0;
- (void)removeAllHardwareOfferIDsWithReplyHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)removeHardwareOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)allHardwareOffersIDsWithReplyHandler:(id /* block */)a0;
- (void)removeHardwareOfferMetricsForOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)hardwareOfferCountWithReplyHandler:(id /* block */)a0;
- (void)addBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)addHardwareOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)removeBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;

@end
