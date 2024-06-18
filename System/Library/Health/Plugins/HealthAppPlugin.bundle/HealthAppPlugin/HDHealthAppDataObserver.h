@class _HKDelayedOperation, HDHAHealthPluginHostFeedGenerator, HDProfile, NSString, NSObject, HDDataManager;
@protocol OS_dispatch_queue;

@interface HDHealthAppDataObserver : NSObject <HDDataObserver>

@property (retain, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDDataManager *dataManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *debounceQueue;
@property (retain, nonatomic) _HKDelayedOperation *delayedOperation;
@property (retain, nonatomic) HDHAHealthPluginHostFeedGenerator *feedGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)runBackgroundGeneration;
- (id)initWithProfile:(id)a0 debounceTime:(double)a1;
- (id)alertSampleTypes;
- (void)start;
- (void)observeForAlertSampleTypes;
- (void).cxx_destruct;
- (void)debounceRunBackgroundGeneration;
- (void)dealloc;

@end
