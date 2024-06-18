@class BMStreamsAccessService, BMComputeXPCPublisherServer, NSString, BMDSLGraphValidator, BMComputeSourceServer, NSObject, BMBookmarkStorage;
@protocol OS_dispatch_queue;

@interface BMDaemon : NSObject <BMComputeSource> {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (class, readonly) BMDSLGraphValidator *DSLValidator;

@property (readonly, nonatomic) BMBookmarkStorage *bookmarkStorage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BMComputeSourceServer *sourceServer;
@property (readonly, nonatomic) BMComputeXPCPublisherServer *publisherServer;
@property (readonly, nonatomic) BMStreamsAccessService *legacyAccessService;
@property (readonly, nonatomic) BMStreamsAccessService *userAccessService;
@property (readonly, nonatomic) BMStreamsAccessService *systemAccessService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerXPCActivities;
+ (id)computePublisherStreamName;
+ (id)new;
+ (id)loadDKStreamNameToTTL;
+ (void)_handlePrivacyResetNotification;
+ (void)pruneRestrictedStreamsInDomain:(unsigned long long)a0;
+ (void)prunePrivateStreamDirectory:(id)a0 maxAge:(double)a1 maxStreamSize:(unsigned long long)a2;
+ (void)donateLaunchEvents;
+ (BOOL)isAgent;
+ (id)computeSourceServiceName;
+ (id)computePublisherServiceName;
+ (void)pruneRestrictedStreams;

- (id)init;
- (void).cxx_destruct;
- (void)setUpNotificationHandler;
- (id)initWithQueue:(id)a0;
- (void)sendEventWithStreamIdentifier:(id)a0 timestamp:(id)a1 storeEvent:(id)a2;
- (id)fetchBookmarkWithSubscription:(id)a0 upToTimestamp:(id)a1 success:(BOOL *)a2;

@end
