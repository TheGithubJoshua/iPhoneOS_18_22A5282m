@class NSString, FCNetworkBehaviorMonitor;

@interface FCCKContentDatabase : NSObject

@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) BOOL isProductionEnvironment;
@property (readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (readonly, nonatomic) BOOL shouldUseCloudd;
@property (nonatomic) BOOL shouldUseSecureConnectionForCKAssetURLs;
@property (nonatomic) BOOL shouldBypassCDNForCKAssetURLs;
@property (nonatomic) double maximumRetryAfterForCK;

- (id)init;
- (void)updateAssetURLHostIfNeededWithComponents:(id)a0;
- (void)addOperation:(id)a0;
- (id)permanentURLForRecordID:(id)a0 field:(long long)a1;
- (id)initWithContextConfiguration:(id)a0 networkBehaviorMonitor:(id)a1;
- (void).cxx_destruct;
- (id)initWithContainerIdentifier:(id)a0 productionEnvironment:(BOOL)a1 networkBehaviorMonitor:(id)a2;
- (id)permanentURLForRecordID:(id)a0 field:(long long)a1 useSecureConnection:(BOOL)a2;

@end
