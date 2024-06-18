@class NSString, HKProxyProvider;

@interface HKWorkoutControl : NSObject <_HKXPCExportable, HKWorkoutControlClient> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)generateFakeDataForActivityType:(long long)a0 minutes:(double)a1 completion:(id /* block */)a2;
- (void)finishAllWorkoutsWithCompletion:(id /* block */)a0;
- (void)generatePauseOrResumeRequest:(id /* block */)a0;
- (void)generateWorkoutMarkerWithCompletion:(id /* block */)a0;

@end
