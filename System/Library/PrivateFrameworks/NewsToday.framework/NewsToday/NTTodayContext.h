@class FCAsyncSerialQueue, NSString, NTSourceAvailabilityManager, NSObject;
@protocol FCContentContext, FCWritablePrivateDataStorage, NTTodayResultsSource, FCReadablePrivateDataStorage, OS_dispatch_queue;

@interface NTTodayContext : NSObject <FCNetworkReachabilityObserving, NTTodayContext>

@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (retain, nonatomic) id<FCReadablePrivateDataStorage> readablePrivateDataStorage;
@property (retain, nonatomic) id<FCWritablePrivateDataStorage> writablePrivateDataStorage;
@property (retain, nonatomic) NTSourceAvailabilityManager *sourceAvailabilityManager;
@property (retain, nonatomic) id<NTTodayResultsSource> todayResultsSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) FCAsyncSerialQueue *fetchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ newResultsHandler;

- (void)writeUserDidReadHeadlineWithAnalyticsElement:(id)a0 atDate:(id)a1 withCompletion:(id /* block */)a2;
- (id)init;
- (void)_setupTodayResultsSource;
- (void)fetchModuleDescriptorsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)placeholderResultsWithOperationInfo:(id)a0;
- (id)initWithContentHostDirectory:(id)a0 processVariant:(unsigned long long)a1 accessQueue:(id)a2 fetchQueue:(id)a3;
- (void)fetchLatestResultsWithOperationInfo:(id)a0 completion:(id /* block */)a1;
- (void)writeUserDidSeeHeadlinesWithAnalyticsElements:(id)a0 atDate:(id)a1 withCompletion:(id /* block */)a2;
- (id)initWithContentContext:(id)a0 processVariant:(unsigned long long)a1 accessQueue:(id)a2 fetchQueue:(id)a3;
- (void)networkReachabilityDidChange:(id)a0;

@end
