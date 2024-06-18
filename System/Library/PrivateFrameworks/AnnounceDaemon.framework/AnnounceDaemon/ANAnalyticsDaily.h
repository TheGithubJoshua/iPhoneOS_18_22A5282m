@class ANAnalyticsStorage;
@protocol ANBackgroundActivityProtocol, ANAnalyticsDailyHomesProvider, ANDefaultsProtocol, ANAnalyticsDailyMessagingProtocol, ANAnalyticsDailyDelegate;

@interface ANAnalyticsDaily : NSObject <ANAnalyticsDailyProtocol>

@property (retain, nonatomic) id<ANBackgroundActivityProtocol> backgroundActivity;
@property (retain, nonatomic) id<ANDefaultsProtocol> defaults;
@property (readonly, nonatomic) ANAnalyticsStorage *eventStorage;
@property (retain, nonatomic) id<ANAnalyticsDailyHomesProvider> homesProvider;
@property (retain, nonatomic) id<ANAnalyticsDailyMessagingProtocol> messagingConnection;
@property (weak, nonatomic) id<ANAnalyticsDailyDelegate> delegate;

- (void)_cleanup;
- (id)init;
- (void)_collectPayload:(id /* block */)a0;
- (void)announcementSent:(id)a0 inHome:(id)a1;
- (void)_collectForHome:(id)a0 homes:(id)a1;
- (BOOL)_isCoordinationDevice;
- (void)recordReachableHomes:(id)a0;
- (void)_collectForAnnouncementsInHome:(id)a0 completion:(id /* block */)a1;
- (void)_collectForAnnounce:(id)a0;
- (void)start;
- (void)_recordExecutionTime;
- (void)_registerRapportDailyRequest;
- (void)_executeBackgroundActivity:(id /* block */)a0;
- (void)_reportEventStorage;
- (id)_stringForDeferredResult:(long long)a0;
- (void).cxx_destruct;
- (id)initWithBackgroundActivity:(id)a0 defaults:(id)a1 homesProvider:(id)a2 messagingConnection:(id)a3;
- (id)_dailyResponse;
- (void)_resetDailyAnnouncements;

@end
