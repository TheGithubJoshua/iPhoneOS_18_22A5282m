@protocol HKSPSleepFocusModeBridge;

@interface HDSPAppPredictionClient : NSObject <HDSPSleepProactiveBridge>

@property (readonly, nonatomic) id<HKSPSleepFocusModeBridge> sleepFocusModeBridge;

- (void).cxx_destruct;
- (id)initWithSleepFocusModeBridge:(id)a0;
- (void)createSuggestedHomeScreenPageWithCompletion:(id /* block */)a0;

@end
