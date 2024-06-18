@class NSString, NSHashTable;
@protocol ATXModeFeaturizerDelegate;

@interface ATXModeIsSleepingBasedOnBacklightDataFeaturizer : NSObject <ATXModeFeaturizer>

@property (retain, nonatomic) NSHashTable *timers;
@property (weak, nonatomic) id<ATXModeFeaturizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)returnValueOnError;
- (void)addTimerForDate:(id)a0;
- (id)init;
- (void)stopListening;
- (void).cxx_destruct;
- (void)beginListening;
- (void)handleNewEvent;
- (id)provideFeatures;
- (id)queryEvents;

@end
