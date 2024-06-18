@protocol DSMotionProviderDelegate;

@interface DSMotionProvider : DSProvider

@property (weak, nonatomic) id<DSMotionProviderDelegate> delegate;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)failedToStartProviderWithOptions:(id)a0 error:(id)a1;
- (void)requestedMotionDataWithOption:(id)a0;
- (void)stoppedProvider;
- (void)startMotionDataProviderWithOptions:(id)a0;
- (void)subscribedToMotionDataWithOptions:(id)a0;
- (void)subscriptionExpired;
- (void)stopMotionDataProvider;
- (void)startedProviderWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)sendMotionData:(id)a0;
- (void)unsubscribed;

@end
