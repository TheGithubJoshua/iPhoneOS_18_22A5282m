@class NSString, ISURLBag, NSNumber, SSURLBagContext;

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate> {
    ISURLBag *_outputBag;
}

@property (retain, nonatomic) NSNumber *accountDSID;
@property (readonly) SSURLBagContext *context;
@property (readonly) ISURLBag *URLBag;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storeFrontHeaderSuffix;
+ (id)_executedNetworkRequests;
+ (id)_networkSynchronyQueue;
+ (id)storeFrontHeaderSuffixForBundleIdentifier:(id)a0;
+ (void)_addStoreFrontHeaderSuffix:(id)a0 forBundleIdentifier:(id)a1;
+ (void)decrementNetworkCounterForBagContext:(id)a0;
+ (void)incrementNetworkCounterForBagContext:(id)a0;
+ (id)_networkCounters;

- (id)uniqueKey;
- (id)init;
- (void)_sendPingsForURLBag:(id)a0;
- (BOOL)_setURLBagWithDictionary:(id)a0 response:(id)a1 error:(id *)a2;
- (BOOL)operation:(id)a0 shouldSetStoreFrontID:(id)a1;
- (id)initWithBagContext:(id)a0;
- (void).cxx_destruct;
- (void)operation:(id)a0 willSendRequest:(id)a1;
- (void)_setOutputURLBag:(id)a0;
- (void)_addHeadersToRequestProperties:(id)a0;
- (void)run;
- (void)_postBagDidLoadNotificationWithURLBag:(id)a0;

@end
