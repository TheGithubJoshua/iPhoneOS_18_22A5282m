@class FCCloudContext, FCUserVector, FCAsyncSerialQueue, NSDate, NSString;

@interface FCUserVectorManager : NSObject <FCAppActivityObserving>

@property (retain, nonatomic) FCAsyncSerialQueue *queue;
@property (retain, nonatomic) FCUserVector *userVector;
@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void)_applicationDidEnterBackground;
- (void)activityObservingApplicationWillTerminate;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)_submitPersonalizationVector;
- (void)_cacheGSToken;
- (void).cxx_destruct;
- (void)_fetchUserVector:(id /* block */)a0;
- (void)_applicationDidEnterForeground;
- (void)activityObservingApplicationWindowDidBecomeBackground;

@end
